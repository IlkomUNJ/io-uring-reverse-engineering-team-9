// SPDX-License-Identifier: GPL-2.0
#ifndef IOU_KBUF_H
#define IOU_KBUF_H

#include <uapi/linux/io_uring.h>
#include <linux/io_uring_types.h>

enum {
	/* ring mapped provided buffers */
	IOBL_BUF_RING	= 1,
	/* buffers are consumed incrementally rather than always fully */
	IOBL_INC	= 2,
};

struct io_buffer_list {
	/*
	 * If ->buf_nr_pages is set, then buf_pages/buf_ring are used. If not,
	 * then these are classic provided buffers and ->buf_list is used.
	 */
	union {
		struct list_head buf_list;
		struct io_uring_buf_ring *buf_ring;
	};
	__u16 bgid;

	/* below is for ring provided buffers */
	__u16 buf_nr_pages;
	__u16 nr_entries;
	__u16 head;
	__u16 mask;

	__u16 flags;

	struct io_mapped_region region;
};

struct io_buffer {
	struct list_head list;
	__u64 addr;
	__u32 len;
	__u16 bid;
	__u16 bgid;
};

enum {
	/* can alloc a bigger vec */
	KBUF_MODE_EXPAND	= 1,
	/* if bigger vec allocated, free old one */
	KBUF_MODE_FREE		= 2,
};

struct buf_sel_arg {
	struct iovec *iovs;
	size_t out_len;
	size_t max_len;
	unsigned short nr_iovs;
	unsigned short mode;
};

/**
 * Select a buffer for the given request and return a user pointer.
 * Used for buffer selection in io_uring operations.
 */
void __user *io_buffer_select(struct io_kiocb *req, size_t *len,
			      unsigned int issue_flags);

/**
 * Select multiple buffers for the given request.
 * Fills the buf_sel_arg structure with selected buffers.
 */
int io_buffers_select(struct io_kiocb *req, struct buf_sel_arg *arg,
		      unsigned int issue_flags);

/**
 * Peek at available buffers for the given request without consuming them.
 * Used to check buffer availability.
 */
int io_buffers_peek(struct io_kiocb *req, struct buf_sel_arg *arg);

/**
 * Destroy all provided buffers associated with the given context.
 * Cleans up buffer resources.
 */
void io_destroy_buffers(struct io_ring_ctx *ctx);

/**
 * Prepare to remove provided buffers for the given request.
 * Parses the SQE for buffer removal.
 */
int io_remove_buffers_prep(struct io_kiocb *req, const struct io_uring_sqe *sqe);

/**
 * Remove provided buffers for the given request.
 * Executes buffer removal logic.
 */
int io_remove_buffers(struct io_kiocb *req, unsigned int issue_flags);

/**
 * Prepare to provide new buffers for the given request.
 * Parses the SQE for buffer provisioning.
 */
int io_provide_buffers_prep(struct io_kiocb *req, const struct io_uring_sqe *sqe);

/**
 * Provide new buffers for the given request.
 * Executes buffer provisioning logic.
 */
int io_provide_buffers(struct io_kiocb *req, unsigned int issue_flags);

/**
 * Register a provided buffer ring with the given context.
 * Sets up buffer ring mapping.
 */
int io_register_pbuf_ring(struct io_ring_ctx *ctx, void __user *arg);

/**
 * Unregister a provided buffer ring from the given context.
 * Cleans up buffer ring mapping.
 */
int io_unregister_pbuf_ring(struct io_ring_ctx *ctx, void __user *arg);

/**
 * Register the status of a provided buffer ring.
 * Used for buffer ring status tracking.
 */
int io_register_pbuf_status(struct io_ring_ctx *ctx, void __user *arg);

/**
 * Recycle a legacy provided buffer for the given request.
 * Returns true if buffer was recycled.
 */
bool io_kbuf_recycle_legacy(struct io_kiocb *req, unsigned issue_flags);

/**
 * Drop a legacy provided buffer for the given request.
 * Releases buffer resources.
 */
void io_kbuf_drop_legacy(struct io_kiocb *req);

/**
 * Put back a number of provided buffers after use.
 * Used for buffer accounting.
 */
unsigned int __io_put_kbufs(struct io_kiocb *req, int len, int nbufs);

/**
 * Commit the use of provided buffers for the given request.
 * Marks buffers as used.
 */
bool io_kbuf_commit(struct io_kiocb *req,
		    struct io_buffer_list *bl, int len, int nr);

/**
 * Get the mapped region for a provided buffer group.
 * Returns a pointer to the mapped region.
 */
struct io_mapped_region *io_pbuf_get_region(struct io_ring_ctx *ctx,
					    unsigned int bgid);

static inline bool io_kbuf_recycle_ring(struct io_kiocb *req)
{
	/*
	 * We don't need to recycle for REQ_F_BUFFER_RING, we can just clear
	 * the flag and hence ensure that bl->head doesn't get incremented.
	 * If the tail has already been incremented, hang on to it.
	 * The exception is partial io, that case we should increment bl->head
	 * to monopolize the buffer.
	 */
	/**
	 * Recycle a buffer from a buffer ring for the given request.
	 * Clears buffer ring flags and updates buffer index.
	 */
	if (req->buf_list) {
		req->buf_index = req->buf_list->bgid;
		req->flags &= ~(REQ_F_BUFFER_RING|REQ_F_BUFFERS_COMMIT);
		return true;
	}
	return false;
}

static inline bool io_do_buffer_select(struct io_kiocb *req)
{
	/**
	 * Check if buffer selection should be performed for the request.
	 * Returns true if selection is needed.
	 */
	if (!(req->flags & REQ_F_BUFFER_SELECT))
		return false;
	return !(req->flags & (REQ_F_BUFFER_SELECTED|REQ_F_BUFFER_RING));
}

static inline bool io_kbuf_recycle(struct io_kiocb *req, unsigned issue_flags)
{
	/**
	 * Recycle a provided buffer for the given request if possible.
	 * Chooses the appropriate recycling method.
	 */
	if (req->flags & REQ_F_BL_NO_RECYCLE)
		return false;
	if (req->flags & REQ_F_BUFFER_SELECTED)
		return io_kbuf_recycle_legacy(req, issue_flags);
	if (req->flags & REQ_F_BUFFER_RING)
		return io_kbuf_recycle_ring(req);
	return false;
}

static inline unsigned int io_put_kbuf(struct io_kiocb *req, int len,
				       unsigned issue_flags)
{
	/**
	 * Put back a single provided buffer after use.
	 * Used for buffer accounting.
	 */
	if (!(req->flags & (REQ_F_BUFFER_RING | REQ_F_BUFFER_SELECTED)))
		return 0;
	return __io_put_kbufs(req, len, 1);
}

static inline unsigned int io_put_kbufs(struct io_kiocb *req, int len,
					int nbufs, unsigned issue_flags)
{
	/**
	 * Put back multiple provided buffers after use.
	 * Used for buffer accounting.
	 */
	if (!(req->flags & (REQ_F_BUFFER_RING | REQ_F_BUFFER_SELECTED)))
		return 0;
	return __io_put_kbufs(req, len, nbufs);
}
#endif
