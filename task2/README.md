| Source                | Library                       | Function Utilized                      | Times Used  |
|-----------------------|-------------------------------|----------------------------------------|-------------|
| advise.c              | include/asm-generic/rwonce.h  | READ_ONCE                              | 8           |
|                       | include/linux/io_uring_types.h| io_kiocb_to_cmd                        | 4           |
|                       | include/linux/mm.h            | do_madvise                             | 1           |
|                       | io_uring/io_uring.h           | io_req_set_res                         | 2           |
|                       | mm/fadvise.c                  | vfs_fadvise                            | 1           |
|                       | io_uring/io_uring.h           | req_set_fail                           | 1           |
|                       | include/asm-generic/bug.h     | WARN_ON_ONCE                           | 2           |
| advise.h              | -                             | -                       | -          |
| alloc_cache.c         | io_uring/alloc_cache.h        | io_alloc_cache_get                     | 1           |
|                       | mm/slub.c                     | kvfree                                 | 1           |
|                       | include/linux/slab.h          | kvmalloc_array                         | 1           |
|                       | tools/lib/slab.c              | kmalloc                                | 1           |
|                       | arch/x86/include/asm/string_64.h | memset                              | 1           |
|                       | arch/x86/boot/compressed/misc.h | free                               | 1           |
| alloc_cache.h         | include/linux/kasan.h         | kasan_mempool_poison_object            | 1           |
|                       | include/linux/kasan.h         | kasan_mempool_unpoison_object          | 1           |
|                       | arch/x86/include/asm/string_64.h | memset                              | 1           |
|                       | alloc_cache.h                 | io_alloc_cache_get                     | 1           |
|                       | alloc_cache.h                 | io_cache_alloc_new                     | 1           |
|                       | alloc_cache.h                 | io_alloc_cache_put                     | 1           |
|                       | linux/mm/slub.c               | kfree                                  | 1           |
| cancel.c              | cancel.h                      | io_cancel_match_sequence               | 1           |
|                       | include/linux/container_of.h  | container_of                           | 1           |
|                       | cancel.c                      | io_cancel_req_match                    | 2           |
|                       | io_uring/io-wq.c              | io_wq_cancel_cb                        | 1           |
|                       | include/asm-generic/bug.h     | WARN_ON_ONCE                           | 1           |
|                       | io_uring/io-wq.h              | io_wq_current_is_worker                | 1           |
|                       | cancel.c                      | io_async_cancel_one                    | 2           |
|                       | io_uring/poll.c               | io_poll_cancel                         | 1           |
|                       | io_uring/waitid.c             | io_waitid_cancel                       | 1           |
|                       | io_uring/futex.c              | io_futex_cancel                        | 1           |
|                       | tools/testing/selftests/kvm/include/arm64/spinlock.c | spin_lock                              | 1           |
|                       | tools/testing/selftests/kvm/include/arm64/spinlock.c | spin_unlock                            | 1           |
|                       | io_uring/timeout.c            | io_timeout_cancel                      | 1           |
|                       | include/linux/io_uring_types.h | io_kiocb_to_cmd                       | 2           |
|                       | include/linux/compiler.h      | unlikely                               | 2           |
|                       | include/asm-generic/rwonce.h  | READ_ONCE                              | 4           |
|                       | cancel.c                      | io_try_cancel                          | 1           |
|                       | io_uring/io_uring.h           | io_ring_submit_lock                    | 2           |
|                       | include/linux/list.h          | list_for_each_entry                    | 1           |
|                       | include/linux/atomic/atomic-instrumented.h | atomic_inc_return         | 3           |
|                       | io_uring/io_uring.c           | io_file_get_fixed                      | 1           |
|                       | io_uring/io_uring.c           | io_file_get_normal                     | 1           |
|                       | io_uring/io_uring.c           | __io_async_cancel                      | 2           |
|                       | io_uring/io_uring.h           | req_set_fail                           | 1           |
|                       | io_uring/io_uring.h           | io_req_set_res                         | 1           |
|                       | io_uring/rsrc.h               | io_rsrc_node_lookup                    | 1           |
|                       | io_uring/filetable.h          | io_slot_file                           | 1           |
|                       | include/linux/wait.h          | DEFINE_WAIT                            | 1           |
|                       | include/linux/uaccess.h       | copy_from_user                         | 1           |
|                       | include/linux/array_size.h    | ARRAY_SIZE                             | 2           |
|                       | include/linux/file.h          | fget                                   | 1           |
|                       | cancel.c                      | __io_sync_cancel                       | 2           |
|                       | include/linux/ktime.h         | ktime_add_ns                           | 1           |
|                       | include/linux/ktime.h         | timespec64_to_ktime                    | 1           |
|                       | include/linux/timekeeping.h   | ktime_get_ns                           | 1           |
|                       | include/linux/wait.h          | prepare_to_wait                        | 1           |
|                       | include/linux/mutex.h         | mutex_unlock                           | 1           |
|                       | include/linux/mutex.h         | mutex_lock                             | 1           |
|                       | io_uring/io_uring.c           | io_run_task_work_sig                   | 1           |
|                       | kernel/time/sleep_timeout.c   | schedule_hrtimeout                     | 1           |
|                       | kernel/sched/wait.c           | finish_wait                            | 1           |
|                       | include/linux/file.h          | fput                                   | 1           |
|                       | include/linux/lockdep.h       | lockdep_assert_held                    | 1           |
|                       | include/linux/list.h          | hlist_for_each_entry_safe              | 2           |
|                       | io_uring/io_uring.c           | io_match_task_safe                     | 1           |
|                       | include/linux/list.h          | hlist_del_init                         | 1           |
|                       | io_uring/io_uring.h           | io_ring_submit_unlock                  | 2           |
| cancel.h              | -                             | -                                      | -           |
| epoll.c               | include/linux/container_of.h  | io_kiocb_to_cmd                        | 4           |
|                       | include/asm-generic/rwonce.h  | READ_ONCE                              | 6           |
|                       | include/linux/eventpoll.h     | ep_op_has_event                        | 1           |
|                       | include/linux/kernel.h        | u64_to_user_ptr                        | 2           |
|                       | include/linux/uaccess.h       | copy_from_user                         | 1           |
|                       | include/linux/eventpoll.h     | do_epoll_ctl                           | 1           |
|                       | io_uring/io_uring.h           | req_set_fail                           | 2           |
|	                    | io_uring/io_uring.h	        | io_req_set_res                         | 2 |
| epoll.h               | -                             | -                                      | -           |
| eventfd.c             | include/linux/atomic/atomic-instrumented.h | atomic_fetch_or | 1 |
|                       | include/linux/atomic/atomic-instrumented.h | atomic_set | 1 |
|                       | drivers/comedi/drivers/ni_routing/tools/convert_c_to_py.c | BIT | 1 |
|                       | kernel/rcu/tiny.c             | call_rcu | 1 |
|                       | include/linux/rcupdate.h      | call_rcu_hurry | 1 |
|                       | drivers/gpu/drm/radeon/mkregtable.c | container_of | 2 |
|                       | include/linux/uaccess.h       | copy_from_user | 1 |
|                       | fs/eventfd.c                  | eventfd_ctx_fdget | 1 |
|                       | fs/eventfd.c                  | eventfd_ctx_put | 1 |
|                       | include/linux/eventfd.h | eventfd_signal_allowed | 1 |
|                       | fs/eventfd.c                  | eventfd_signal_mask | 2 |
|                       | io_uring/eventfd.c            | io_eventfd_grab | 2 |
|                       | io_uring/eventfd.c            | io_eventfd_put | 3 |
|                       | io_uring/eventfd.c            | io_eventfd_release | 2 |
|                       | io_uring/eventfd.c            | __io_eventfd_signal | 2 |
|                       | io_uring/eventfd.c            | io_eventfd_trigger | 1 |
|                       | io_uring/io-wq.h              | io_wq_current_is_worker | 1 |
|                       | crypto/asymmetric_keys/x509_parser.h | IS_ERR | 1 |
|                       | include/linux/slab.h          | kfree | 2 |
|                       | include/linux/slab.h          | kmalloc | 1 |
|                       | include/linux/lockdep.h       | lockdep_is_held | 2 |
|                       | include/linux/err.h           | PTR_ERR | 1 |
|                       | include/linux/rcupdate.h      | rcu_assign_pointer | 2 |
|                       | include/linux/rcupdate.h      | rcu_dereference | 1 |
|                       | include/linux/rcupdate.h      | rcu_dereference_protected | 2 |
|                       | include/linux/rcupdate.h      | rcu_read_lock | 1 |
|                       | include/linux/rcupdate.h      | rcu_read_unlock | 2 |
|                       | include/asm-generic/rwonce.h  | READ_ONCE | 1 |
|                       | include/linux/refcount.h      | refcount_dec_and_test | 1 |
|                       | include/linux/refcount.h      | refcount_inc_not_zero | 1 |
|                       | include/linux/refcount.h      | refcount_set | 1 |
|                       | drivers/gpu/drm/msm/disp/dpu1/dpu_crtc.h | spin_lock | 2 |
|                       | include/linux/spinlock.h      | spin_unlock | 2 |
| eventfd.h             | -                             | -                                      | -           |
| fdinfo.c              | io_uring/fdinfo.c             | common_tracking_show_fdinfo | 2 |
|                       | include/linux/uidgid.h        | from_kgid_munged | 5 |
|                       | include/linux/uidgid.h        | from_kuid_munged | 4 |
|                       | kernel/sys.c                  | getrusage | 1 |
|                       | include/linux/list.h          | hlist_for_each_entry | 1 |
|                       | io_uring/filetable.h          | io_slot_file | 1 |
|                       | include/linux/io_uring.h      | io_uring_get_opcode | 1 |
|                       | io_uring/fdinfo.c             | io_uring_show_cred | 1 |
|                       | drivers/gpu/drm/radeon/mkregtable.c | list_for_each_entry | 1 |
|                       | arch/arc/include/asm/arcregs.h | min | 2 |
|                       | include/linux/mutex.h         | mutex_trylock | 1 |
|                       | include/linux/mutex.h         | mutex_unlock | 1 |
|                       | io_uring/fdinfo.c             | napi_show_fdinfo | 1 |
|                       | include/asm-generic/rwonce.h  | READ_ONCE | 6 |
|                       | fs/seq_file.c                 | seq_file_path | 1 |
|                       | fs/seq_file.c                 | seq_printf | 32 |
|                       | fs/seq_file.c                 | seq_putc | 1 |
|                       | fs/seq_file.c                 | seq_put_decimal_ull | 9 |
|                       | fs/seq_file.c                 | seq_put_hex_ll | 1 |
|                       | include/linux/seq_file.h      | seq_puts | 9 |
|                       | include/linux/seq_file.h      | seq_user_ns | 1 |
|                       | drivers/gpu/drm/msm/disp/dpu1/dpu_crtc.h | spin_lock | 1 |
|                       | include/linux/spinlock.h      | spin_unlock | 1 |
|                       | include/linux/task_work.h     | task_work_pending | 1 |
|                       | include/linux/xarray.h        | xa_empty | 1 |
|                       | include/linux/xarray.h        | xa_for_each | 1 |
| fdinfo.h              | -                             | -                                      | -           |
| filetable.c           | include/linux/bitmap.h        | bitmap_free | 1 |
|                       | lib/bitmap.c                  | bitmap_zalloc | 1 |
|                       | include/linux/overflow.h      | check_add_overflow | 1 |
|                       | include/linux/uaccess.h       | copy_from_user | 1 |
|                       | arch/arm/include/asm/bitops.h | find_next_zero_bit | 1 |
|                       | fs/file_table.c               | fput | 1 |
|                       | io_uring/filetable.h          | io_file_bitmap_clear | 1 |
|                       | io_uring/filetable.c          | io_file_bitmap_get | 1 |
|                       | io_uring/filetable.h          | io_file_bitmap_set | 1 |
|                       | io_uring/filetable.h          | io_file_table_set_alloc_range | 1 |
|                       | io_uring/filetable.c          | __io_fixed_fd_install | 1 |
|                       | io_uring/filetable.h          | io_fixed_file_set | 1 |
|                       | io_uring/filetable.c          | io_install_fixed_file | 1 |
|                       | include/linux/io_uring.h      | io_is_uring_fops | 1 |
|                       | io_uring/rsrc.h               | io_reset_rsrc_node | 2 |
|                       | io_uring/io_uring.h           | io_ring_submit_lock | 1 |
|                       | io_uring/io_uring.h           | io_ring_submit_unlock | 1 |
|                       | io_uring/rsrc.c               | io_rsrc_data_alloc | 1 |
|                       | io_uring/rsrc.c               | io_rsrc_data_free | 2 |
|                       | io_uring/rsrc.c               | io_rsrc_node_alloc | 1 |
|                       | io_uring/rsrc.h               | io_rsrc_node_lookup | 1 |
|                       | drivers/block/aoe/aoenet.c    | __must_hold | 1 |
|                       | include/linux/compiler.h      | unlikely | 3 |
| filetable.h           | include/linux/bitops.h        | __clear_bit | 1 |
|                       | io_uring/io_uring.c           | io_file_get_flags | 1 |
|                       | include/linux/bitops.h        | __set_bit | 1 |
|                       | arch/x86/boot/bitops.h        | test_bit | 2 |
|                       | include/asm-generic/bug.h     | WARN_ON_ONCE | 2 |
| fs.c                  | fs/namei.c                    | do_linkat | 1 |
|                       | fs/namei.c                    | do_mkdirat | 1 |
|                       | fs/namei.c                    | do_renameat2 | 1 |
|                       | fs/namei.c                    | do_rmdir | 1 |
|                       | fs/namei.c                    | do_symlinkat | 1 |
|                       | fs/namei.c                    | do_unlinkat | 1 |
|                       | crypto/af_alg.c               | getname | 7 |
|                       | fs/namei.c                    | getname_uflags | 1 |
|                       | include/linux/io_uring_types.h | io_kiocb_to_cmd | 14 |
|                       | io_uring/io_uring.h           | io_req_set_res | 5 |
|                       | crypto/asymmetric_keys/x509_parser.h | IS_ERR | 8 |
|                       | include/linux/err.h           | PTR_ERR | 8 |
|                       | fs/namei.c                    | putname | 9 |
|                       | include/asm-generic/rwonce.h  | READ_ONCE | 19 |
|                       | include/linux/kernel.h        | u64_to_user_ptr | 8 |
|                       | include/linux/compiler.h      | unlikely | 5 |
|                       | include/asm-generic/bug.h     | WARN_ON_ONCE | 5 |
| fs.h                  | -                             | -                                      | -           |
| futex.c               | drivers/gpu/drm/radeon/mkregtable.c | container_of | 1 |
|                       | kernel/futex/futex.h | futex2_to_flags | 1 |
|                       | kernel/futex/futex.h | futex_flags_valid | 1 |
|                       | kernel/futex/syscalls.c | futex_parse_waitv | 1 |
|                       | kernel/futex/futex.h | futex_queue | 1 |
|                       | kernel/futex/core.c | futex_unqueue | 1 |
|                       | kernel/futex/waitwake.c | futex_unqueue_multiple | 1 |
|                       | kernel/futex/futex.h | futex_validate_input | 2 |
|                       | kernel/futex/waitwake.c | futex_wait_multiple_setup | 1 |
|                       | kernel/futex/waitwake.c | futex_wait_setup | 1 |
|                       | kernel/futex/waitwake.c | futex_wake | 1 |
|                       | kernel/futex/waitwake.c | __futex_wake_mark | 2 |
|                       | include/linux/list.h | hlist_add_head | 2 |
|                       | include/linux/list.h | hlist_del_init | 2 |
|                       | io_uring/alloc_cache.c | io_alloc_cache_free | 1 |
|                       | io_uring/alloc_cache.c | io_alloc_cache_init | 1 |
|                       | io_uring/alloc_cache.h | io_cache_alloc | 1 |
|                       | io_uring/alloc_cache.h | io_cache_free | 1 |
|                       | io_uring/cancel.c | io_cancel_remove | 1 |
|                       | io_uring/cancel.c | io_cancel_remove_all | 1 |
|                       | io_uring/futex.c | __io_futex_complete | 2 |
|                       | io_uring/futex.c | io_futexv_claim | 2 |
|                       | include/linux/io_uring_types.h | io_kiocb_to_cmd | 8 |
|                       | io_uring/io_uring.h | io_req_set_res | 8 |
|                       | io_uring/io_uring.c | io_req_task_complete | 1 |
|                       | io_uring/io_uring.h | io_req_task_work_add | 3 |
|                       | io_uring/io_uring.h | io_ring_submit_lock | 2 |
|                       | io_uring/io_uring.h | io_ring_submit_unlock | 4 |
|                       | io_uring/io_uring.h | io_tw_lock | 2 |
|                       | include/linux/slab.h | kcalloc | 1 |
|                       | include/linux/slab.h | kfree | 4 |
|                       | include/asm-generic/rwonce.h | READ_ONCE | 6 |
|                       | io_uring/io_uring.h | req_set_fail | 3 |
|                       | include/linux/sched.h | __set_current_state | 1 |
|                       | arch/alpha/include/asm/bitops.h | test_and_set_bit_lock | 1 |
|                       | arch/x86/boot/bitops.h | test_bit | 1 |
|                       | include/linux/kernel.h | u64_to_user_ptr | 2 |
|                       | include/linux/compiler.h | unlikely | 5 |
| futex.h               | -                             | -                                      | -           |


// Darrell
### opdef.c

| Source File                        | Library/Header                     | Function                      | Times Used |
|------------------------------------|------------------------------------|-------------------------------|------------|
| opdef.c                            | <linux/kernel.h>                   | WARN_ON_ONCE                  | 3          |
|                                    | <linux/errno.h>                    | -ECANCELED, -EOPNOTSUPP       | 2          |
|                                    | <linux/io_uring.h>                 | io_uring_get_opcode           | 1          |
|                                    | <linux/io_uring.h>                 | io_uring_op_supported         | 1          |
|                                    | <linux/io_uring.h>                 | io_uring_optable_init         | 1          |
|                                    | <linux/io_uring/cmd.h>             | io_uring_cmd                  | 1          |
|                                    | "io_uring.h"                       | io_prep_readv, io_read        | Multiple   |
|                                    | "opdef.h"                          | io_issue_defs                 | 1          |
|                                    | "refs.h"                           | -                             | 0          |
|                                    | "tctx.h"                           | -                             | 0          |
|                                    | "sqpoll.h"                         | -                             | 0          |
|                                    | "fdinfo.h"                         | -                             | 0          |
|                                    | "kbuf.h"                           | -                             | 0          |
|                                    | "rsrc.h"                           | -                             | 0          |
|                                    | "xattr.h"                          | io_fsetxattr_prep             | 1          |
|                                    | "nop.h"                            | io_nop_prep, io_nop           | 1          |
|                                    | "fs.h"                             | io_fsync_prep, io_fsync       | 1          |
|                                    | "splice.h"                         | io_splice_prep, io_splice     | 1          |
|                                    | "sync.h"                           | io_sfr_prep                   | 1          |
|                                    | "advise.h"                         | io_fadvise_prep               | 1          |
|                                    | "openclose.h"                      | io_openat_prep, io_close      | 1          |
|                                    | "uring_cmd.h"                      | io_uring_cmd_prep             | 1          |
|                                    | "epoll.h"                          | io_epoll_ctl_prep             | 1          |
|                                    | "statx.h"                          | io_statx_prep                 | 1          |
|                                    | "net.h"                            | io_sendmsg_prep               | 1          |
|                                    | "msg_ring.h"                       | io_msg_ring_prep              | 1          |
|                                    | "timeout.h"                        | io_timeout_prep               | 1          |
|                                    | "poll.h"                           | io_poll_add_prep              | 1          |
|                                    | "cancel.h"                         | io_async_cancel_prep          | 1          |
|                                    | "rw.h"                             | io_prep_write                 | 1          |
|                                    | "waitid.h"                         | io_waitid_prep                | 1          |
|                                    | "futex.h"                          | io_futex_prep                 | 1          |
|                                    | "truncate.h"                       | io_ftruncate_prep             | 1          |
|                                    | "zcrx.h"                           | io_send_zc_prep               | 1          |

### opdef.h

| Source File                        | Library/Header                     | Function                       | Times Used |
|------------------------------------|------------------------------------|--------------------------------|------------|
| opdef.h                            | -                                  | io_issue_defs                  | 1          |
|                                    | -                                  | io_cold_defs                   | 1          |
|                                    | -                                  | io_uring_op_supported          | 1          |
|                                    | -                                  | io_uring_optable_init          | 1          |

### openclose.c

| Source File                        | Library/Header                     | Function                       | Times Used |
|------------------------------------|------------------------------------|--------------------------------|------------|
| openclose.c                        | <linux/kernel.h>                   | WARN_ON_ONCE                   | 1          |
|                                    | <linux/errno.h>                    | -EINVAL, -EBADF, -EPERM        | Multiple   |
|                                    | <linux/fs.h>                       | filp_close, do_filp_open       | 2          |
|                                    | <linux/file.h>                     | fd_install, put_unused_fd      | 2          |
|                                    | <linux/fdtable.h>                  | __get_unused_fd_flags          | 1          |
|                                    | <linux/fsnotify.h>                 | -                              | 0          |
|                                    | <linux/namei.h>                    | build_open_flags               | 1          |
|                                    | <linux/io_uring.h>                 | io_req_set_res, req_set_fail   | Multiple   |
|                                    | <uapi/linux/io_uring.h>            | -                              | 0          |
|                                    | "../fs/internal.h"                 | -                              | 0          |
|                                    | "io_uring.h"                       | io_kiocb_to_cmd                | Multiple   |
|                                    | "rsrc.h"                           | -                              | 0          |
|                                    | "openclose.h"                      | io_openat_prep, io_close       | Multiple   |

// Agastya Dava Nurrahman
### io_uring.c

| Source File                        | Library/Header                     | Function                       | Times Used |
|------------------------------------|------------------------------------|--------------------------------|------------|
| alloc_cache.h                      | /include/linux/kasan.h             | kasan_mempool_unpoison_object  | 1          |
| arch/x86/include/asm/string_64.h   | arch/x86/include/asm/string_64.h   | memset                         | 1          |
| alloc_cache.h                      | alloc_cache.h                      | io_alloc_cache_get             | 1          |
| alloc_cache.h                      | alloc_cache.h                      | io_cache_alloc_new             | 1          |
| alloc_cache.h                      | alloc_cache.h                      | io_alloc_cache_put             | 1          |
| linux/mm/slub.c                    | linux/mm/slub.c                    | kfree                          | 1          |
| include/linux/kernel.h             | include/linux/kernel.h             | pr_err                         | 2          |
| include/linux/kernel.h             | include/linux/kernel.h             | pr_info                        | 1          |
| include/linux/sched.h              | include/linux/sched.h              | schedule                       | 1          |
| include/linux/fs.h                 | include/linux/fs.h                 | fput                           | 1          |
| include/linux/fs.h                 | include/linux/fs.h                 | get_unused_fd_flags            | 1          |
| include/linux/fs.h                 | include/linux/fs.h                 | fd_install                     | 1          |
| include/linux/uaccess.h            | include/linux/uaccess.h            | copy_from_user                 | 1          |
| include/linux/uaccess.h            | include/linux/uaccess.h            | copy_to_user                   | 1          |
| include/linux/slab.h               | include/linux/slab.h               | kmalloc                        | 2          |
| include/linux/slab.h               | include/linux/slab.h               | kzalloc                        | 1          |
| include/linux/errno.h              | include/linux/errno.h              | IS_ERR                         | 1          |
| include/linux/errno.h              | include/linux/errno.h              | PTR_ERR                        | 1          |


### io_uring.h

| Source File                        | Library/Header                     | Function                       | Times Used |
|------------------------------------|------------------------------------|--------------------------------|------------|
| include/linux/types.h              | include/linux/types.h              | __u32                          | 3          |
| include/linux/types.h              | include/linux/types.h              | __u64                          | 2          |
| include/linux/errno.h              | include/linux/errno.h              | EINVAL                         | 1          |
| include/linux/errno.h              | include/linux/errno.h              | ENOMEM                         | 1          |
| include/linux/errno.h              | include/linux/errno.h              | EFAULT                         | 1          |
| include/linux/fs.h                 | include/linux/fs.h                 | struct file                    | 2          |
| include/linux/fs.h                 | include/linux/fs.h                 | struct inode                   | 1          |
| include/linux/uaccess.h            | include/linux/uaccess.h            | copy_from_user                 | 1          |
| include/linux/uaccess.h            | include/linux/uaccess.h            | copy_to_user                   | 1          |
| include/linux/slab.h               | include/linux/slab.h               | kmalloc                        | 1          |
| include/linux/slab.h               | include/linux/slab.h               | kfree                          | 1          |
| include/linux/kernel.h             | include/linux/kernel.h             | pr_err                         | 1          |
| include/linux/kernel.h             | include/linux/kernel.h             | pr_info                        | 1          |


### io-wq.c

| Source File                        | Library/Header                     | Function                       | Times Used |
|------------------------------------|------------------------------------|--------------------------------|------------|
| include/linux/kernel.h             | include/linux/kernel.h             | pr_err                         | 1          |
| include/linux/kernel.h             | include/linux/kernel.h             | pr_info                        | 1          |
| include/linux/sched.h              | include/linux/sched.h              | schedule                       | 1          |
| include/linux/slab.h               | include/linux/slab.h               | kmalloc                        | 2          |
| include/linux/slab.h               | include/linux/slab.h               | kfree                          | 1          |
| include/linux/errno.h              | include/linux/errno.h              | IS_ERR                         | 1          |
| include/linux/errno.h              | include/linux/errno.h              | PTR_ERR                        | 1          |
| include/linux/wait.h               | include/linux/wait.h               | wait_event_interruptible       | 1          |
| include/linux/wait.h               | include/linux/wait.h               | wake_up                        | 1          |
| include/linux/spinlock.h           | include/linux/spinlock.h           | spin_lock                      | 1          |
| include/linux/spinlock.h           | include/linux/spinlock.h           | spin_unlock                    | 1          |
| include/linux/workqueue.h          | include/linux/workqueue.h          | queue_work                     | 1          |
| include/linux/workqueue.h          | include/linux/workqueue.h          | flush_workqueue                | 1          |



### io-wq.h

| Source File                        | Library/Header                     | Function/Struct                | Times Used |
|------------------------------------|------------------------------------|--------------------------------|------------|
| include/linux/types.h              | include/linux/types.h              | __u32                          | 2          |
| include/linux/types.h              | include/linux/types.h              | __u64                          | 1          |
| include/linux/spinlock.h           | include/linux/spinlock.h           | spinlock_t                     | 1          |
| include/linux/workqueue.h          | include/linux/workqueue.h          | struct workqueue_struct        | 1          |
| include/linux/workqueue.h          | include/linux/workqueue.h          | queue_work                     | 1          |
| include/linux/slab.h               | include/linux/slab.h               | kmalloc                        | 1          |
| include/linux/slab.h               | include/linux/slab.h               | kfree                          | 1          |
| include/linux/errno.h              | include/linux/errno.h              | IS_ERR                         | 1          |
| include/linux/errno.h              | include/linux/errno.h              | PTR_ERR                        | 1          |


### kbuf.c

| Source File                        | Library/Header                     | Function/Struct                | Times Used |
|------------------------------------|------------------------------------|--------------------------------|------------|
| include/linux/slab.h               | include/linux/slab.h               | kmalloc                        | 2          |
| include/linux/slab.h               | include/linux/slab.h               | kfree                          | 1          |
| include/linux/uaccess.h            | include/linux/uaccess.h            | copy_from_user                 | 1          |
| include/linux/uaccess.h            | include/linux/uaccess.h            | copy_to_user                   | 1          |
| include/linux/errno.h              | include/linux/errno.h              | IS_ERR                         | 1          |
| include/linux/errno.h              | include/linux/errno.h              | PTR_ERR                        | 1          |
| include/linux/kernel.h             | include/linux/kernel.h             | pr_err                         | 1          |
| include/linux/kernel.h             | include/linux/kernel.h             | pr_info                        | 1          |


### kbuf.h

| Source File                        | Library/Header                     | Function/Struct                | Times Used |
|------------------------------------|------------------------------------|--------------------------------|------------|
| include/linux/types.h              | include/linux/types.h              | __u32                          | 1          |
| include/linux/types.h              | include/linux/types.h              | __u64                          | 1          |
| include/linux/slab.h               | include/linux/slab.h               | kmalloc                        | 1          |
| include/linux/slab.h               | include/linux/slab.h               | kfree                          | 1          |
| include/linux/uaccess.h            | include/linux/uaccess.h            | copy_from_user                 | 1          |
| include/linux/uaccess.h            | include/linux/uaccess.h            | copy_to_user                   | 1          |
| include/linux/errno.h              | include/linux/errno.h              | IS_ERR                         | 1          |
| include/linux/errno.h              | include/linux/errno.h              | PTR_ERR                        | 1          |


### memmap.c

| Source File                        | Library/Header                     | Function/Struct                | Times Used |
|------------------------------------|------------------------------------|--------------------------------|------------|
| include/linux/slab.h               | include/linux/slab.h               | kmalloc                        | 2          |
| include/linux/slab.h               | include/linux/slab.h               | kfree                          | 1          |
| include/linux/uaccess.h            | include/linux/uaccess.h            | copy_from_user                 | 1          |
| include/linux/uaccess.h            | include/linux/uaccess.h            | copy_to_user                   | 1          |
| include/linux/errno.h              | include/linux/errno.h              | IS_ERR                         | 1          |
| include/linux/errno.h              | include/linux/errno.h              | PTR_ERR                        | 1          |
| include/linux/kernel.h             | include/linux/kernel.h             | pr_err                         | 1          |
| include/linux/kernel.h             | include/linux/kernel.h             | pr_info                        | 1          |
| include/linux/mm.h                 | include/linux/mm.h                 | struct page                    | 1          |
| include/linux/mm.h                 | include/linux/mm.h                 | alloc_pages                    | 1          |
| include/linux/mm.h                 | include/linux/mm.h                 | __free_pages                   | 1          |
| include/linux/mm.h                 | include/linux/mm.h                 | get_user_pages                 | 1          |


### memmap.h

| Source File                        | Library/Header                     | Function/Struct                | Times Used |
|------------------------------------|------------------------------------|--------------------------------|------------|
| include/linux/types.h              | include/linux/types.h              | __u32                          | 1          |
| include/linux/types.h              | include/linux/types.h              | __u64                          | 1          |
| include/linux/mm.h                 | include/linux/mm.h                 | struct page                    | 1          |
| include/linux/mm.h                 | include/linux/mm.h                 | alloc_pages                    | 1          |
| include/linux/mm.h                 | include/linux/mm.h                 | __free_pages                   | 1          |
| include/linux/mm.h                 | include/linux/mm.h                 | get_user_pages                 | 1          |
| include/linux/slab.h               | include/linux/slab.h               | kmalloc                        | 1          |
| include/linux/slab.h               | include/linux/slab.h               | kfree                          | 1          |
| include/linux/uaccess.h            | include/linux/uaccess.h            | copy_from_user                 | 1          |
| include/linux/uaccess.h            | include/linux/uaccess.h            | copy_to_user                   | 1          |
| include/linux/errno.h              | include/linux/errno.h              | IS_ERR                         | 1          |
| include/linux/errno.h              | include/linux/errno.h              | PTR_ERR                        | 1          |


### msg_ring.c

| Source File                        | Library/Header                     | Function/Struct                | Times Used |
|------------------------------------|------------------------------------|--------------------------------|------------|
| include/linux/slab.h               | include/linux/slab.h               | kmalloc                        | 2          |
| include/linux/slab.h               | include/linux/slab.h               | kfree                          | 1          |
| include/linux/uaccess.h            | include/linux/uaccess.h            | copy_from_user                 | 1          |
| include/linux/uaccess.h            | include/linux/uaccess.h            | copy_to_user                   | 1          |
| include/linux/errno.h              | include/linux/errno.h              | IS_ERR                         | 1          |
| include/linux/errno.h              | include/linux/errno.h              | PTR_ERR                        | 1          |
| include/linux/kernel.h             | include/linux/kernel.h             | pr_err                         | 1          |
| include/linux/kernel.h             | include/linux/kernel.h             | pr_info                        | 1          |
| include/linux/sched.h              | include/linux/sched.h              | schedule                       | 1          |
| include/linux/wait.h               | include/linux/wait.h               | wait_event_interruptible       | 1          |
| include/linux/wait.h               | include/linux/wait.h               | wake_up                        | 1          |



### msg_ring.h

| Source File                        | Library/Header                     | Function/Struct                | Times Used |
|------------------------------------|------------------------------------|--------------------------------|------------|
| include/linux/types.h              | include/linux/types.h              | __u32                          | 1          |
| include/linux/types.h              | include/linux/types.h              | __u64                          | 1          |
| include/linux/slab.h               | include/linux/slab.h               | kmalloc                        | 1          |
| include/linux/slab.h               | include/linux/slab.h               | kfree                          | 1          |
| include/linux/uaccess.h            | include/linux/uaccess.h            | copy_from_user                 | 1          |
| include/linux/uaccess.h            | include/linux/uaccess.h            | copy_to_user                   | 1          |
| include/linux/errno.h              | include/linux/errno.h              | IS_ERR                         | 1          |
| include/linux/errno.h              | include/linux/errno.h              | PTR_ERR                        | 1          |
| include/linux/kernel.h             | include/linux/kernel.h             | pr_err                         | 1          |
| include/linux/kernel.h             | include/linux/kernel.h             | pr_info                        | 1          |


### napi.c

| Source File                        | Library/Header                     | Function/Struct                | Times Used |
|------------------------------------|------------------------------------|--------------------------------|------------|
| include/linux/netdevice.h          | include/linux/netdevice.h          | napi_enable                    | 1          |
| include/linux/netdevice.h          | include/linux/netdevice.h          | napi_disable                   | 1          |
| include/linux/netdevice.h          | include/linux/netdevice.h          | napi_schedule                  | 1          |
| include/linux/netdevice.h          | include/linux/netdevice.h          | napi_complete                  | 1          |
| include/linux/slab.h               | include/linux/slab.h               | kmalloc                        | 1          |
| include/linux/slab.h               | include/linux/slab.h               | kfree                          | 1          |
| include/linux/errno.h              | include/linux/errno.h              | IS_ERR                         | 1          |
| include/linux/errno.h              | include/linux/errno.h              | PTR_ERR                        | 1          |
| include/linux/kernel.h             | include/linux/kernel.h             | pr_err                         | 1          |
| include/linux/kernel.h             | include/linux/kernel.h             | pr_info                        | 1          |


### napi.h

| Source File                        | Library/Header                     | Function/Struct                | Times Used |
|------------------------------------|------------------------------------|--------------------------------|------------|
| include/linux/netdevice.h          | include/linux/netdevice.h          | struct napi_struct             | 1          |
| include/linux/netdevice.h          | include/linux/netdevice.h          | napi_enable                    | 1          |
| include/linux/netdevice.h          | include/linux/netdevice.h          | napi_disable                   | 1          |
| include/linux/netdevice.h          | include/linux/netdevice.h          | napi_schedule                  | 1          |
| include/linux/netdevice.h          | include/linux/netdevice.h          | napi_complete                  | 1          |
| include/linux/slab.h               | include/linux/slab.h               | kmalloc                        | 1          |
| include/linux/slab.h               | include/linux/slab.h               | kfree                          | 1          |
| include/linux/errno.h              | include/linux/errno.h              | IS_ERR                         | 1          |
| include/linux/errno.h              | include/linux/errno.h              | PTR_ERR                        | 1          |
| include/linux/kernel.h             | include/linux/kernel.h             | pr_err                         | 1          |
| include/linux/kernel.h             | include/linux/kernel.h             | pr_info                        | 1          |



### net.c

| Source File                        | Library/Header                     | Function/Struct                | Times Used |
|------------------------------------|------------------------------------|--------------------------------|------------|
| include/linux/netdevice.h          | include/linux/netdevice.h          | alloc_netdev                   | 1          |
| include/linux/netdevice.h          | include/linux/netdevice.h          | free_netdev                    | 1          |
| include/linux/netdevice.h          | include/linux/netdevice.h          | register_netdev                | 1          |
| include/linux/netdevice.h          | include/linux/netdevice.h          | unregister_netdev              | 1          |
| include/linux/skbuff.h             | include/linux/skbuff.h             | dev_kfree_skb                  | 1          |
| include/linux/skbuff.h             | include/linux/skbuff.h             | skb_put                        | 1          |
| include/linux/skbuff.h             | include/linux/skbuff.h             | skb_reserve                    | 1          |
| include/linux/errno.h              | include/linux/errno.h              | IS_ERR                         | 1          |
| include/linux/errno.h              | include/linux/errno.h              | PTR_ERR                        | 1          |
| include/linux/kernel.h             | include/linux/kernel.h             | pr_err                         | 1          |
| include/linux/kernel.h             | include/linux/kernel.h             | pr_info                        | 1          |
| include/linux/slab.h               | include/linux/slab.h               | kmalloc                        | 1          |
| include/linux/slab.h               | include/linux/slab.h               | kfree                          | 1          |


### net.h

| Source File                        | Library/Header                     | Function/Struct                | Times Used |
|------------------------------------|------------------------------------|--------------------------------|------------|
| include/linux/netdevice.h          | include/linux/netdevice.h          | struct net_device              | 1          |
| include/linux/netdevice.h          | include/linux/netdevice.h          | alloc_netdev                   | 1          |
| include/linux/netdevice.h          | include/linux/netdevice.h          | free_netdev                    | 1          |
| include/linux/netdevice.h          | include/linux/netdevice.h          | register_netdev                | 1          |
| include/linux/netdevice.h          | include/linux/netdevice.h          | unregister_netdev              | 1          |
| include/linux/skbuff.h             | include/linux/skbuff.h             | struct sk_buff                 | 1          |
| include/linux/skbuff.h             | include/linux/skbuff.h             | dev_kfree_skb                  | 1          |
| include/linux/skbuff.h             | include/linux/skbuff.h             | skb_put                        | 1          |
| include/linux/skbuff.h             | include/linux/skbuff.h             | skb_reserve                    | 1          |
| include/linux/errno.h              | include/linux/errno.h              | IS_ERR                         | 1          |
| include/linux/errno.h              | include/linux/errno.h              | PTR_ERR                        | 1          |
| include/linux/kernel.h             | include/linux/kernel.h             | pr_err                         | 1          |
| include/linux/kernel.h             | include/linux/kernel.h             | pr_info                        | 1          |


### nop.h

| Source File                        | Library/Header                     | Function/Struct                | Times Used |
|------------------------------------|------------------------------------|--------------------------------|------------|
| include/linux/types.h              | include/linux/types.h              | __u32                          | 1          |
| include/linux/types.h              | include/linux/types.h              | __u64                          | 1          |
| include/linux/kernel.h             | include/linux/kernel.h             | pr_err                         | 1          |
| include/linux/kernel.h             | include/linux/kernel.h             | pr_info                        | 1          |
| include/linux/slab.h               | include/linux/slab.h               | kmalloc                        | 1          |
| include/linux/slab.h               | include/linux/slab.h               | kfree                          | 1          |
| include/linux/errno.h              | include/linux/errno.h              | IS_ERR                         | 1          |
| include/linux/errno.h              | include/linux/errno.h              | PTR_ERR                        | 1          |


### nop.c

| Source File                        | Library/Header                     | Function/Struct                | Times Used |
|------------------------------------|------------------------------------|--------------------------------|------------|
| include/linux/types.h              | include/linux/types.h              | __u32                          | 1          |
| include/linux/types.h              | include/linux/types.h              | __u64                          | 1          |
| include/linux/kernel.h             | include/linux/kernel.h             | pr_err                         | 1          |
| include/linux/kernel.h             | include/linux/kernel.h             | pr_info                        | 1          |
| include/linux/slab.h               | include/linux/slab.h               | kmalloc                        | 1          |
| include/linux/slab.h               | include/linux/slab.h               | kfree                          | 1          |
| include/linux/errno.h              | include/linux/errno.h              | IS_ERR                         | 1          |
| include/linux/errno.h              | include/linux/errno.h              | PTR_ERR                        | 1          |


### notif.c

| Source File                        | Library/Header                     | Function/Struct                | Times Used |
|------------------------------------|------------------------------------|--------------------------------|------------|
| include/linux/types.h              | include/linux/types.h              | __u32                          | 1          |
| include/linux/types.h              | include/linux/types.h              | __u64                          | 1          |
| include/linux/kernel.h             | include/linux/kernel.h             | pr_err                         | 1          |
| include/linux/kernel.h             | include/linux/kernel.h             | pr_info                        | 1          |
| include/linux/slab.h               | include/linux/slab.h               | kmalloc                        | 1          |
| include/linux/slab.h               | include/linux/slab.h               | kfree                          | 1          |
| include/linux/errno.h              | include/linux/errno.h              | IS_ERR                         | 1          |
| include/linux/errno.h              | include/linux/errno.h              | PTR_ERR                        | 1          |
| include/linux/uaccess.h            | include/linux/uaccess.h            | copy_from_user                 | 1          |
| include/linux/uaccess.h            | include/linux/uaccess.h            | copy_to_user                   | 1          |


### notif.h

| Source File                        | Library/Header                     | Function/Struct                | Times Used |
|------------------------------------|------------------------------------|--------------------------------|------------|
| include/linux/types.h              | include/linux/types.h              | __u32                          | 1          |
| include/linux/types.h              | include/linux/types.h              | __u64                          | 1          |
| include/linux/kernel.h             | include/linux/kernel.h             | pr_err                         | 1          |
| include/linux/kernel.h             | include/linux/kernel.h             | pr_info                        | 1          |
| include/linux/slab.h               | include/linux/slab.h               | kmalloc                        | 1          |
| include/linux/slab.h               | include/linux/slab.h               | kfree                          | 1          |
| include/linux/errno.h              | include/linux/errno.h              | IS_ERR                         | 1          |
| include/linux/errno.h              | include/linux/errno.h              | PTR_ERR                        | 1          |
| include/linux/uaccess.h            | include/linux/uaccess.h            | copy_from_user                 | 1          |
| include/linux/uaccess.h            | include/linux/uaccess.h            | copy_to_user                   | 1          |

### statx.c

| Source File                        | Library/Header                     | Function/Struct                | Times Used |
|------------------------------------|------------------------------------|--------------------------------|------------|
| statx.c                            | statx.c                            | io_uring_prep_statx            | 1          |
|                                    | io_uring/io_uring.c                | io_uring_get_sqe               | 1          |
|                                    | uapi/linux/io_uring.h              | sqe->opcode                    | 1          |
|                                    | uapi/linux/io_uring.h              | sqe->fd                        | 1          |
|                                    | uapi/linux/io_uring.h              | sqe->off                       | 1          |
|                                    | uapi/linux/io_uring.h              | sqe->addr                      | 1          |
|                                    | uapi/linux/io_uring.h              | sqe->len                       | 1          |
|                                    | string.h                           | memset                         | 1          |

### statx.h

| Source File                        | Library/Header                     | Function/Struct                | Times Used |
|------------------------------------|------------------------------------|--------------------------------|------------|
| statx.h                            | statx.h                            | io_uring_prep_statx            | 1          |
|                                    | statx.h                            | io_uring_submit_statx          | 1          |

### sync.c

| Source File                        | Library/Header                     | Function/Struct                | Times Used |
|------------------------------------|------------------------------------|--------------------------------|------------|
| sync.c                             | sync.c                             | io_uring_prep_fsync            | 1          |
|                                    | sync.c                             | io_uring_prep_fdatasync        | 1          |
|                                    | io_uring/io_uring.c                | io_uring_get_sqe               | 1          |
|                                    | uapi/linux/io_uring.h              | sqe->opcode                    | 1          |
|                                    | uapi/linux/io_uring.h              | sqe->fd                        | 1          |
|                                    | uapi/linux/io_uring.h              | sqe->flags                     | 1          |
|                                    | string.h                           | memset                         | 1          |

### sync.h

| Source File                        | Library/Header                     | Function/Struct                | Times Used |
|------------------------------------|------------------------------------|--------------------------------|------------|
| sync.h                             | sync.h                             | io_uring_prep_fsync            | 1          |
|                                    | sync.h                             | io_uring_prep_fdatasync        | 1          |
|                                    | sync.h                             | io_uring_submit_fsync          | 1          |

### tctx.c

| Source File                        | Library/Header                     | Function/Struct                | Times Used |
|------------------------------------|------------------------------------|--------------------------------|------------|
| tctx.c                             | tctx.c                             | io_uring_tctx_get              | 1          |
|                                    | tctx.c                             | io_uring_tctx_put              | 1          |
|                                    | linux/sched/task.h                 | get_task_struct                | 1          |
|                                    | linux/sched/task.h                 | put_task_struct                | 1          |
|                                    | linux/slab.h                       | kmem_cache_alloc               | 1          |
|                                    | linux/slab.h                       | kmem_cache_free                | 1          |
|                                    | kernel/rcu/tree.c                  | call_rcu                       | 1          |

### tctx.h

| Source File                        | Library/Header                     | Function/Struct                | Times Used |
|------------------------------------|------------------------------------|--------------------------------|------------|
| tctx.h                             | tctx.h                             | io_uring_tctx_get              | 1          |
|                                    | tctx.h                             | io_uring_tctx_put              | 1          |

### timeout.c

| Source File                        | Library/Header                     | Function/Struct                | Times Used |
|------------------------------------|------------------------------------|--------------------------------|------------|
| timeout.c                          | timeout.c                          | io_uring_prep_timeout          | 1          |
|                                    | timeout.c                          | io_uring_prep_timeout_remove   | 1          |
|                                    | io_uring/io_uring.c                | io_uring_get_sqe               | 1          |
|                                    | uapi/linux/io_uring.h              | sqe->opcode                    | 1          |
|                                    | uapi/linux/io_uring.h              | sqe->addr                      | 1          |
|                                    | uapi/linux/io_uring.h              | sqe->off                       | 1          |
|                                    | uapi/linux/io_uring.h              | sqe->len                       | 1          |
|                                    | string.h                           | memset                         | 1          |

### timeout.h

| Source File                        | Library/Header                     | Function/Struct                | Times Used |
|------------------------------------|------------------------------------|--------------------------------|------------|
| timeout.h                          | timeout.h                          | io_uring_prep_timeout          | 1          |
|                                    | timeout.h                          | io_uring_prep_timeout_remove   | 1          |
|                                    | timeout.h                          | io_uring_submit_timeout        | 1          |

### truncate.c

| Source File                        | Library/Header                     | Function/Struct                | Times Used |
|------------------------------------|------------------------------------|--------------------------------|------------|
| truncate.c                         | truncate.c                         | io_uring_prep_truncate         | 1          |
|                                    | truncate.c                         | io_uring_prep_ftruncate        | 1          |
|                                    | io_uring/io_uring.c                | io_uring_get_sqe               | 1          |
|                                    | uapi/linux/io_uring.h              | sqe->opcode                    | 1          |
|                                    | uapi/linux/io_uring.h              | sqe->fd                        | 1          |
|                                    | uapi/linux/io_uring.h              | sqe->off                       | 1          |
|                                    | string.h                           | memset                         | 1          |

### truncate.h

| Source File                        | Library/Header                     | Function/Struct                | Times Used |
|------------------------------------|------------------------------------|--------------------------------|------------|
| truncate.h                         | truncate.h                         | io_uring_prep_truncate         | 1          |
|                                    | truncate.h                         | io_uring_prep_ftruncate        | 1          |
|                                    | truncate.h                         | io_uring_submit_truncate       | 1          |

### uring_cmd.c

| Source File                        | Library/Header                     | Function/Struct                | Times Used |
|------------------------------------|------------------------------------|--------------------------------|------------|
| uring_cmd.c                        | uring_cmd.c                        | io_uring_prep_uring_cmd        | 1          |
|                                    | io_uring/io_uring.c                | io_uring_get_sqe               | 1          |
|                                    | uapi/linux/io_uring.h              | sqe->opcode                    | 1          |
|                                    | uapi/linux/io_uring.h              | sqe->addr                      | 1          |
|                                    | uapi/linux/io_uring.h              | sqe->len                       | 1          |
|                                    | string.h                           | memset                         | 1          |

### uring_cmd.h

| Source File                        | Library/Header                     | Function/Struct                | Times Used |
|------------------------------------|------------------------------------|--------------------------------|------------|
| uring_cmd.h                        | uring_cmd.h                        | io_uring_prep_uring_cmd        | 1          |
|                                    | uring_cmd.h                        | io_uring_submit_uring_cmd      | 1          |

### waitid.c

| Source File                        | Library/Header                     | Function/Struct                | Times Used |
|------------------------------------|------------------------------------|--------------------------------|------------|
| waitid.c                           | waitid.c                           | io_uring_prep_waitid           | 1          |
|                                    | io_uring/io_uring.c                | io_uring_get_sqe               | 1          |
|                                    | uapi/linux/io_uring.h              | sqe->opcode                    | 1          |
|                                    | uapi/linux/io_uring.h              | sqe->fd                        | 1          |
|                                    | uapi/linux/io_uring.h              | sqe->addr                      | 1          |
|                                    | string.h                           | memset                         | 1          |

### waitid.h

| Source File                        | Library/Header                     | Function/Struct                | Times Used |
|------------------------------------|------------------------------------|--------------------------------|------------|
| waitid.h                           | waitid.h                           | io_uring_prep_waitid           | 1          |
|                                    | waitid.h                           | io_uring_submit_waitid         | 1          |

### xattr.c

| Source File                        | Library/Header                     | Function/Struct                | Times Used |
|------------------------------------|------------------------------------|--------------------------------|------------|
| xattr.c                            | xattr.c                            | io_uring_prep_getxattr         | 1          |
|                                    | xattr.c                            | io_uring_prep_setxattr         | 1          |
|                                    | xattr.c                            | io_uring_prep_removexattr      | 1          |
|                                    | io_uring/io_uring.c                | io_uring_get_sqe               | 1          |
|                                    | uapi/linux/io_uring.h              | sqe->opcode                    | 1          |
|                                    | uapi/linux/io_uring.h              | sqe->addr                      | 1          |
|                                    | uapi/linux/io_uring.h              | sqe->fd                        | 1          |
|                                    | string.h                           | memset                         | 1          |

### xattr.h

| Source File                        | Library/Header                     | Function/Struct                | Times Used |
|------------------------------------|------------------------------------|--------------------------------|------------|
| xattr.h                            | xattr.h                            | io_uring_prep_getxattr         | 1          |
|                                    | xattr.h                            | io_uring_prep_setxattr         | 1          |
|                                    | xattr.h                            | io_uring_prep_removexattr      | 1          |
|                                    | xattr.h                            | io_uring_submit_getxattr       | 1          |

### zcrx.c

| Source File                        | Library/Header                     | Function/Struct                   | Times Used |
|------------------------------------|------------------------------------|-----------------------------------|------------|
| zcrx.c                             | zcrx.c                             | io_uring_prep_zerocopy_recv       | 1          |
|                                    | zcrx.c                             | io_uring_prep_zerocopy_recv_multi | 1          |
|                                    | io_uring/io_uring.c                | io_uring_get_sqe                  | 1          |
|                                    | uapi/linux/io_uring.h              | sqe->opcode                       | 1          |
|                                    | uapi/linux/io_uring.h              | sqe->fd                           | 1          |
|                                    | uapi/linux/io_uring.h              | sqe->addr                         | 1          |
|                                    | string.h                           | memset                            | 1          |

### zcrx.h

| Source File                        | Library/Header                     | Function/Struct                   | Times Used |
|------------------------------------|------------------------------------|-----------------------------------|------------|
| zcrx.h                             | zcrx.h                             | io_uring_prep_zerocopy_recv       | 1          |
|                                    | zcrx.h                             | io_uring_prep_zerocopy_recv_multi | 1          |
|                                    | zcrx.h                             | io_uring_submit_zerocopy_recv     | 1          |