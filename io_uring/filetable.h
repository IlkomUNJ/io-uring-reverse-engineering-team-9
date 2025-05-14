// SPDX-License-Identifier: GPL-2.0
#ifndef IOU_FILE_TABLE_H
#define IOU_FILE_TABLE_H

#include <linux/file.h>
#include <linux/io_uring_types.h>
#include "rsrc.h"

/**
 * Allocates and initializes file tables for the given io_ring_ctx.
 * It attempts to allocate a bitmap and an array of file pointers.
 */
bool io_alloc_file_tables(struct io_ring_ctx *ctx, struct io_file_table *table, unsigned nr_files);

/**
 * Frees the file tables previously allocated for the io_ring_ctx.
 * This includes freeing the bitmap and the array of file pointers.
 */
void io_free_file_tables(struct io_ring_ctx *ctx, struct io_file_table *table);

/**
 * Installs a file into the fixed file table at a specific slot.
 * This is typically used for registering files for I/O operations.
 */
int io_fixed_fd_install(struct io_kiocb *req, unsigned int issue_flags,
			struct file *file, unsigned int file_slot);

/**
 * Internal helper function to install a file into the fixed file table.
 * It directly updates the context's file table.
 */
int __io_fixed_fd_install(struct io_ring_ctx *ctx, struct file *file,
				unsigned int file_slot);

/**
 * Removes a file from the fixed file table at a given offset.
 * This unregisters a previously installed file.
 */
int io_fixed_fd_remove(struct io_ring_ctx *ctx, unsigned int offset);

/**
 * Registers a range of file indices for allocation.
 * This allows restricting file slot allocations to a specific range.
 */
int io_register_file_alloc_range(struct io_ring_ctx *ctx,
				 struct io_uring_file_index_range __user *arg);

/**
 * Retrieves the I/O request flags associated with a file.
 * These flags can indicate properties like whether the file supports NOWAIT.
 */
io_req_flags_t io_file_get_flags(struct file *file);

/**
 * Clears a bit in the file table's bitmap, indicating a slot is free.
 * Also updates the allocation hint for future allocations.
 */
static inline void io_file_bitmap_clear(struct io_file_table *table, int bit)
{
	WARN_ON_ONCE(!test_bit(bit, table->bitmap));
	__clear_bit(bit, table->bitmap);
	table->alloc_hint = bit;
}

/**
 * Sets a bit in the file table's bitmap, indicating a slot is occupied.
 * Also updates the allocation hint for future allocations.
 */
static inline void io_file_bitmap_set(struct io_file_table *table, int bit)
{
	WARN_ON_ONCE(test_bit(bit, table->bitmap));
	__set_bit(bit, table->bitmap);
	table->alloc_hint = bit + 1;
}

#define FFS_NOWAIT		0x1UL
#define FFS_ISREG		0x2UL
#define FFS_MASK		~(FFS_NOWAIT|FFS_ISREG)

/**
 * Extracts flags from an io_rsrc_node's file_ptr.
 * These flags are shifted to be compatible with REQ_F_SUPPORT_NOWAIT_BIT.
 */
static inline unsigned int io_slot_flags(struct io_rsrc_node *node)
{

	return (node->file_ptr & ~FFS_MASK) << REQ_F_SUPPORT_NOWAIT_BIT;
}

/**
 * Retrieves the file pointer from an io_rsrc_node.
 * It masks out the flags stored within the file_ptr.
 */
static inline struct file *io_slot_file(struct io_rsrc_node *node)
{
	return (struct file *)(node->file_ptr & FFS_MASK);
}

/**
 * Sets the file pointer and associated flags in an io_rsrc_node.
 * It combines the file pointer with flags derived from io_file_get_flags.
 */
static inline void io_fixed_file_set(struct io_rsrc_node *node,
				     struct file *file)
{
	node->file_ptr = (unsigned long)file |
		(io_file_get_flags(file) >> REQ_F_SUPPORT_NOWAIT_BIT);
}

/**
 * Sets the file allocation range for the io_ring_ctx.
 * This defines the start and end offsets for file slot allocations and updates the hint.
 */
static inline void io_file_table_set_alloc_range(struct io_ring_ctx *ctx,
						 unsigned off, unsigned len)
{
	ctx->file_alloc_start = off;
	ctx->file_alloc_end = off + len;
	ctx->file_table.alloc_hint = ctx->file_alloc_start;
}

#endif
