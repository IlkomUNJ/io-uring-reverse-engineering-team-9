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
|                |                   |            | io_eventfd_put      | io_uring/eventfd.c | function parameter |
|                |                   |            | io_eventfd_do_signal | io_uring/eventfd.c | local variable, function parameter |
|                |                   |            | io_eventfd_release  | io_uring/eventfd.c | function parameter |
|                |                   |            | __io_eventfd_signal | io_uring/eventfd.c | function parameter |
|                |                   |            | io_eventfd_trigger  | io_uring/eventfd.c | function parameter |
|                |                   |            | io_eventfd_grab     | io_uring/eventfd.c | return value, local variable, function parameter |
|                |                   |            | io_eventfd_signal   | io_uring/eventfd.c | local variable |
|                |                   |            | io_eventfd_flush_signal | io_uring/eventfd.c | local variable |
|                |                   |            | io_eventfd_register | io_uring/eventfd.c | local variable, function parameter |
|                |                   |            | io_eventfd_unregister | io_uring/eventfd.c | local variable, function parameter |
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
| io_futex       | io_uring/futex.c   | file, union {u32, futex_waitv}, unsigned long, unsigned long, unsigned long, u32, unsigned int, bool | io_futexv_complete | io_uring/futex.c  | local variable, function parameter |
|                |                   |            | io_futexv_claim    | io_uring/futex.c    | function parameter |
|                |                   |            | __io_futex_cancel    | io_uring/futex.c    | local variable, function parameter |
|                |                   |            | io_futex_prep    | io_uring/futex.c    | local variable, function parameter |
|                |                   |            | io_futex_wakev_fn    | io_uring/futex.c    | local variable, function parameter |
|                |                   |            | io_futexv_prep    | io_uring/futex.c    | local variable, function parameter |
|                |                   |            | io_futexv_wait    | io_uring/futex.c    | local variable, function parameter |
|                |                   |            | io_futex_wait    | io_uring/futex.c    | local variable, function parameter |
|                |                   |            | io_futex_wake    | io_uring/futex.c    | local variable, function parameter |
| io_futex_data   | io_uring/futex.c     | futex_q, io_kiocb | io_futex_cache_init | io_uring/fs.c  | function parameter |
|                |                   |            | __io_futex_cancel    | io_uring/futex.c    | local variable |
|                |                   |            | io_futex_wake_fn    | io_uring/futex.c    | local variable, function parameter |
|                |                   |            | io_futex_wait    | io_uring/futex.c    | local variable |
| io_defer_entry  | io_uring/io_uring.c | list_head, io_kiocb, u32 | io_queue_deferred | io_uring/io_uring.c  | local variable, function parameter |
|                |                   |            | io_drain_req    | io_uring/io_uring.c    | local variable |
|                |                   |            | io_cancel_defer_files    | io_uring/io_uring.c    | local variable, function parameter |
| ext_arg  | io_uring/io_uring.c | size_t, timespec64, sigset_t __user, ktime_t, bool, bool | __io_cqring_wait_schedule | io_uring/io_uring.c  | local variable, function parameter |
|                |                   |            | io_cqring_wait_schedule    | io_uring/io_uring.c    | function_parameter |
|                |                   |            | io_cqring_wait    | io_uring/io_uring.c    | function_parameter |
|                |                   |            | io_get_ext_arg    | io_uring/io_uring.c    | function_parameter |
|                |                   |            | SYSCALL_DEFINE6    | io_uring/io_uring.c    | local variable, function parameter |
| io_tctx_exit  | io_uring/io_uring.c | callback_head, completion, io_ring_ctx | io_tctx_exit_cb | io_uring/io_uring.c  | local variable, function parameter |
|                |                   |            | io_ring_exit_work    | io_uring/io_uring.c    | local variable |
| io_task_cancel  | io_uring/io_uring.c | io_uring_task, bool | io_cancel_task_cb | io_uring/io_uring.c  | local variable |
|                |                   |            | io_uring_try_cancel_requests    | io_uring/io_uring.c    | local variable |
| io_wait_queue  | io_uring/io_uring.h | wait_queue_entry, io_ring_ctx, unsigned, unsigned, unsigned, int, ktime_t, ktime_t, hrtimer | io_wake_function | io_uring/io_uring.c  | local variable, function parameter |
|                |                   |            | hrtimer_restart io_cqring_timer_wakeup    | io_uring/io_uring.c    | local variable, function parameter |
|                |                   |            | io_cqring_min_timer_wakeup    | io_uring/io_uring.c    | local variable, function parameter |
|                |                   |            | io_cqring_schedule_timeout    | io_uring/io_uring.c    | function parameter |
|                |                   |            | __io_cqring_wait_schedule    | io_uring/io_uring.c    | function parameter |
|                |                   |            | io_cqring_wait_schedule    | io_uring/io_uring.c    | function parameter |
|                |                   |            | io_cqring_wait  | io_uring/io_uring.c    | local variable |
|                |                   |            | io_should_wake  | io_uring/io_uring.h    | function parameter |
|                |                   |            | io_napi_busy_loop_should_end  | io_uring/napi.c    | local variable |
|                |                   |            | io_napi_blocking_busy_loop  | io_uring/napi.c    | function parameter |
|                |                   |            | __io_napi_busy_loop  | io_uring/napi.c    | function parameter |
|                |                   |            | io_napi_busy_loop  | io_uring/napi.h    | function parameter |


// Darrell
| Structure name | Defined in        | Attributes | Caller Functions Source | source caller | usage
|----------------|-------------------|------------|-------------------------|---------------|-------------------
| io_issue_def   | io_uring/opdef.h | unsigned, unsigned short, int | io_prep_async_work |io_uring/io_uring.c | local variable |
|                |                   |            | io_assign_file   | io_uring/io_uring.c    | function parameter |
|                |                   |            | __io_issue_sqe   | io_uring/io_uring.c    | local variable |
|                |                   |            | io_wq_submit_work   | io_uring/io_uring.c    | local variable |
|                |                   |            | io_init_req   | io_uring/io_uring.c    | local variable |
|                |                   |            | io_uring_alloc_async_data   | io_uring/io_uring.h    | local variable |
|                |                   |            | io_arm_poll_handler   | io_uring/poll.c    | local variable |
|                |                   |            | __io_import_rw_buffer   | io_uring/rw.c    | local variable |
| io_open   | io_uring/openclose.c | file, int, u32, filename, open_how, unsigned long | io_openat_force_async |io_uring/openclose.c | function parameter |
|                |                   |            | __io_openat_prep   | io_uring/openclose.c    | local variable, function parameter |
|                |                   |            | io_openat_prep   | io_uring/openclose.c    | local variable, function parameter |
|                |                   |            | io_openat2_prep   | io_uring/openclose.c    | local variable, function parameter |
|                |                   |            | io_openat2   | io_uring/openclose.c    | local variable, function parameter |
|                |                   |            | io_open_cleanup   | io_uring/openclose.c    | local variable, function parameter |
| io_close   | io_uring/openclose.c | file, int, u32 | io_close_fixed |io_uring/io_openclose.c.c | local variable, function parameter |
|                |                   |            | io_close_prep   | io_uring/openclose.c    | local variable, function parameter |
|                |                   |            | io_close   | io_uring/openclose.c    | local variable, function parameter |
| io_fixed_install   | io_uring/openclose.c | file, unsigned int | io_install_fixed_fd_prep |io_uring/openclose.c | local variable, function parameter |
|                |                   |            | io_install_fixed_fd   | io_uring/openclose.c    | local variable,function parameter |
| io_poll_update   | io_uring/poll.c | file, u64, __pool_t, bool | io_poll_remove_prep |io_uring/poll.c | local variable, function parameter |
|                |                   |            | io_poll_remove   | io_uring/poll.c    | local variable,function parameter |
| io_poll_table   | io_uring/poll.c | file, u64, poll_table_struct, io_kiocb, int, bool, __poll_t | __to_queue_proc |io_uring/poll.c | function parameter |
|                |                   |            | io_poll_queue_proc   | io_uring/poll.c    | local variable,function parameter |
|                |                   |            | io_poll_can_finish_inline   | io_uring/poll.c    | function parameter |
|                |                   |            | __io_arm_poll_handler  | io_uring/poll.c    | function parameter |
|                |                   |            | io_async_queue_proc  | io_uring/poll.c    | local variable, function parameter |
|                |                   |            | io_arm_poll_handler  | io_uring/poll.c    | local variable |
|                |                   |            | io_poll_add  | io_uring/poll.c    | local variable |
| io_poll   | io_uring/poll.h | file, wait_queue_head, poll_t, int, wait_queue_entry | io_poll_get_double |io_uring/poll.c | return value |
|                |                   |            | io_poll_get_single  | io_uring/poll.c    | function parameter, return value |
|                |                   |            | io_init_poll_iocb  | io_uring/poll.c    | function parameter |
|                |                   |            | io_poll_remove_entry  | io_uring/poll.c    | function parameter |
|                |                   |            | io_poll_task_func  | io_uring/poll.c    | function parameter, local variable |
|                |                   |            | io_pollfree_wake  | io_uring/poll.c    | function parameter |
|                |                   |            | io_poll_wake  | io_uring/poll.c    | function parameter, local variable |
|                |                   |            | io_poll_queue_head  | io_uring/poll.c    | local variable |
|                |                   |            | __io_queue_proc  | io_uring/poll.c    | function parameter |
|                |                   |            | io_poll_queue_proc  | io_uring/poll.c    | function parameter, local variable |
|                |                   |            | __io_arm_poll_handler  | io_uring/poll.c    | function parameter |
|                |                   |            | io_poll_add_prep  | io_uring/poll.c    | function parameter, local variable |
|                |                   |            | io_poll_add  | io_uring/poll.c    | function parameter, local variable |
|                |                   |            | io_poll_remove  | io_uring/poll.c    | function parameter, local variable |
|                |                   |            | async_poll  | io_uring/poll.h   | struct attribute |
| async_poll   | io_uring/poll.h | io_poll | io_ring_ctx |io_uring/io_uring.c | function parameter |
|                |                   |            | io_free_batch_list  | io_uring/io_uring.c   | local variable |
|                |                   |            | io_async_queue_proc  | io_uring/poll.c   | local variable |
|                |                   |            | io_req_alloc_apoll  | io_uring/poll.c   | local variable, return value |
|                |                   |            | io_arm_poll_handler  | io_uring/poll.c   | local variable |
| io_ring_ctx_rings   | io_uring/register.c | io_rings, io_uring_sqe, io_mapped_region, io_mapped_region | io_register_free_rings |io_uring/io_register.c | function parameter |
|                |                   |            | io_ring_ctx_rings  | io_uring/register.c   | local variable |
| io_rsrc_update   | io_uring/rsrc.c | file, u64, u32 | io_files_update_prep |io_uring/io_rsrc.c | function parameter, local variable |
|                |                   |            | io_files_update_with_index_alloc  | io_uring/rsrc.c    | function parameter, local variable |
|                |                   |            | io_files_update  | io_uring/rsrc.c    | function parameter, local variable |
| io_rsrc_node  | io_uring/rsrc.h | unsigned char, int | __io_sync_cancel |io_uring/cancel.c | local variable |
|                |                   |            | io_install_fixed_file  | io_uring/filetable.c    | local variable |
|                |                   |            | io_fixed_fd_remove  | io_uring/filetable.c    | local variable |
|                |                   |            | io_slot_flags  | io_uring/filetable.h    | function parameter |
|                |                   |            | io_slot_file  | io_uring/filetable.h    | function parameter |
|                |                   |            | io_fixed_file_set  | io_uring/filetable.h    | function parameter |
|                |                   |            | io_file_get_fixed  | io_uring/io_uring.c    | local variable |
|                |                   |            | io_msg_grab_fle  | io_uring/msg_ring.c    | local variable |
|                |                   |            | io_sqe_buffer_register  | io_uring/rsrc.c    | local variable, return value |
|                |                   |            | io_sqe_buffers_register  | io_uring/rsrc.c    | local variable |
|                |                   |            | io_rsrc_node_alloc  | io_uring/rsrc.c    | local variable, return value |
|                |                   |            | io_rsrc_cache_init  | io_uring/rsrc.c    | function parameter |
|                |                   |            | io_rsrc_data_alloc  | io_uring/rsrc.c    | function parameter |
|                |                   |            | __sqe_files_update  | io_uring/rsrc.c    | local variable |
|                |                   |            | __io_sqe_buffers_update  | io_uring/rsrc.c    | local variable |
|                |                   |            | io_free_rsrc_node  | io_uring/rsrc.c    | function parameter |
|                |                   |            | io_sqe_files_register  | io_uring/rsrc.c    | local variable |
|                |                   |            | headpage_already_acct  | io_uring/rsrc.c    | local variable |
|                |                   |            | io_sqe_buffer_register  | io_uring/rsrc.c    | local variable, return value |
|                |                   |            | io_buffer_register_bvec  | io_uring/rsrc.c    | local variable |
|                |                   |            | io_buffer_unregister_bvec  | io_uring/rsrc.c    | local variable |
|                |                   |            | io_find_buf_node  | io_uring/rsrc.c    | local variable, return value |
|                |                   |            | io_import_reg_buf  | io_uring/rsrc.c    | local variable |
|                |                   |            | io_clone_buffers  | io_uring/rsrc.c    | local variable |
|                |                   |            | io_import_reg_vec  | io_uring/rsrc.c    | local variable |
|                |                   |            | io_rsrc_node_alloc  | io_uring/rsrc.h    | return value |
|                |                   |            | io_free_rsrc_node | io_uring/rsrc.h    | function parameter |
|                |                   |            | io_find_buf_node | io_uring/rsrc.h    | return value |
|                |                   |            | io_rsrc_node_lookup | io_uring/rsrc.h    | return value |
|                |                   |            | io_put_rsrc_node | io_uring/rsrc.h    | function parameter |
|                |                   |            | io_reset_rsrc_node | io_uring/rsrc.h    | local variable |
|                |                   |            | io_req_assign_rsrc_node | io_uring/rsrc.h    | function parameter |
|                |                   |            | io_req_assign_buf_node | io_uring/rsrc.h    | function parameter |
|                |                   |            | io_splice | io_uring/splice.c    | attribute usage |
|                |                   |            | io_splice_get_file | io_uring/splice.c    | local variable |
| io_rsrc_update   | io_uring/rsrc.h | unsigned long, io_mapped_ubuf | io_files_update_prep |io_uring/rsrc.c | function parameter, local variable |
|                |                   |            | io_kiocb_to_cmd | io_uring/rsrc.c    | function parameter, local variable |
|                |                   |            | io_files_update | io_uring/rsrc.c    | function parameter, local variable |
| io_rw   | io_uring/rw.c | kiocb, u64, rwf_t | io_iov_compat_buffer_select_prep |io_uring/rw.c | function parameter |
|                |                   |            | io_iov_buffer_select_prep | io_uring/rw.c    | function parameter, local variable |
|                |                   |            | __io_import_rw_buffer | io_uring/rw.c    | function parameter, local variable |
|                |                   |            | io_prep_rw_pi | io_uring/rw.c    | function parameter |
|                |                   |            | __io_prep_rw | io_uring/rw.c    | function parameter, local variable |
|                |                   |            | io_init_rw_fixed | io_uring/rw.c    | function parameter, local variable |
|                |                   |            | io_rw_import_reg_vec | io_uring/rw.c    | function parameter, local variable |
|                |                   |            | io_rw_prep_reg_vec | io_uring/rw.c    | function parameter, local variable |
|                |                   |            | io_read_mshot_prep | io_uring/rw.c    | function parameter, local variable |
|                |                   |            | io_kiocb_update_pos | io_uring/rw.c    | function parameter, local variable |
|                |                   |            | io_rw_should_reissue | io_uring/rw.c    | function parameter, local variable |
|                |                   |            | io_req_end_write | io_uring/rw.c    | function parameter, local variable |
|                |                   |            | io_req_io_end | io_uring/rw.c    | function parameter, local variable |
|                |                   |            | io_req_rw_complete | io_uring/rw.c    | function parameter, local variable |
|                |                   |            | io_complete_rw | io_uring/rw.c    | function parameter, local variable |
|                |                   |            | io_complete_rw_iopoll | io_uring/rw.c    | function parameter, local variable |
|                |                   |            | io_rw_done | io_uring/rw.c    | function parameter, local variable |
|                |                   |            | loop_rw_iter| io_uring/rw.c    | function parameter |
|                |                   |            | io_async_buf_func | io_uring/rw.c    | function parameter, local variable |
|                |                   |            | io_rw_should_retry | io_uring/rw.c    | function parameter, local variable |
|                |                   |            | io_iter_do_read | io_uring/rw.c    | function parameter, local variable |
|                |                   |            | io_iter_do_read | io_uring/rw.c    | function parameter |
|                |                   |            | io_rw_init_file | io_uring/rw.c    | function parameter, local variable |
|                |                   |            | __io_read | io_uring/rw.c    | function parameter, local variable |
|                |                   |            | io_read_mshot | io_uring/rw.c    | function parameter, local variable |
|                |                   |            | io_write | io_uring/rw.c    | function parameter, local variable |
|                |                   |            | io_uring_classic_poll | io_uring/rw.c    | function parameter, local variable |
| io_meta_state | io_uring/rw.h | u32, iov_iter_state | io_async_rw |io_uring/rw.h | attribute usage |
| io_async_rw | io_uring/rw.h | iou_vec, size_t, clear, iov_iter, iov_iter_state, iovec, wait_page_queue, uio_meta, io_meta_state | io_ring_ctx |io_uring/io_uring.c | function parameter |
|                |                   |            | io_issue_def | io_uring/opdef.c    | function parameter |
|                |                   |            | io_import_vec | io_uring/rw.c    | local variable |
|                |                   |            | __io_import_rw_buffer | io_uring/rw.c    | local variable |
|                |                   |            | io_import_rw_buffer | io_uring/rw.c    | local variable |
|                |                   |            | io_rw_recycle | io_uring/rw.c    | local variable |
|                |                   |            | io_rw_alloc_async | io_uring/rw.c    | local variable |
|                |                   |            | io_meta_save_state | io_uring/rw.c    | function parameter |
|                |                   |            | io_meta_restore | io_uring/rw.c    | function parameter |
|                |                   |            | io_prep_rw_pi | io_uring/rw.c    | local variable |
|                |                   |            | io_init_rw_fixed | io_uring/rw.c    | local variable |
|                |                   |            | io_rw_import_reg_vec | io_uring/rw.c    | local variable |
|                |                   |            | io_rw_prep_reg_vec | io_uring/rw.c    | local variable |
|                |                   |            | io_rw_should_reissue | io_uring/rw.c    | local variable |
|                |                   |            | io_fixup_rw_res | io_uring/rw.c    | local variable |
|                |                   |            | io_rw_should_retry | io_uring/rw.c    | local variable |
|                |                   |            | io_rw_init_file | io_uring/rw.c    | local variable |
|                |                   |            | __io_read | io_uring/rw.c    | local variable |
|                |                   |            | io_write | io_uring/rw.c    | local variable |
|                |                   |            | io_write | io_uring/rw.c    | function parameter, local variable |
| io_splice | io_uring/splice.c | file,loff_t, u64, int, unsigned int, io_rsrc_node | io_issue_def |io_uring/opdef.c | handler issue |
|                |                   |            | __io_splice_prep | io_uring/splice.c    | function parameter, local variable |
|                |                   |            | io_splice_cleanup | io_uring/splice.c    | function parameter, local variable |
|                |                   |            | io_splice_get_file | io_uring/splice.c    | function parameter, local variable |
|                |                   |            | io_tee | io_uring/splice.c    | function parameter, local variable |
|                |                   |            | io_splice_prep | io_uring/splice.c    | function parameter, local variable |
|                |                   |            | io_splice | io_uring/splice.c    | function parameter, local variable |
| io_sq_data | io_uring/rw.h | refcount_t, atomic_t, mutex, list_head, task_struct, wait_queue_head, unsigned, int, pid_t, u64, unsigned long, completion | io_uring_show_fdinfo |io_uring/fdinfo.c | local variable |
|                |                   |            | io_ring_exit_work | io_uring/io_uring.c    | local variable |
|                |                   |            | io_uring_cancel_generic | io_uring/io_uring.c    | function parameter |
|                |                   |            | io_register_iowq_max_workers | io_uring/register.c   | local variable |
|                |                   |            | io_sq_thread_unpark | io_uring/sqpoll.c    | function parameter |
|                |                   |            | io_sq_thread_park | io_uring/sqpoll.c    | function parameter |
|                |                   |            | io_sq_thread_stop | io_uring/sqpoll.c    | function parameter |
|                |                   |            | io_put_sq_data | io_uring/sqpoll.c    | function parameter |
|                |                   |            | io_sqd_update_thread_idle | io_uring/sqpoll.c    | function parameter |
|                |                   |            | io_sq_thread_finish | io_uring/sqpoll.c    | local variable |
|                |                   |            | io_attach_sq_data | io_uring/sqpoll.c    | local variable, return value |
|                |                   |            | io_get_sq_data | io_uring/sqpoll.c    | local variable, return value |
|                |                   |            | io_sqd_events_pending | io_uring/sqpoll.c    | function parameter |
|                |                   |            | io_sqd_handle_event | io_uring/sqpoll.c    | function parameter |
|                |                   |            | io_sq_update_worktime | io_uring/sqpoll.c    | function parameter |
|                |                   |            | io_sq_thread | io_uring/sqpoll.c    | local variable |
|                |                   |            | io_sq_offload_create | io_uring/sqpoll.c    | local variable |
|                |                   |            | io_sqpoll_wq_cpu_affinity | io_uring/sqpoll.c    | local variable |
|                |                   |            | io_sq_thread_stop | io_uring/sqpoll.h    | function parameter |
|                |                   |            | io_sq_thread_park | io_uring/sqpoll.h    | function parameter |
|                |                   |            | io_sq_thread_unpark | io_uring/sqpoll.h    | function parameter |
|                |                   |            | io_put_sq_data | io_uring/sqpoll.h    | function parameter |

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