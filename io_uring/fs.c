// SPDX-License-Identifier: GPL-2.0
#include <linux/kernel.h>
#include <linux/errno.h>
#include <linux/fs.h>
#include <linux/file.h>
#include <linux/mm.h>
#include <linux/slab.h>
#include <linux/namei.h>
#include <linux/io_uring.h>

#include <uapi/linux/io_uring.h>

#include "../fs/internal.h"

#include "io_uring.h"
#include "fs.h"

struct io_rename {
	struct file			*file;
	int				old_dfd;
	int				new_dfd;
	struct filename			*oldpath;
	struct filename			*newpath;
	int				flags;
};

struct io_unlink {
	struct file			*file;
	int				dfd;
	int				flags;
	struct filename			*filename;
};

struct io_mkdir {
	struct file			*file;
	int				dfd;
	umode_t				mode;
	struct filename			*filename;
};

struct io_link {
	struct file			*file;
	int				old_dfd;
	int				new_dfd;
	struct filename			*oldpath;
	struct filename			*newpath;
	int				flags;
};

/**
 * Prepares a renameat operation.
 * It extracts the old and new directory file descriptors, paths, and flags
 * from the submission queue entry (SQE), converts paths to kernel filenames,
 * and sets flags for cleanup and forced asynchronous execution.
 */
int io_renameat_prep(struct io_kiocb *req, const struct io_uring_sqe *sqe)
{
	struct io_rename *ren = io_kiocb_to_cmd(req, struct io_rename);
	const char __user *oldf, *newf;

	if (sqe->buf_index || sqe->splice_fd_in)
		return -EINVAL;
	if (unlikely(req->flags & REQ_F_FIXED_FILE))
		return -EBADF;

	ren->old_dfd = READ_ONCE(sqe->fd);
	oldf = u64_to_user_ptr(READ_ONCE(sqe->addr));
	newf = u64_to_user_ptr(READ_ONCE(sqe->addr2));
	ren->new_dfd = READ_ONCE(sqe->len);
	ren->flags = READ_ONCE(sqe->rename_flags);

	ren->oldpath = getname(oldf);
	if (IS_ERR(ren->oldpath))
		return PTR_ERR(ren->oldpath);

	ren->newpath = getname(newf);
	if (IS_ERR(ren->newpath)) {
		putname(ren->oldpath);
		return PTR_ERR(ren->newpath);
	}

	req->flags |= REQ_F_NEED_CLEANUP;
	req->flags |= REQ_F_FORCE_ASYNC;
	return 0;
}

/**
 * Executes a renameat operation.
 * It retrieves the rename parameters from the request, performs the
 * rename operation using do_renameat2, clears the cleanup flag,
 * and sets the result in the request.
 */
int io_renameat(struct io_kiocb *req, unsigned int issue_flags)
{
	struct io_rename *ren = io_kiocb_to_cmd(req, struct io_rename);
	int ret;

	WARN_ON_ONCE(issue_flags & IO_URING_F_NONBLOCK);

	ret = do_renameat2(ren->old_dfd, ren->oldpath, ren->new_dfd,
				ren->newpath, ren->flags);

	req->flags &= ~REQ_F_NEED_CLEANUP;
	io_req_set_res(req, ret, 0);
	return IOU_OK;
}

/**
 * Cleans up after a renameat operation.
 * It releases the kernel filenames for the old and new paths.
 */
void io_renameat_cleanup(struct io_kiocb *req)
{
	struct io_rename *ren = io_kiocb_to_cmd(req, struct io_rename);

	putname(ren->oldpath);
	putname(ren->newpath);
}

/**
 * Prepares an unlinkat operation.
 * It extracts the directory file descriptor, flags, and filename from the SQE,
 * converts the filename to a kernel filename, and sets flags for cleanup
 * and forced asynchronous execution.
 */
int io_unlinkat_prep(struct io_kiocb *req, const struct io_uring_sqe *sqe)
{
	struct io_unlink *un = io_kiocb_to_cmd(req, struct io_unlink);
	const char __user *fname;

	if (sqe->off || sqe->len || sqe->buf_index || sqe->splice_fd_in)
		return -EINVAL;
	if (unlikely(req->flags & REQ_F_FIXED_FILE))
		return -EBADF;

	un->dfd = READ_ONCE(sqe->fd);

	un->flags = READ_ONCE(sqe->unlink_flags);
	if (un->flags & ~AT_REMOVEDIR)
		return -EINVAL;

	fname = u64_to_user_ptr(READ_ONCE(sqe->addr));
	un->filename = getname(fname);
	if (IS_ERR(un->filename))
		return PTR_ERR(un->filename);

	req->flags |= REQ_F_NEED_CLEANUP;
	req->flags |= REQ_F_FORCE_ASYNC;
	return 0;
}

/**
 * Executes an unlinkat operation.
 * It retrieves the unlink parameters, performs either rmdir or unlinkat
 * based on the flags, clears the cleanup flag, and sets the result.
 */
int io_unlinkat(struct io_kiocb *req, unsigned int issue_flags)
{
	struct io_unlink *un = io_kiocb_to_cmd(req, struct io_unlink);
	int ret;

	WARN_ON_ONCE(issue_flags & IO_URING_F_NONBLOCK);

	if (un->flags & AT_REMOVEDIR)
		ret = do_rmdir(un->dfd, un->filename);
	else
		ret = do_unlinkat(un->dfd, un->filename);

	req->flags &= ~REQ_F_NEED_CLEANUP;
	io_req_set_res(req, ret, 0);
	return IOU_OK;
}

/**
 * Cleans up after an unlinkat operation.
 * It releases the kernel filename.
 */
void io_unlinkat_cleanup(struct io_kiocb *req)
{
	struct io_unlink *ul = io_kiocb_to_cmd(req, struct io_unlink);

	putname(ul->filename);
}

/**
 * Prepares a mkdirat operation.
 * It extracts the directory file descriptor, mode, and filename from the SQE,
 * converts the filename to a kernel filename, and sets flags for cleanup
 * and forced asynchronous execution.
 */
int io_mkdirat_prep(struct io_kiocb *req, const struct io_uring_sqe *sqe)
{
	struct io_mkdir *mkd = io_kiocb_to_cmd(req, struct io_mkdir);
	const char __user *fname;

	if (sqe->off || sqe->rw_flags || sqe->buf_index || sqe->splice_fd_in)
		return -EINVAL;
	if (unlikely(req->flags & REQ_F_FIXED_FILE))
		return -EBADF;

	mkd->dfd = READ_ONCE(sqe->fd);
	mkd->mode = READ_ONCE(sqe->len);

	fname = u64_to_user_ptr(READ_ONCE(sqe->addr));
	mkd->filename = getname(fname);
	if (IS_ERR(mkd->filename))
		return PTR_ERR(mkd->filename);

	req->flags |= REQ_F_NEED_CLEANUP;
	req->flags |= REQ_F_FORCE_ASYNC;
	return 0;
}

/**
 * Executes a mkdirat operation.
 * It retrieves mkdir parameters, performs the mkdirat operation,
 * clears the cleanup flag, and sets the result.
 */
int io_mkdirat(struct io_kiocb *req, unsigned int issue_flags)
{
	struct io_mkdir *mkd = io_kiocb_to_cmd(req, struct io_mkdir);
	int ret;

	WARN_ON_ONCE(issue_flags & IO_URING_F_NONBLOCK);

	ret = do_mkdirat(mkd->dfd, mkd->filename, mkd->mode);

	req->flags &= ~REQ_F_NEED_CLEANUP;
	io_req_set_res(req, ret, 0);
	return IOU_OK;
}

/**
 * Cleans up after a mkdirat operation.
 * It releases the kernel filename.
 */
void io_mkdirat_cleanup(struct io_kiocb *req)
{
	struct io_mkdir *md = io_kiocb_to_cmd(req, struct io_mkdir);

	putname(md->filename);
}

/**
 * Prepares a symlinkat operation.
 * It extracts the target path and link path from the SQE,
 * converts them to kernel filenames, and sets flags for cleanup
 * and forced asynchronous execution.
 */
int io_symlinkat_prep(struct io_kiocb *req, const struct io_uring_sqe *sqe)
{
	struct io_link *sl = io_kiocb_to_cmd(req, struct io_link);
	const char __user *oldpath, *newpath;

	if (sqe->len || sqe->rw_flags || sqe->buf_index || sqe->splice_fd_in)
		return -EINVAL;
	if (unlikely(req->flags & REQ_F_FIXED_FILE))
		return -EBADF;

	sl->new_dfd = READ_ONCE(sqe->fd);
	oldpath = u64_to_user_ptr(READ_ONCE(sqe->addr));
	newpath = u64_to_user_ptr(READ_ONCE(sqe->addr2));

	sl->oldpath = getname(oldpath);
	if (IS_ERR(sl->oldpath))
		return PTR_ERR(sl->oldpath);

	sl->newpath = getname(newpath);
	if (IS_ERR(sl->newpath)) {
		putname(sl->oldpath);
		return PTR_ERR(sl->newpath);
	}

	req->flags |= REQ_F_NEED_CLEANUP;
	req->flags |= REQ_F_FORCE_ASYNC;
	return 0;
}

/**
 * Executes a symlinkat operation.
 * It retrieves symlink parameters, performs the symlinkat operation,
 * clears the cleanup flag, and sets the result.
 */
int io_symlinkat(struct io_kiocb *req, unsigned int issue_flags)
{
	struct io_link *sl = io_kiocb_to_cmd(req, struct io_link);
	int ret;

	WARN_ON_ONCE(issue_flags & IO_URING_F_NONBLOCK);

	ret = do_symlinkat(sl->oldpath, sl->new_dfd, sl->newpath);

	req->flags &= ~REQ_F_NEED_CLEANUP;
	io_req_set_res(req, ret, 0);
	return IOU_OK;
}

/**
 * Prepares a linkat operation.
 * It extracts old and new directory file descriptors, paths, and flags
 * from the SQE, converts paths to kernel filenames, and sets flags for
 * cleanup and forced asynchronous execution.
 */
int io_linkat_prep(struct io_kiocb *req, const struct io_uring_sqe *sqe)
{
	struct io_link *lnk = io_kiocb_to_cmd(req, struct io_link);
	const char __user *oldf, *newf;

	if (sqe->buf_index || sqe->splice_fd_in)
		return -EINVAL;
	if (unlikely(req->flags & REQ_F_FIXED_FILE))
		return -EBADF;

	lnk->old_dfd = READ_ONCE(sqe->fd);
	lnk->new_dfd = READ_ONCE(sqe->len);
	oldf = u64_to_user_ptr(READ_ONCE(sqe->addr));
	newf = u64_to_user_ptr(READ_ONCE(sqe->addr2));
	lnk->flags = READ_ONCE(sqe->hardlink_flags);

	lnk->oldpath = getname_uflags(oldf, lnk->flags);
	if (IS_ERR(lnk->oldpath))
		return PTR_ERR(lnk->oldpath);

	lnk->newpath = getname(newf);
	if (IS_ERR(lnk->newpath)) {
		putname(lnk->oldpath);
		return PTR_ERR(lnk->newpath);
	}

	req->flags |= REQ_F_NEED_CLEANUP;
	req->flags |= REQ_F_FORCE_ASYNC;
	return 0;
}

/**
 * Executes a linkat operation.
 * It retrieves link parameters, performs the linkat operation,
 * clears the cleanup flag, and sets the result.
 */
int io_linkat(struct io_kiocb *req, unsigned int issue_flags)
{
	struct io_link *lnk = io_kiocb_to_cmd(req, struct io_link);
	int ret;

	WARN_ON_ONCE(issue_flags & IO_URING_F_NONBLOCK);

	ret = do_linkat(lnk->old_dfd, lnk->oldpath, lnk->new_dfd,
				lnk->newpath, lnk->flags);

	req->flags &= ~REQ_F_NEED_CLEANUP;
	io_req_set_res(req, ret, 0);
	return IOU_OK;
}

/**
 * Cleans up after a linkat or symlinkat operation.
 * It releases the kernel filenames for the old and new paths.
 */
void io_link_cleanup(struct io_kiocb *req)
{
	struct io_link *sl = io_kiocb_to_cmd(req, struct io_link);

	putname(sl->oldpath);
	putname(sl->newpath);
}
