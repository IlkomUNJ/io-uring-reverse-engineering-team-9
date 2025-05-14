// SPDX-License-Identifier: GPL-2.0
#ifndef IORING_CANCEL_H
#define IORING_CANCEL_H

#include <linux/io_uring_types.h>

struct io_cancel_data {
	struct io_ring_ctx *ctx;
	union {
		u64 data;
		struct file *file;
	};
	u8 opcode;
	u32 flags;
	int seq;
};

/**
 * Prepares an asynchronous cancellation request.
 */
int io_async_cancel_prep(struct io_kiocb *req, const struct io_uring_sqe *sqe);
/**
 * Executes an asynchronous cancellation request.
 */
int io_async_cancel(struct io_kiocb *req, unsigned int issue_flags);

/**
 * Attempts to cancel an I/O operation.
 */
int io_try_cancel(struct io_uring_task *tctx, struct io_cancel_data *cd,
		  unsigned int issue_flags);

/**
 * Executes a synchronous cancellation request.
 */
int io_sync_cancel(struct io_ring_ctx *ctx, void __user *arg);
/**
 * Checks if a request matches the cancellation criteria.
 */
bool io_cancel_req_match(struct io_kiocb *req, struct io_cancel_data *cd);

/**
 * Removes and potentially cancels all matching requests from a list.
 */
bool io_cancel_remove_all(struct io_ring_ctx *ctx, struct io_uring_task *tctx,
			  struct hlist_head *list, bool cancel_all,
			  bool (*cancel)(struct io_kiocb *));

/**
 * Removes and potentially cancels a specific request from a list based on cancellation data.
 */
int io_cancel_remove(struct io_ring_ctx *ctx, struct io_cancel_data *cd,
		     unsigned int issue_flags, struct hlist_head *list,
		     bool (*cancel)(struct io_kiocb *));

/**
 * Checks if the request's cancel sequence matches the given sequence.
 * If not already set, it sets the request's cancel sequence.
 */
static inline bool io_cancel_match_sequence(struct io_kiocb *req, int sequence)
{
	if (req->cancel_seq_set && sequence == req->work.cancel_seq)
		return true;

	req->cancel_seq_set = true;
	req->work.cancel_seq = sequence;
	return false;
}

#endif
