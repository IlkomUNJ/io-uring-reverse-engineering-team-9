// SPDX-License-Identifier: GPL-2.0

/**
 * Prepare madvise request, then set its parameters according
 * to values from the SQE and force asynchronous execution.
 */
int io_madvise_prep(struct io_kiocb *req, const struct io_uring_sqe *sqe);

/**
 * Extracts the address, length, and advice parameters from the req,
 * then called do_madvise() function if CONFIG_ADVISE_SYSCALLS and
 * CONFIG_MMU is defined. Stores the result of do_madvise() in ret
 * and returns IOU_OK for successful submission, or -EOPNOTSUPP if not defined.
 */
int io_madvise(struct io_kiocb *req, unsigned int issue_flags);

/**
 * prepare fadvise operation for req, then configure its details and potentially enable async mode according to the values from sqe
 */
int io_fadvise_prep(struct io_kiocb *req, const struct io_uring_sqe *sqe);

/**
 * Executes fadvise. Retrieves parameters from req, calls vfs_fadvise(),
 * and sets the result. Warns on non-blocking for async operations.
 */
int io_fadvise(struct io_kiocb *req, unsigned int issue_flags);
