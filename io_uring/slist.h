#ifndef INTERNAL_IO_SLIST_H
#define INTERNAL_IO_SLIST_H

#include <linux/io_uring_types.h>

#define __wq_list_for_each(pos, head)				\
	for (pos = (head)->first; pos; pos = (pos)->next)

#define wq_list_for_each(pos, prv, head)			\
	for (pos = (head)->first, prv = NULL; pos; prv = pos, pos = (pos)->next)

#define wq_list_for_each_resume(pos, prv)			\
	for (; pos; prv = pos, pos = (pos)->next)

#define wq_list_empty(list)	(READ_ONCE((list)->first) == NULL)

#define INIT_WQ_LIST(list)	do {				\
	(list)->first = NULL;					\
} while (0)

/**
 * Adds a node after a given position in the work queue list.
 */
static inline void wq_list_add_after(struct io_wq_work_node *node,
				     struct io_wq_work_node *pos,
				     struct io_wq_work_list *list)
{
	struct io_wq_work_node *next = pos->next;

	pos->next = node;
	node->next = next;
	if (!next)
		list->last = node;
}

/**
 * Adds a node to the tail of the work queue list.
 */
static inline void wq_list_add_tail(struct io_wq_work_node *node,
				    struct io_wq_work_list *list)
{
	node->next = NULL;
	if (!list->first) {
		list->last = node;
		WRITE_ONCE(list->first, node);
	} else {
		list->last->next = node;
		list->last = node;
	}
}

/**
 * Adds a node to the head of the work queue list.
 */
static inline void wq_list_add_head(struct io_wq_work_node *node,
				    struct io_wq_work_list *list)
{
	node->next = list->first;
	if (!node->next)
		list->last = node;
	WRITE_ONCE(list->first, node);
}

/**
 * Cuts a portion of the work queue list.
 * The portion removed is from the node 'last' (inclusive) to the end of the list.
 * 'prev' is the node before 'last'. If 'last' is the first node, 'prev' is NULL.
 */
static inline void wq_list_cut(struct io_wq_work_list *list,
			       struct io_wq_work_node *last,
			       struct io_wq_work_node *prev)
{
	/* first in the list, if prev==NULL */
	if (!prev)
		WRITE_ONCE(list->first, last->next);
	else
		prev->next = last->next;

	if (last == list->last)
		list->last = prev;
	last->next = NULL;
}

/**
 * Internal helper to splice a work queue list into another at a given node.
 * Moves all elements from 'list' and appends them after 'to'.
 * 'list' will be empty after this operation.
 */
static inline void __wq_list_splice(struct io_wq_work_list *list,
				    struct io_wq_work_node *to)
{
	list->last->next = to->next;
	to->next = list->first;
	INIT_WQ_LIST(list);
}

/**
 * Splices a work queue list into another at a given node if the source list is not empty.
 * Returns true if the splice happened, false otherwise.
 */
static inline bool wq_list_splice(struct io_wq_work_list *list,
				  struct io_wq_work_node *to)
{
	if (!wq_list_empty(list)) {
		__wq_list_splice(list, to);
		return true;
	}
	return false;
}

/**
 * Adds a node to the head of a work queue stack.
 * The 'stack' itself is a dummy head node.
 */
static inline void wq_stack_add_head(struct io_wq_work_node *node,
				     struct io_wq_work_node *stack)
{
	node->next = stack->next;
	stack->next = node;
}

/**
 * Deletes a node from the work queue list.
 * 'prev' is the node before 'node'. If 'node' is the first node, 'prev' is NULL.
 */
static inline void wq_list_del(struct io_wq_work_list *list,
			       struct io_wq_work_node *node,
			       struct io_wq_work_node *prev)
{
	wq_list_cut(list, node, prev);
}

/**
 * Extracts (removes and returns) the first node from a work queue stack.
 * The 'stack' itself is a dummy head node. Assumes the stack is not empty.
 */
static inline
struct io_wq_work_node *wq_stack_extract(struct io_wq_work_node *stack)
{
	struct io_wq_work_node *node = stack->next;

	stack->next = node->next;
	return node;
}

/**
 * Gets the next work item in the list.
 * Returns NULL if the current work item is the last one.
 */
static inline struct io_wq_work *wq_next_work(struct io_wq_work *work)
{
	if (!work->list.next)
		return NULL;

	return container_of(work->list.next, struct io_wq_work, list);
}

#endif // INTERNAL_IO_SLIST_H
