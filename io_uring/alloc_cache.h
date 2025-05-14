#ifndef IOU_ALLOC_CACHE_H
#define IOU_ALLOC_CACHE_H

#include <linux/io_uring_types.h>

/*
 * Don't allow the cache to grow beyond this size.
 */
#define IO_ALLOC_CACHE_MAX	128

/**
* Frees the memory allocated for the cache.
* It iterates through the cached entries and calls the provided free function.
*/
void io_alloc_cache_free(struct io_alloc_cache *cache,
			 void (*free)(const void *));
/**
* Initializes an allocation cache.
* Sets up the cache with a maximum number of entries, element size, and initial bytes to clear.
*/
bool io_alloc_cache_init(struct io_alloc_cache *cache,
			 unsigned max_nr, unsigned int size,
			 unsigned int init_bytes);

/**
* Allocates a new entry for the cache using GFP flags.
* This function is called when the cache is empty and a new allocation is needed.
*/
void *io_cache_alloc_new(struct io_alloc_cache *cache, gfp_t gfp);

/**
* Puts an entry back into the allocation cache if space is available.
* If KASAN is enabled, it poisons the object before caching.
*/
static inline bool io_alloc_cache_put(struct io_alloc_cache *cache,
				      void *entry)
{
	if (cache->nr_cached < cache->max_cached) {
		if (!kasan_mempool_poison_object(entry))
			return false;
		cache->entries[cache->nr_cached++] = entry;
		return true;
	}
	return false;
}

/**
* Retrieves an entry from the allocation cache if available.
* If KASAN is enabled, it unpoisons the object and clears initial bytes if necessary.
*/
static inline void *io_alloc_cache_get(struct io_alloc_cache *cache)
{
	if (cache->nr_cached) {
		void *entry = cache->entries[--cache->nr_cached];

		/*
		 * If KASAN is enabled, always clear the initial bytes that
		 * must be zeroed post alloc, in case any of them overlap
		 * with KASAN storage.
		 */
#if defined(CONFIG_KASAN)
		kasan_mempool_unpoison_object(entry, cache->elem_size);
		if (cache->init_clear)
			memset(entry, 0, cache->init_clear);
#endif
		return entry;
	}

	return NULL;
}

/**
* Allocates an object from the cache.
* Tries to get an object from the cache first, and if not available, allocates a new one.
*/
static inline void *io_cache_alloc(struct io_alloc_cache *cache, gfp_t gfp)
{
	void *obj;

	obj = io_alloc_cache_get(cache);
	if (obj)
		return obj;
	return io_cache_alloc_new(cache, gfp);
}

/**
* Frees an object, trying to put it back into the cache first.
* If the cache is full, it frees the object directly using kfree.
*/
static inline void io_cache_free(struct io_alloc_cache *cache, void *obj)
{
	if (!io_alloc_cache_put(cache, obj))
		kfree(obj);
}

#endif
