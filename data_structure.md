# Task 3: Data Structure Investigation
The objective of this task is to document all internal data structures defined in io_uring. 

Structure name | Defined in | Attributes | Caller Functions Source | source caller | usage
---------------|------------|------------|-------------------------|---------------|-------------------
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
| io_worker      | io_uring/io-wq.c  | refcount_t, unsigned long, struct, struct, struct, struct, struct, struct, raw_spinlock_t, struct, unsigned long, struct, int, union, struct, struct  | io_wq_dec_running | io_uring/io-wq.c | function parameter |
|                |                    |           | io_worker_get | io-wq.c | function parameter |
|                |                    |           | io_worker_release | io-wq.c | function parameter |
|                |                    |           | io_wq_get_acct | io-wq.c | function parameter |
|                |                    |           | io_wq_worker_stopped | io-wq.c | local variable |
|                |                    |           | io_worker_cancel_cb | io-wq.c | function parameter |
|                |                    |           | io_task_worker_match | io-wq.c | local variable |
|                |                    |           | io_acct_activate_free_worker | io-wq.c | local variable |
|                |                    |           | io_worker_exit | io-wq.c | function parameter |
|                |                    |           | io_wq_inc_running | io-wq.c | function parameter |
|                |                    |           | create_worker_cb | io-wq.c | local variable |
|                |                    |           | io_queue_worker_create | io-wq.c | function parameter |
|                |                    |           | io_wq_dec_running | io-wq.c | function parameter |
|                |                    |           | __io_worker_busy | io-wq.c | function parameter |
|                |                    |           | __io_worker_idle | io-wq.c | function parameter |
|                |                    |           | io_assign_current_work | io-wq.c | function parameter |
|                |                    |           | io_worker_handle_work | io-wq.c | function parameter |
|                |                    |           | io_wq_worker | io-wq.c | local variable |
|                |                    |           | io_wq_worker_running | io-wq.c | local variable |
|                |                    |           | io_wq_worker_sleeping | io-wq.c | local variable |
|                |                    |           | io_init_new_worker | io-wq.c | function parameter |
|                |                    |           | io_should_retry_thread | io-wq.c | function parameter |
|                |                    |           | queue_create_worker_retry | io-wq.c | function parameter |
|                |                    |           | create_worker_cont | io-wq.c | local variable |
|                |                    |           | io_workqueue_create | io-wq.c | local variable |
|                |                    |           | create_io_worker | io-wq.c | local variable |
|                |                    |           | io_acct_for_each_worker | io-wq.c | function parameter |
|                |                    |           | io_wq_for_each_worker | io-wq.c | function parameter |
|                |                    |           | io_wq_worker_wake | io-wq.c | function parameter |
|                |                    |           | __io_wq_worker_cancel | io-wq.c | function parameter |
|                |                    |           | io_wq_worker_cancel | io-wq.c | function parameter |
|                |                    |           | io_task_work_match | io-wq.c | local variable |
|                |                    |           | io_wq_cancel_tw_create | io-wq.c | local variable |
|                |                    |           | io_wq_worker_affinity | io-wq.c | function parameter |
| io_wq_acct     | io_uring/io-wq.c            | unsigned, unsigned, int, atomic_t, raw_spinlock_t, io_wq_work_list, unsigned | io_acct_cancel_pending_work | io_uring/io-wq.c | function parameter |
|                |                    |           | create_io_worker | io_uring/io-wq.c | function parameter |
|                |                    |           | io_acct_cancel_pending_work | io_uring/io-wq.c | function parameter |
|                |                    |           | io_get_acct | io_uring/io-wq.c | return value |
|                |                    |           | io_work_get_acct | io_uring/io-wq.c | return value |
|                |                    |           | io_wq_get_acct | io_uring/io-wq.c | return value |
|                |                    |           | io_worker_cancel_cb | io_uring/io-wq.c | local variable |
|                |                    |           | io_worker_exit | io_uring/io-wq.c | local variable |
|                |                    |           | __io_acct_run_queue | io_uring/io-wq.c | function parameter |
|                |                    |           | io_acct_run_queue | io_uring/io-wq.c | function parameter |
|                |                    |           | io_acct_activate_free_worker | io_uring/io-wq.c | function parameter |
|                |                    |           | io_wq_create_worker | io_uring/io-wq.c | function parameter |
|                |                    |           | io_get_next_work | io_uring/io-wq.c | function parameter |
|                |                    |           | io_wq_max_workers | io_uring/io-wq.c | local variable |
|                |                    |           | io_wq_inc_running | io_uring/io-wq.c | local variable |
|                |                    |           | create_worker_cb | io_uring/io-wq.c | local variable |
|                |                    |           | io_queue_worker_create | io_uring/io-wq.c | function parameter |
|                |                    |           | io_wq_dec_running | io_uring/io-wq.c | local variable |
|                |                    |           | __io_worker_busy | io_uring/io-wq.c | function parameter |
|                |                    |           | __io_worker_idle | io_uring/io-wq.c | function parameter |
|                |                    |           | io_worker_handle_work | io_uring/io-wq.c | function parameter |
|                |                    |           | io_wq_worker | io_uring/io-wq.c | local variable |
|                |                    |           | io_init_new_worker | io_uring/io-wq.c | function parameter |
|                |                    |           | create_worker_cont | io_uring/io-wq.c | local variable |
|                |                    |           | io_work_queue_create | io_uring/io-wq.c | local variable |
|                |                    |           | io_acct_for_each_worker | io_uring/io-wq.c | function parameter |
|                |                    |           | io_wq_insert_work | io_uring/io-wq.c | function parameter |
|                |                    |           | io_wq_enqueue | io_uring/io-wq.c | local variable |
|                |                    |           | io_wq_remove_pending | io_uring/io-wq.c | function parameter |
|                |                    |           | io_wq_cancel_pending_work | io_uring/io-wq.c | local variable |
|                |                    |           | io_acct_cancel_running_work | io_uring/io-wq.c | function parameter |
|                |                    |           | io_wq_hash_wake | io_uring/io-wq.c | local variable |
|                |                    |           | io_wq_create | io_uring/io-wq.c | local variable |
|                |                    |           | io_wq_max_workers | io_uring/io-wq.c | local variable |
| io_wq          | io_uring/io-wq.c            | unsigned, free_work_fn, io_wq_work_fn, io_wq_hash, atomic_t, completion, hlist_node, task_struct, raw_spinlock_t, hlist_nulls_head, list_head, wait_queue_entry, cpumask_var_t | create_io_worker | io_uring/cancel.c | function parameter |
|                |                    |           | io_acct_cancel_pending_work | io_uring/io-wq.c | function parameter |
|                |                    |           | io_wq_cancel_tw_create | io_uring/io-wq.c | function parameter |
|                |                    |           | io_get_acct | io_uring/io-wq.c | function parameter |
|                |                    |           | io_work_get_acct | io_uring/io-wq.c | function parameter |
|                |                    |           | io_wq_get_acct | io_uring/io-wq.c | function parameter |
|                |                    |           | io_worker_ref_put | io_uring/io-wq.c | function parameter |
|                |                    |           | io_worker_cancel_cb | io_uring/io-wq.c | local variable |
|                |                    |           | io_acct_cancel_running_work | io_uring/io-wq.c | function parameter |
|                |                    |           | io_worker_exit | io_uring/io-wq.c | local variable |
|                |                    |           | io_wq_create_worker | io_uring/io-wq.c | function parameter |
|                |                    |           | create_worker_cb | io_uring/io-wq.c | local variable |
|                |                    |           | io_queue_worker_create | io_uring/io-wq.c | local variable |
|                |                    |           | io_wq_dec_running | io_uring/io-wq.c | local variable |
|                |                    |           | io_wait_on_hash | io_uring/io-wq.c | function parameter |
|                |                    |           | io_acct_cancel_running_work | io_uring/io-wq.c | function parameter |
|                |                    |           | io_get_next_work | io_uring/io-wq.c | function parameter |
|                |                    |           | io_worker_handle_work | io_uring/io-wq.c | local variable |
|                |                    |           | io_wq_worker | io_uring/io-wq.c | local variable |
|                |                    |           | io_init_new_worker | io_uring/io-wq.c | function parameter |
|                |                    |           | create_worker_cont | io_uring/io-wq.c | local variable |
|                |                    |           | create_io_worker | io_uring/io-wq.c | function parameter |
|                |                    |           | io_wq_for_each_worker | io_uring/io-wq.c | function parameter |
|                |                    |           | io_run_cancel | io_uring/io-wq.c | function parameter |
|                |                    |           | io_wq_insert_work | io_uring/io-wq.c | function parameter |
|                |                    |           | io_wq_enqueue | io_uring/io-wq.c | function parameter |
|                |                    |           | io_wq_remove_pending | io_uring/io-wq.c | function parameter |
|                |                    |           | io_acct_cancel_pending_work | io_uring/io-wq.c | function parameter |
|                |                    |           | io_wq_cancel_pending_work | io_uring/io-wq.c | function parameter |
|                |                    |           | io_wq_cancel_running_work | io_uring/io-wq.c | function parameter |
|                |                    |           | io_wq_cancel_cb | io_uring/io-wq.c | function parameter |
|                |                    |           | io_wq_hash_wake | io_uring/io-wq.c | local variable |
|                |                    |           | io_wq_create | io_uring/io-wq.c | return value, local variable |
|                |                    |           | io_wq_exit_start | io_uring/io-wq.c | function parameter |
|                |                    |           | io_wq_cancel_tw_create | io_uring/io-wq.c | function parameter |
|                |                    |           | io_wq_exit_workers | io_uring/io-wq.c | function parameter |
|                |                    |           | io_wq_put_and_exit | io_uring/io-wq.c | function parameter |
|                |                    |           | io_wq_destroy | io_uring/io-wq.c | function parameter |
|                |                    |           | __io_wq_cpu_online | io_uring/io-wq.c | function parameter |
|                |                    |           | io_wq_cpu_online | io_uring/io-wq.c | local variable |
|                |                    |           | io_wq_cpu_offline | io_uring/io-wq.c | local variable |
|                |                    |           | io_wq_max_workers | io_uring/io-wq.c | function parameter |
| io_cb_cancel_data | io_uring/io-wq.c         | work_cancel_fn, void, int, int, bool | io_acct_cancel_pending_work | io_uring/io-wq.c | function parameter |
|                |                    |           | io_wq_destroy | io_uring/io-wq.c | local variable |
|                |                    |           | create_worker_cont | io_uring/io-wq.c | local variable |
|                |                    |           | io_wq_enqueue | io_uring/io-wq.c | local variable |
|                |                    |           | __io_wq_worker_cancel | io_uring/io-wq.c | function parameter |
|                |                    |           | io_wq_worker_cancel | io_uring/io-wq.c | local variable |
|                |                    |           | io_wq_cancel_pending_work | io_uring/io-wq.c | function parameter |
|                |                    |           | io_acct_cancel_running_work | io_uring/io-wq.c | function parameter |
|                |                    |           | io_wq_cancel_running_work | io_uring/io-wq.c | function parameter |
|                |                    |           | io_wq_cancel_cb | io_uring/io-wq.c | local variable |
|                |                    |           | io_wq_destroy | io_uring/io-wq.c | local variable |
| online_data     |  io_uring/io-wq.c           | unsigned, bool | io_wq_worker_affinity | io_uring/io-wq.c | local variable |
|                |                    |           | __io_wq_cpu_online | io_uring/io-wq.c | local variable |
| io_provide_buf  | io_uring/kbuf.c            | file, __u64, __u32, __u32, __u32, __u16 | io_put_bl | io_uring/kbuf.c | local variable |
|                |                    |           | io_remove_buffers_prep | io_uring/kbuf.c | local variable |
|                |                    |           | io_remove_buffers | io_uring/kbuf.c | local variable |
|                |                    |           | io_provide_buffers_prep | io_uring/kbuf.c | local variable |
|                |                    |           | io_add_buffers | io_uring/kbuf.c | function parameter |
|                |                    |           | io_provide_buffers | io_uring/kbuf.c | local variable |
| io_msg         | io_uring/msg_ring.c         | file, file, callback_head, u64, u32, u32, u32, u32, u32, u32 | io_msg_ring_cleanup | io_uring/msg_ring.c | local variable |
|                |                    |           | io_msg_data_remote | io_uring/msg_ring.c | function parameter |
|                |                    |           | __io_msg_ring_data | io_uring/msg_ring.c | function parameter |
|                |                    |           | io_msg_ring_data | io_uring/msg_ring.c | local variable |
|                |                    |           | io_msg_grab_file | io_uring/msg_ring.c | local variable |
|                |                    |           | io_msg_install_complete | io_uring/msg_ring.c | local variable |
|                |                    |           | io_msg_tw_fd_complete | io_uring/msg_ring.c | local variable |
|                |                    |           | io_msg_fd_remote | io_uring/msg_ring.c | local variable |
|                |                    |           | io_msg_send_fd | io_uring/msg_ring.c | local variable |
|                |                    |           | __io_msg_ring_prep | io_uring/msg_ring.c | function parameter |
|                |                    |           | io_msg_ring | io_uring/msg_ring.c | local variable |
|                |                    |           | io_uring_sync_msg_ring | io_uring/msg_ring.c | local variable |
| io_napi_entry  | io_uring/napi.c             | uint, list_head, unsigned, hlist_node, rcu_head | io_napi_hash_find | io_uring/napi.c | return type, local variable |
|                |                    |           | __io_napi_add_id | io_uring/napi.c | local variable |
|                |                    |           | __io_napi_del_id | io_uring/napi.c | local variable |
|                |                    |           | __io_napi_remove_stale | io_uring/napi.c | local variable |
|                |                    |           | static_tracking_do_busy_loop | io_uring/napi.c | local variable |
|                |                    |           | dynamic_tracking_do_busy_loop | io_uring/napi.c | local variable |
|                |                    |           | io_napi_free | io_uring/napi.c | local variable |
| io_shutdown    | io_uring/net.c              | file, int | io_shutdown_prep | io_uring/net.c | local variable |
|                |                    |           | io_shutdown | io_uring/net.c | local variable |
| io_accept      | io_uring/net.c              | file, sockaddr, int, int, int, u32, unsigned | io_accept_prep | io_uring/net.c | local variable |
|                |                    |           | io_accept | io_uring/net.c | local variable |
| io_socket      | io_uring/net.c              | file, int, int, int, int, u32, unsigned | io_socket_prep | io_uring/net.c | local variable |
|                |                    |             | io_socket | io_uring/net.c | local variable |
| io_connect     | io_uring/net.c              | file, sockaddr, int, bool, bool | io_connect_prep | io_uring/net.c | local variable |
|                |                    |             | io_connect | io_uring/net.c | local variable |
| io_bind       | net. c              | file, int   | io_bind_prep | io_uring/net.c | local variable |
|                |                    |             | io_bind | io_uring/net.c | local variable |
| io_listen      | io_uring/net.c              | file, int   | io_listen_prep | io_uring/net.c | local variable |
|                |                    |             | io_listen | io_uring/net.c | local variable |
| io_sr_msg      | io_uring/net.c              | file, compat_msghdr, user_msghdr, void, int, unsigned, unsigned, unsigned, u16, u16, u16, void, io_kiocb | io_mshot_prep_retry | io_uring/net.c | local variable |
|                |                    |             | io_compat_msg_copy_hdr | io_uring/net.c | local variable |
|                |                    |             | io_msg_copy_hdr | io_uring/net.c | local variable |
|                |                    |             | io_send_setup | io_uring/net.c | local variable |
|                |                    |             | io_sendmsg_setup | io_uring/net.c | local variable |
|                |                    |             | io_sendmsg_prep | io_uring/net.c | local variable |
|                |                    |             | io_send_finish | io_uring/net.c | local variable |
|                |                    |             | io_sendmsg | io_uring/net.c | local variable |
|                |                    |             | io_send_select_buffer | io_uring/net.c | local variable |
|                |                    |             | io_send | io_uring/net.c | local variable |
|                |                    |             | io_recvmsg_prep_setup | io_uring/net.c | local variable |
|                |                    |             | io_recvmsg_prep | io_uring/net.c | local variable |
|                |                    |             | io_recv_finish | io_uring/net.c | local variable |
|                |                    |             | io_recvmsg_prep_multishot | io_uring/net.c | local variable, function parameter |
|                |                    |             | io_recvmsg_multishot | io_uring/net.c | local variable, function parameter |
|                |                    |             | io_recvmsg | io_uring/net.c | local variable |
|                |                    |             | io_recv_buf_select | io_uring/net.c | local variable |
|                |                    |             | io_recv | io_uring/net.c | local variable |
|                |                    |             | io_send_zc_cleanup | io_uring/net.c | local variable |
|                |                    |             | io_send_zc_prep | io_uring/net.c | local variable |
|                |                    |             | io_send_zc_import | io_uring/net.c | local variable |
|                |                    |             | io_send_zc | io_uring/net.c | local variable |
|                |                    |             | io_sendmsg_zc | io_uring/net.c | local variable |
|                |                    |             | io_sendrecv_fail | io_uring/net.c | local variable |
| io_recvzc      | io_uring/net.c              | file, uint, u16, u32, io_zcrx_ifq | io_recvzc_prep | io_uring/net.c | local variable |
|                |                    |             | io_recvzc | io_uring/net.c | local variable |
| io_recvmsg_mul tishot_hdr | io_uring/net.c   | io_uring_recvmsg_out, sockaddr_storage | io_recvmsg_multishot | io_uring/net.c | local variable |
| io_nop         | nop.c              | file, int, int, int, uint | io_nop_prep | nop.c | local variable |
|                |                    |             | io_nop | nop.c | local variable |
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
| io_close   | io_uring/openclose.c | file, int, u32 | io_close_fixed |io_uring/io_openclose.c | local variable, function parameter |
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
| io_splice | io_uring/splice.c | file,loff_t, u64, int, unsigned int, io_rsrc_node | __io_splice_prep | io_uring/splice.c    | function parameter, local variable |
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
| io_statx | io_uring/statx.c | file, int, unsigned int, filename, statx __user | io_statx_prep |io_uring/statx.c | function parameter, local variable |
| | | | io_statx | io_uring/statx.c | function parameter, local variable |
| | | | io_statx_cleanup | io_uring/statx.c | function parameter, local variable |
| io_sync                  | io_uring/sync.c      | file, int, loff_t                                                                                                                                                 | io_sfr_prep                      | io_uring/sync.c      | function parameter, local variable                     |
|                          |                      |                                                                                                                                                                   | io_sync_file_range               | io_uring/sync.c      | function parameter, local variable                     |
|                          |                      |                                                                                                                                                                   | io_fsync_prep                    | io_uring/sync.c      | function parameter, local variable                     |
|                          |                      |                                                                                                                                                                   | io_fsync                         | io_uring/sync.c      | function parameter, local variable                     |
|                          |                      |                                                                                                                                                                   | io_fallocate_prep                | io_uring/sync.c      | function parameter, local variable                    |
|                          |                      |                                                                                                                                                                   | io_fallocate                     | io_uring/sync.c      | function parameter, local variable                    |
| io_timeout               | io_uring/timeout.c   | file, io_kiocb, list_head, u32                                                                                                                                    | io_is_timeout_noseq              | io_uring/timeout.c   | function parameter, local variable                    |
|                          |                      |                                                                                                                                                                   | io_timeout_finish                | io_uring/timeout.c   | function parameter                 |
|                          |                      |                                                                                                                                                                   | io_timeout_complete              | io_uring/timeout.c   | function parameter, local variable                     |
|                          |                      |                                                                                                                                                                   | __cold bool io_flush_killed_timeouts                            | io_uring/timeout.c   | local variable                     |
|                          |                      |                                                                                                                                                                   | io_kill_timeout                               | io_uring/timeout.c   | local variable                     |
|                          |                      |                                                                                                                                                                   | io_timeout_fn                    | io_uring/timeout.c   | function parameter, local variable                     |
|                          |                      |                                                                                                                                                                   | __cold void io_flush_timeouts                 | io_uring/timeout.c   | function parameter                     |
|                          |                      |                                                                                                                                                                   | __io_disarm_linked_timeout                 | io_uring/timeout.c   | function parameter, local variable                     |
|                          |                      |                                                                                                                                                                   | io_timeout_fn                | io_uring/timeout.c   | function parameter, local variable                     |
|                          |                      |                                                                                                                                                                   | io_req_task_link_timeout         | io_uring/timeout.c   | local variable                     |
|                          |                      |
|                          |                      |                                                                                                                                                                   | io_kiocb *io_timeout_extract        | io_uring/timeout.c   | function parameter, local variable                     |
|                          |                      |                                                                                                                                                                   | io_link_timeout_fn               | io_uring/timeout.c   | function parameter, local variable                     |
|                          |                      |
|                          |                      |                                                                                                                                                                   | io_linked_timeout_update               | io_uring/timeout.c   | function parameter, local variable                     |
|                          |                      |                                                                                                                                                                   | io_timeout_update              | io_uring/timeout.c   | function parameter, local variable                     |
|                          |                      |                                                                                                                                                                   | io_timeout_get_clock             | io_uring/timeout.c   | function parameter, local variable                     |
|                          |                      |                                                                                                                                                                   | __io_timeout_prep                | io_uring/timeout.c   | function parameter, local variable                     |
|                          |                      |                                                                                                                                                                   | io_timeout                       | io_uring/timeout.c   | function parameter, local variable                     |
|                          |                      |                                                                                                                                                                   | io_queue_linked_timeout          | io_uring/timeout.c   | function parameter, local variable                     |
| io_timeout_rem           | io_uring/timeout.c   | bool, file, timespec64, u32, u64                                                                                                                                  | io_timeout_remove_prep           | io_uring/timeout.c   | local variable                     |
|                          |                      |                                                                                                                                                                   | io_timeout_remove                | io_uring/timeout.c   | local variable                     |
| io_ftrunc                | io_uring/truncate.c  | file, loff_t                                                                                                                                                      | io_ftruncate_prep                | io_uring/truncate.c  | function parameter, local variable                      |
|                          |                      |                                                                                                                                                                   | io_ftruncate                     | io_uring/truncate.c  | function parameter, local variable                      |
| io_waitid                | io_uring/waitid.c    | __user, atomic_t, file, int, pid_t, wait_queue_head, waitid_info                                                                                                  | io_waitid_compat_copy_si         | io_uring/waitid.c    | function parameter                 |
|                          |                      |                                                                                                                                                                   | io_waitid_copy_si                | io_uring/waitid.c    | function parameter, local variable                     |
|                          |                      |                                                                                                                                                                   | io_waitid_complete               | io_uring/waitid.c    | function parameter, local variable                     |
|                          |                      |                                                                                                                                                                   | __io_waitid_cancel               | io_uring/waitid.c    | function parameter, local variable                     |
|                          |                      |                                                                                                                                                                   | io_waitid_drop_issue_ref         | io_uring/waitid.c    | function parameter, local variable                     |
|                          |                      |                                                                                                                                                                   | io_waitid_cb                     | io_uring/waitid.c    | function parameter, local variable                     |
|                          |                      |                                                                                                                                                                   | io_waitid_wait                   | io_uring/waitid.c    | function parameter, local variable                     |
|                          |                      |                                                                                                                                                                   | io_waitid_prep                   | io_uring/waitid.c    | function parameter, local variable                     |
|                          |                      |                                                                                                                                                                   | io_waitid                        | io_uring/waitid.c    | function parameter, local variable                     |
| io_xattr                 | io_uring/xattr.c     | file, filename, kernel_xattr_ctx                                                                                                                                  | io_xattr_cleanup                 | io_uring/xattr.c     | function parameter, local variable                     |
|                          |                      |                                                                                                                                                                   | __io_getxattr_prep               | io_uring/xattr.c     | function parameter, local variable                     |
|                          |                      |                                                                                                                                                                   | io_getxattr_prep                 | io_uring/xattr.c     | function parameter, local variable                     |
|                          |                      |                                                                                                                                                                   | io_fgetxattr                     | io_uring/xattr.c     | function parameter, local variable                     |
|                          |                      |                                                                                                                                                                   | io_getxattr                      | io_uring/xattr.c     | function parameter, local variable                     |
|                          |                      |                                                                                                                                                                   | __io_setxattr_prep               | io_uring/xattr.c     | function parameter, local variable                     |
|                          |                      |                                                                                                                                                                   | io_setxattr_prep                 | io_uring/xattr.c     | function parameter, local variable                     |
|                          |                      |                                                                                                                                                                   | io_fsetxattr                     | io_uring/xattr.c     | function parameter, local variable                     |
|                          |                      |                                                                                                                                                                   | io_setxattr                      | io_uring/xattr.c     | function parameter, local variable                     |
| io_zcrx_args             | io_uring/zcrx.c      | io_kiocb, io_zcrx_ifq, socket, unsigned                                                                                                                           | io_zcrx_recv_skb                 | io_uring/zcrx.c      | function parameter, local variable                     |
|                          |                      |                                                                                                                                                                   | io_zcrx_tcp_recvmsg              | io_uring/zcrx.c      | function parameter, local variable                     |
| io_zcrx_ifq              | io_uring/zcrx.h      | device, io_ring_ctx, io_uring, io_uring_zcrx_rqe, io_zcrx_area, net_device, netdevice_tracker, spinlock_t, u32                                                    | io_zcrx_recv                     | io_uring/zcrx.h      | function parameter, local variable                 |

If the following row value in a column is missing, assume the value is the same with the previous row in the same column. 
Continue until all data structures documented properly.