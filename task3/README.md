| Structure name | Defined in        | Attributes | Caller Functions Source | source caller | usage
|----------------|-------------------|------------|-------------------------|---------------|-------------------
| io_fadvise     | io_uring/advise.c | file, u64, u64, u32 | io_fadvise_force_async |io_uring/advise.c | function parameter |
|                |                   |            | io_fadvise_prep         | io_uring/advise.c | local variable, function parameter |
|                |                   |            | io_fadvise              | io_uring/advise.c | local variable, function parameter |
| io_madvise     | io_uring/advise.c | file, u64, u64, u32 | io_madvise_prep | io_uring/advise.c | local variable, function parameter |
|                |                   |            | io_madvise              | io_uring/advise.c | local variable, function parameter |
| io_cancel      | io_uring/cancel.c | file, u64, u32, u32, u8 | SYSCALL_DEFINE3 |fs/aio.c  | function parameter |
|                |                   |            | io_async_cancel_prep    | io_uring/cancel.c | local variable, function parameter |
|                |                   |            | io_async_cancel         | io_uring/cancel.c | local variable, function parameter |
|                |                   |            | COND_SYSCALL            | kernel/sys_ni.c | function parameter |
| io_cancel_data | io_uring/cancel.h | io_ring_ctx, union {u64, file}, u8, u32, int | SYSCALL_DEFINE3 |fs/aio.c  | function parameter |
|                |                   |            | io_cancel_req_match     | io_uring/cancel.c | function parameter |
|                |                   |            | io_cancel_cb            | io_uring/cancel.c | local variable |
|                |                   |            | io_async_cancel_one     | io_uring/cancel.c | function parameter |
|                |                   |            | io_try_cancel           | io_uring/cancel.c | function parameter |
|                |                   |            | __io_async_cancel       | io_uring/cancel.c | function parameter |
|                |                   |            | io_async_cancel         | io_uring/cancel.c | local variable |
|                |                   |            | __io_sync_cancel         | io_uring/cancel.c | function parameter |
|                |                   |            | io_sync_cancel          | io_uring/cancel.c | local variable |
|                |                   |            | io_cancel_remove        | io_uring/cancel.c | function parameter |
|                |                   |            | io_futex_cancel         | io_uring/futex.c  | function parameter |
|                |                   |            | io_poll_find            | io_uring/poll.c   | function parameter |
|                |                   |            | io_poll_file_find       | io_uring/poll.c   | function parameter |
|                |                   |            | __io_poll_cancel        | io_uring/poll.c   | function parameter |
|                |                   |            | io_poll_cancel          | io_uring/poll.c   | function parameter |
|                |                   |            | io_poll_remove          | io_uring/poll.c   | local variable |
|                |                   |            | io_timeout_extract      | io_uring/timeout.c | function parameter |
|                |                   |            | io_timeout_cancel       | io_uring/timeout.c | function parameter |
|                |                   |            | io_req_task_link_timeout | io_uring/timeout.c | local variable |
|                |                   |            | io_timeout_update       | io_uring/timeout.c | local variable |
|                |                   |            | io_timeout_remove       | io_uring/timeout.c | local variable |
|                |                   |            | io_waitid_cancel        | io_uring/waitid.c  | function parameter |
| io_epoll       | io_uring/epoll.c  | file, int, int, int, epoll_event | io_epoll_ctl_prep |io_uring/epoll.c  | local variable, function parameter |
|                |                   |            | io_epoll_ctl        | io_uring/epoll.c | local variable, function parameter |
| io_epoll_wait  | io_uring/epoll.c  | file, int, epoll_event |io_epoll_wait_prep |io_uring/epoll.c  | local variable, function parameter |
|                |                   |            | io_epoll_wait       | io_uring/epoll.c | local variable, function parameter |
| io_ev_fd       | io_uring/eventfd.c | eventfd_ctx, unsigned int, unsigned, refcount_t, atomic_t, rcu_head | io_eventfd_free | io_uring/eventfd.c  | local variable, function parameter |
|                |                   |            | io_eventfd_put      | io_uring/epoll.c | function parameter |
|                |                   |            | io_eventfd_do_signal | io_uring/epoll.c | local variable, function parameter |
|                |                   |            | io_eventfd_release  | io_uring/epoll.c | function parameter |
|                |                   |            | __io_eventfd_signal | io_uring/epoll.c | function parameter |
|                |                   |            | io_eventfd_trigger  | io_uring/epoll.c | function parameter |
|                |                   |            | io_eventfd_grab     | io_uring/epoll.c | return value, local variable, function parameter |
|                |                   |            | io_eventfd_signal   | io_uring/epoll.c | local variable |
|                |                   |            | io_eventfd_flush_signal | io_uring/epoll.c | local variable |
|                |                   |            | io_eventfd_register | io_uring/epoll.c | local variable, function parameter |
|                |                   |            | io_eventfd_unregister | io_uring/epoll.c | local variable, function parameter |
| io_rename      | io_uring/fs.c     | file, int, int, filename, filename, int | io_renameat_prep | io_uring/fs.c  | local variable, function parameter |
|                |                   |            | io_renameat         | io_uring/fs.c    | local variable, function parameter |
|                |                   |            | io_renameat_cleanup | io_uring/fs.c | local variable, function parameter |
| io_unlink      | io_uring/fs.c     | file, int, int, filename | io_unlinkat_prep | io_uring/fs.c  | local variable, function parameter |
|                |                   |            | io_unlinkat         | io_uring/fs.c    | local variable, function parameter |
|                |                   |            | iio_unlinkat_cleanup | io_uring/fs.c | local variable, function parameter |
| io_mkdir       | io_uring/fs.c     | file, int, umode_t, filename | io_mkdirat_prep | io_uring/fs.c  | local variable, function parameter |
|                |                   |            | io_mkdirat         | io_uring/fs.c    | local variable, function parameter |
|                |                   |            | io_mkdirat_cleanup | io_uring/fs.c | local variable, function parameter |
| io_link        | io_uring/fs.c     | file, int, int, filename, filename, int | io_symlinkat_prep | io_uring/fs.c  | local variable, function parameter |
|                |                   |            | io_symlinkat        | io_uring/fs.c    | local variable, function parameter |
|                |                   |            | io_linkat_prep      | io_uring/fs.c    | local variable, function parameter |
|                |                   |            | io_linkat           | io_uring/fs.c    | local variable, function parameter |
|                |                   |            | io_link_cleanup     | io_uring/fs.c    | local variable, function parameter |



// Danar

### statx.c

| Structure name | Defined In     | Attributes                                                | Caller Function Source | Source Caller  | Usage               |
|----------------|----------------|-----------------------------------------------------------|------------------------|----------------|---------------------|
| io_statx       | statx.c        | struct statx, int dfd, unsigned int flags, char *filename | io_uring_prep_statx    | statx.c        | local variable      |
|                |                |                                                           | io_uring_submit_statx  | statx.c        | function parameter  |
|                |                |                                                           | io_statx_done          | statx.c        | function parameter  |

### sync.c
| Structure name | Defined In     | Attributes                                                | Caller Function Source | Source Caller  | Usage              |
|----------------|----------------|-----------------------------------------------------------|------------------------|----------------|--------------------|
| io_sync        | sync.c         | int fd, int flags, loff_t off, size_t len                 | io_uring_prep_fsync    | sync.c         | local variable     |
|                |                |                                                           | io_uring_prep_fdatasync| sync.c         | local variable     |
|                |                |                                                           | io_sync_done           | sync.c         | function parameter |

### tctx.c
| Structure name | Defined In     | Attributes                                                | Caller Function Source | Source Caller  | Usage              |
|----------------|----------------|-----------------------------------------------------------|------------------------|----------------|--------------------|
| io_tctx        | tctx.c         | struct task_struct *task, spinlock_t lock, void *data     | io_uring_tctx_get      | tctx.c         | return value       |
|                |                |                                                           | io_uring_tctx_put      | tctx.c         | function parameter |
|                |                |                                                           | io_tctx_cleanup        | tctx.c         | local variable     |

### timeout.c
| Structure name | Defined In     | Attributes                                             | Caller Function Source       | Source Caller   | Usage              |
|----------------|----------------|--------------------------------------------------------|------------------------------|-----------------|--------------------|
| io_timeout     | timeout.c      | struct timespec64 ts, unsigned int count, bool absolute| io_uring_prep_timeout        | timeout.c       | local variable     |
|                |                |                                                        | io_uring_prep_timeout_remove | timeout.c       | local variable     |
|                |                |                                                        | io_timeout_complete          | timeout.c       | function parameter |

### truncate.c
| Structure name | Defined In     | Attributes                                                | Caller Function Source | Source Caller  | Usage              |
|----------------|----------------|-----------------------------------------------------------|------------------------|----------------|--------------------|
| io_truncate    | truncate.c     | int fd, loff_t length, int flags                          | io_uring_prep_truncate | truncate.c     | local variable     |
|                |                |                                                           | io_uring_prep_ftruncate| truncate.c     | local variable     |
|                |                |                                                           | io_truncate_done       | truncate.c     | function parameter |

### uring_cmd.c
|Structure name |Defined In  |Attributes                                                             |Caller Function Source |Source Caller|Usage             | 
|---------------|------------|-----------------------------------------------------------------------|-----------------------|-------------|------------------|
|io_uring_cmd   |uring_cmd.c |int fd, unsigned int opcode, unsigned int flags, void *addr, size_t len|io_uring_prep_uring_cmd| uring_cmd.c |local variable    |
|               |            |                                                                       |io_uring_cmd_issue     | uring_cmd.c |function parameter|
|               |            |                                                                       |io_uring_cmd_complete  | uring_cmd.c |function parameter|

### waitid.c
| Structure name | Defined In     | Attributes                                                | Caller Function Source | Source Caller  | Usage              |
|----------------|----------------|-----------------------------------------------------------|------------------------|----------------|--------------------|
| io_waitid      | waitid.c       | idtype_t idtype, id_t id, siginfo_t *infop, int options   | io_uring_prep_waitid   | waitid.c       | local variable     |
|                |                |                                                           | io_waitid_complete     | waitid.c       | function parameter |

### xattr.c
| Structure name | Defined In     | Attributes                                                | Caller Function Source | Source Caller  | Usage              |
|----------------|----------------|-----------------------------------------------------------|------------------------|----------------|--------------------|
| io_xattr       | xattr.c        | const char *name, void *value, size_t size, int flags     | io_uring_prep_getxattr | xattr.c        | local variable     |
|                |                |                                                           | io_uring_prep_setxattr | xattr.c        | local variable     |
|                |                |                                                           | io_xattr_complete      | xattr.c        | function parameter |

### zcrx.c
| Structure name | Defined In     | Attributes                                         | Caller Function Source            | Source Caller | Usage              |
|----------------|----------------|----------------------------------------------------|-----------------------------------|---------------|--------------------|
| io_zerocopy    | zcrx.c         | int fd, void *buf, size_t len, unsigned int flags  | io_uring_prep_zerocopy_recv       | zcrx.c        | local variable     |
|                |                |                                                    | io_uring_prep_zerocopy_recv_multi | zcrx.c        | local variable     |
|                |                |                                                    | io_zerocopy_complete              | zcrx.c        | function parameter |