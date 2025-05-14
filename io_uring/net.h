// SPDX-License-Identifier: GPL-2.0

#include <linux/net.h>
#include <linux/uio.h>
#include <linux/io_uring_types.h>

struct io_async_msghdr {
#if defined(CONFIG_NET)
	struct iou_vec				vec;

	struct_group(clear,
		int				namelen;
		struct iovec			fast_iov;
		__kernel_size_t			controllen;
		__kernel_size_t			payloadlen;
		struct sockaddr __user		*uaddr;
		struct msghdr			msg;
		struct sockaddr_storage		addr;
	);
#else
	struct_group(clear);
#endif
};

#if defined(CONFIG_NET)

/**
 * prepare shutdown operation for io_uring
 * parses sqe and sets up shutdown parameters
 */
int io_shutdown_prep(struct io_kiocb *req, const struct io_uring_sqe *sqe);

/**
 * perform socket shutdown operation
 * executes shutdown based on prepared parameters
 */
int io_shutdown(struct io_kiocb *req, unsigned int issue_flags);

/**
 * cleanup resources for sendmsg/recvmsg requests
 * releases any allocated memory or state
 */
void io_sendmsg_recvmsg_cleanup(struct io_kiocb *req);

/**
 * prepare sendmsg operation for io_uring
 * parses sqe and sets up sendmsg parameters
 */
int io_sendmsg_prep(struct io_kiocb *req, const struct io_uring_sqe *sqe);

/**
 * perform sendmsg operation
 * sends message using prepared parameters
 */
int io_sendmsg(struct io_kiocb *req, unsigned int issue_flags);

/**
 * perform send operation
 * sends data on a socket
 */
int io_send(struct io_kiocb *req, unsigned int issue_flags);

/**
 * prepare recvmsg operation for io_uring
 * parses sqe and sets up recvmsg parameters
 */
int io_recvmsg_prep(struct io_kiocb *req, const struct io_uring_sqe *sqe);

/**
 * perform recvmsg operation
 * receives message using prepared parameters
 */
int io_recvmsg(struct io_kiocb *req, unsigned int issue_flags);

/**
 * perform recv operation
 * receives data from a socket
 */
int io_recv(struct io_kiocb *req, unsigned int issue_flags);

/**
 * handle failure for send/recv operations
 * sets error state and performs cleanup
 */
void io_sendrecv_fail(struct io_kiocb *req);

/**
 * prepare accept operation for io_uring
 * parses sqe and sets up accept parameters
 */
int io_accept_prep(struct io_kiocb *req, const struct io_uring_sqe *sqe);

/**
 * perform accept operation
 * accepts a new connection on a socket
 */
int io_accept(struct io_kiocb *req, unsigned int issue_flags);

/**
 * prepare socket creation for io_uring
 * parses sqe and sets up socket parameters
 */
int io_socket_prep(struct io_kiocb *req, const struct io_uring_sqe *sqe);

/**
 * perform socket creation
 * creates a new socket based on parameters
 */
int io_socket(struct io_kiocb *req, unsigned int issue_flags);

/**
 * prepare connect operation for io_uring
 * parses sqe and sets up connect parameters
 */
int io_connect_prep(struct io_kiocb *req, const struct io_uring_sqe *sqe);

/**
 * perform connect operation
 * connects a socket to a remote address
 */
int io_connect(struct io_kiocb *req, unsigned int issue_flags);

/**
 * perform zero-copy send operation
 * sends data using zero-copy mechanism
 */
int io_send_zc(struct io_kiocb *req, unsigned int issue_flags);

/**
 * perform zero-copy sendmsg operation
 * sends message using zero-copy mechanism
 */
int io_sendmsg_zc(struct io_kiocb *req, unsigned int issue_flags);

/**
 * prepare zero-copy send operation
 * parses sqe and sets up zero-copy send parameters
 */
int io_send_zc_prep(struct io_kiocb *req, const struct io_uring_sqe *sqe);

/**
 * cleanup resources for zero-copy send
 * releases any allocated memory or state
 */
void io_send_zc_cleanup(struct io_kiocb *req);

/**
 * prepare bind operation for io_uring
 * parses sqe and sets up bind parameters
 */
int io_bind_prep(struct io_kiocb *req, const struct io_uring_sqe *sqe);

/**
 * perform bind operation
 * binds a socket to an address
 */
int io_bind(struct io_kiocb *req, unsigned int issue_flags);

/**
 * prepare listen operation for io_uring
 * parses sqe and sets up listen parameters
 */
int io_listen_prep(struct io_kiocb *req, const struct io_uring_sqe *sqe);

/**
 * perform listen operation
 * sets a socket to listen for connections
 */
int io_listen(struct io_kiocb *req, unsigned int issue_flags);

/**
 * free cached netmsg entry
 * releases memory for netmsg cache
 */
void io_netmsg_cache_free(const void *entry);
#else
/**
 * free cached netmsg entry (no-op if CONFIG_NET is not set)
 * does nothing if networking is disabled
 */
static inline void io_netmsg_cache_free(const void *entry)
{
}
#endif
