| Source                | Library                       | Function Utilized                      | Times Used  |
|-----------------------|-------------------------------|----------------------------------------|-------------|
| advise.c              | include/asm-generic/rwonce.h  | READ_ONCE                              | 8           |
|                       | include/linux/io_uring_types.h| io_kiocb_to_cmd                        | 4           |
|                       | include/linux/mm.h            | do_madvise                             | 1           |
|                       | io_uring/io_uring.h           | io_req_set_res                         | 2           |
|                       | mm/fadvise.c                  | vfs_fadvise                            | 1           |
|                       | io_uring/io_uring.h           | req_set_fail                           | 1           |
|                       | include/asm-generic/bug.h     | WARN_ON_ONCE                           | 2           |
| advise.h              | -                             | -                                      | -           |
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
| Source        | Library                             | Function Utilized                | Times Used |
|---------------|-------------------------------------|----------------------------------|------------|
| opdef.c       | arch/mips/boot/tools/relocs.h       | ARRAY_SIZE                        | 3          |
|               | arch/x86/include/asm/kvm-x86-ops.h  | BUILD_BUG_ON                      | 2          |
|               | arch/mips/include/asm/bug.h         | BUG_ON                            | 2          |
|               | include/asm-generic/bug.h           | WARN_ON_ONCE                      | 2          |
| opdef.h       | -                                   | -                                 | -          |
| openclose.c   | io_uring/openclose.c                | __io_close_fixed                  | 1          |
|               | arch/parisc/include/asm/processor.h | rlimit                            | 1          |
|               | fs/namei.c                          | putname                           | 2          |
|               | include/asm-generic/bug.h           | WARN_ON_ONCE                      | 1          |
|               | drivers/gpu/drm/msm/disp/dpu1/dpu_crtc.h | spin_lock                     | 1          |
|               | include/linux/fdtable.h            | files_lookup_fd_locked            | 1          |
|               | fs/file.c                           | receive_fd                        | 1          |
|               | fs/file.c                           | __get_unused_fd_flags             | 1          |
|               | include/linux/io_uring_types.h      | io_kiocb_to_cmd                   | 10         |
|               | fs/open.c                           | filp_close                        | 1          |
|               | include/linux/io_uring.h           | io_is_uring_fops                  | 1          |
|               | include/linux/spinlock.h           | spin_unlock                       | 3          |
|               | fs/file.c                           | file_close_fd_locked              | 1          |
|               | fs/file.c                           | fd_install                        | 1          |
|               | io_uring/openclose.c               | io_openat_force_async             | 2          |
|               | crypto/asymmetric_keys/x509_parser.h | IS_ERR                          | 2          |
|               | io_uring/openclose.c               | __io_openat_prep                  | 2          |
|               | crypto/af_alg.c                    | getname                           | 1          |
|               | io_uring/openclose.c               | io_openat2                        | 1          |
|               | io_uring/filetable.c               | io_fixed_fd_remove                | 1          |
|               | io_uring/io_uring.h                | io_ring_submit_lock               | 1          |
|               | io_uring/filetable.c               | io_fixed_fd_install               | 1          |
|               | include/linux/fcntl.h              | force_o_largefile                 | 1          |
|               | io_uring/openclose.c               | io_close_fixed                    | 1          |
|               | include/linux/err.h                | PTR_ERR                           | 2          |
|               | include/linux/compiler.h           | unlikely                          | 2          |
|               | io_uring/io_uring.h                | io_req_set_res                    | 3          |
|               | fs/open.c                           | build_open_how                    | 1          |
|               | include/asm-generic/rwonce.h       | READ_ONCE                         | 10         |
|               | io_uring/io_uring.h                | req_set_fail                      | 3          |
|               | fs/open.c                           | build_open_flags                  | 1          |
|               | fs/file.c                           | put_unused_fd                     | 1          |
|               | fs/namei.c                          | do_filp_open                      | 1          |
|               | include/linux/kernel.h             | u64_to_user_ptr                   | 2          |
|               | include/linux/uaccess.h            | copy_struct_from_user             | 1          |
|               | io_uring/io_uring.h                | io_ring_submit_unlock             | 1          |
| refs.h        | include/linux/atomic/atomic-instrumented.h | atomic_dec_and_test           | 2          |
|               | io_uring/refs.h                     | __io_req_set_refcount            | 1          |
|               | include/linux/compiler.h            | data_race                        | 1          |
|               | block/blk.h                         | req_ref_zero_or_close_to_overflow | 4         |
|               | include/asm-generic/bug.h           | WARN_ON_ONCE                     | 8          |
|               | include/linux/atomic/atomic-instrumented.h | atomic_inc                   | 1          |
|               | include/linux/compiler.h            | likely                           | 1          |
|               | include/linux/atomic/atomic-instrumented.h | atomic_dec                   | 1          |
|               | include/linux/atomic/atomic-instrumented.h | atomic_read                  | 1          |
|               | include/linux/atomic/atomic-instrumented.h | atomic_set                   | 1          |
|               | include/linux/atomic/atomic-instrumented.h | atomic_inc_not_zero          | 1          |
| register.c    | arch/x86/include/asm/kvm-x86-ops.h  | BUILD_BUG_ON                     | 1          |
|               | include/linux/nospec.h              | array_index_nospec               | 2          |
|               | io_uring/register.c                 | __io_register_iowq_aff           | 2          |
|               | arch/alpha/kernel/osf_sys.c         | fget                             | 1          |
|               | lib/xarray.c                        | xa_erase                         | 1          |
|               | include/linux/uaccess.h             | copy_to_user                     | 5          |
|               | include/linux/fortify-string.h      | memchr_inv                       | 3          |
|               | io_uring/memmap.c                   | io_free_region                   | 3          |
|               | arch/parisc/kernel/firmware.c       | __releases                       | 1          |
|               | include/linux/string.h              | memdup_user                      | 1          |
|               | fs/file_table.c                     | fput                             | 2          |
|               | include/linux/uaccess.h             | copy_from_user                   | 8          |
|               | include/linux/wait.h                | wake_up                          | 1          |
|               | include/asm-generic/bug.h           | WARN_ON_ONCE                     | 2          |
|               | include/linux/kernel.h              | u64_to_user_ptr                  | 1          |
|               | kernel/compat.c                     | compat_get_bitmap                | 1          |
|               | io_uring/io-wq.c                    | io_wq_cpu_affinity               | 1          |
|               | include/linux/atomic/atomic-instrumented.h | atomic_set                   | 1          |
|               | io_uring/io_uring.c                 | io_uring_fill_params             | 1          |
|               | io_uring/register.c                 | io_register_iowq_aff             | 1          |
|               | io_uring/rsrc.c                     | io_register_clone_buffers         | 1          |
|               | io_uring/register.c                 | io_uring_register_blind          | 1          |
|               | include/linux/wait.h                | wq_has_sleeper                   | 2          |
|               | io_uring/napi.c                     | io_unregister_napi               | 1          |
|               | include/linux/bitops.h              | __set_bit                        | 2          |
|               | include/linux/spinlock.h            | spin_unlock                      | 1          |
|               | crypto/asymmetric_keys/x509_parser.h | IS_ERR                          | 2          |
|               | include/linux/cred.h                | put_cred                         | 2          |
|               | io_uring/io_uring.c                 | rings_size                       | 1          |
|               | include/linux/sched/task.h          | get_task_struct                  | 1          |
|               | io_uring/register.c                 | __io_uring_register              | 1          |
|               | io_uring/eventfd.c                  | io_eventfd_unregister            | 1          |
|               | io_uring/memmap.h                   | io_region_get_ptr                | 3          |
|               | include/linux/xarray.h              | xa_alloc_cyclic                  | 1          |
|               | include/linux/cpumask.h             | cpumask_clear                    | 1          |
|               | include/linux/cpumask_types.h       | cpumask_bits                     | 1          |
|               | arch/alpha/include/asm/string.h     | memset                           | 4          |
|               | io_uring/register.c                 | io_register_iowq_max_workers     | 1          |
|               | io_uring/register.c                 | io_register_restrictions         | 1          |
|               | io_uring/register.c                 | io_register_enable_rings         | 1          |
|               | drivers/gpu/drm/radeon/mkregtable.c | list_for_each_entry              | 1          |
|               | include/linux/compiler.h            | unlikely                         | 3          |
|               | io_uring/register.c                 | io_register_clock                | 1          |
|               | io_uring/register.c                 | io_register_personality          | 1          |
|               | io_uring/register.c                 | io_register_resize_rings         | 1          |
|               | include/linux/cpumask.h             | free_cpumask_var                 | 2          |
|               | include/linux/xarray.h              | XA_LIMIT                         | 1          |
|               | io_uring/sqpoll.c                   | io_put_sq_data                   | 2          |
|               | arch/mips/boot/tools/relocs.h       | ARRAY_SIZE                       | 3          |
|               | io_uring/rsrc.c                     | io_sqe_buffers_unregister         | 1          |
|               | include/linux/err.h                 | PTR_ERR                          | 2          |
|               | include/linux/io_uring.h            | io_is_uring_fops                 | 1          |
|               | io_uring/sqpoll.c                   | io_sq_thread_unpark              | 1          |
|               | io_uring/rsrc.c                     | io_sqe_files_register            | 1          |
|               | io_uring/rsrc.c                     | io_register_files_update         | 1          |
|               | include/linux/mutex.h               | mutex_lock                       | 8          |
|               | arch/x86/boot/bitops.h              | test_bit                         | 1          |
|               | io_uring/kbuf.c                     | io_unregister_pbuf_ring          | 1          |
|               | io_uring/kbuf.c                     | io_register_pbuf_status          | 1          |
|               | include/linux/cpumask.h             | cpumask_size                     | 2          |
|               | io_uring/sqpoll.c                   | io_sqpoll_wq_cpu_affinity        | 1          |
|               | include/asm-generic/rwonce.h        | READ_ONCE                        | 7          |
|               | io_uring/io_uring.c                 | io_activate_pollwq               | 1          |
|               | io_uring/io-wq.c                    | io_wq_max_workers                | 2          |
|               | io_uring/rsrc.c                     | io_sqe_files_unregister          | 1          |
|               | include/linux/fs.h                  | get_file                         | 1          |
|               | io_uring/tctx.c                     | io_ringfd_unregister             | 1          |
|               | drivers/gpu/drm/amd/display/include/vector.h | struct_size                  | 1          |
|               | arch/powerpc/boot/page.h            | PAGE_ALIGN                       | 2          |
|               | io_uring/rsrc.c                     | io_register_rsrc                 | 2          |
|               | io_uring/cancel.c                   | io_sync_cancel                   | 1          |
|               | io_uring/eventfd.c                  | io_eventfd_register              | 2          |
|               | io_uring/register.c                 | io_parse_restrictions            | 1          |
|               | io_uring/register.c                 | io_register_mem_region           | 1          |
|               | io_uring/rsrc.c                     | io_sqe_buffers_register          | 1          |
|               | drivers/block/aoe/aoenet.c          | __must_hold                      | 1          |
|               | io_uring/register.c                 | swap_old                         | 2          |
|               | io_uring/opdef.c                    | io_uring_op_supported            | 1          |
|               | io_uring/filetable.c                | io_register_file_alloc_range     | 1          |
|               | io_uring/register.c                 | io_register_free_rings           | 5          |
|               | arch/parisc/kernel/firmware.c       | __acquires                       | 1          |
|               | include/linux/mutex.h               | mutex_unlock                     | 9          |
|               | include/linux/cred.h                | get_current_cred                 | 1          |
|               | io_uring/register.c                 | io_uring_register_get_file       | 1          |
|               | include/linux/slab.h                | kfree                            | 2          |
|               | io_uring/rsrc.c                     | io_register_rsrc_update          | 2          |
|               | io_uring/memmap.c                   | io_create_region_mmap_safe       | 3          |
|               | drivers/gpu/drm/imagination/pvr_stream.h | array_size                    | 3          |
|               | io_uring/zcrx.c                     | io_register_zcrx_ifq             | 1          |
|               | arch/sparc/include/asm/compat.h     | in_compat_syscall                | 1          |
|               | io_uring/msg_ring.c                 | io_uring_sync_msg_ring           | 1          |
|               | include/linux/atomic/atomic-instrumented.h | atomic_read                  | 1          |
|               | io_uring/kbuf.c                     | io_register_pbuf_ring            | 1          |
|               | include/linux/cpumask.h             | alloc_cpumask_var                | 1          |
|               | io_uring/sqpoll.c                   | io_sq_thread_park                | 1          |
|               | include/asm-generic/rwonce.h        | WRITE_ONCE                       | 12         |
|               | io_uring/register.c                 | io_unregister_iowq_aff           | 1          |
|               | io_uring/memmap.h                   | io_region_is_set                 | 1          |
|               | -                                   | trace_io_uring_register          | 1          |
|               | include/linux/slab.h                | kzalloc                          | 1          |
|               | io_uring/register.c                 | io_probe                         | 1          |
|               | drivers/gpu/drm/msm/disp/dpu1/dpu_crtc.h | spin_lock                     | 1          |
|               | include/linux/err.h                 | ERR_PTR                          | 3          |
|               | include/linux/refcount.h            | refcount_inc                     | 1          |
|               | include/linux/percpu-refcount.h     | percpu_ref_is_dying              | 1          |
|               | io_uring/napi.c                     | io_register_napi                 | 1          |
|               | io_uring/register.c                 | io_unregister_personality        | 1          |
|               | io_uring/tctx.c                     | io_ringfd_register               | 1          |
| register.h    | -                                   | -                                | -          |
| rsrc.c        | io_uring/io_uring.h               | io_ring_submit_unlock          | 4          |
|               | include/linux/refcount.h          | refcount_set                   | 2          |
|               | include/linux/nospec.h            | array_index_nospec             | 3          |
|               | Documentation/scheduler/sched-pelt.c | max                          | 1          |
|               | io_uring/alloc_cache.h            | io_cache_alloc                 | 2          |
|               | io_uring/rsrc.c                   | io_buffer_validate             | 2          |
|               | arch/powerpc/boot/types.h         | min_t                          | 3          |
|               | mm/gup.c                          | unpin_user_page                | 1          |
|               | fs/btrfs/extent_io.h              | folio_shift                    | 1          |
|               | arch/x86/include/asm/kvm-x86-ops.h | BUILD_BUG_ON                  | 1          |
|               | io_uring/alloc_cache.c            | io_alloc_cache_free            | 2          |
|               | include/linux/mm.h                | folio_page_idx                 | 2          |
|               | io_uring/rsrc.c                   | io_estimate_bvec_size          | 1          |
|               | io_uring/io_uring.h               | io_req_set_res                 | 1          |
|               | io_uring/rsrc.c                   | io_alloc_imu                   | 2          |
|               | io_uring/alloc_cache.h            | io_cache_free                  | 3          |
|               | io_uring/rsrc.c                   | io_free_imu                    | 2          |
|               | io_uring/rsrc.c                   | io_kern_bvec_size              | 1          |
|               | include/linux/mutex.h             | mutex_unlock                   | 2          |
|               | io_uring/register.c               | io_uring_register_get_file     | 1          |
|               | io_uring/rsrc.h                   | io_put_rsrc_node               | 2          |
|               | io_uring/rsrc.c                   | io_sqe_buffers_register        | 1          |
|               | lib/iov_iter.c                    | iov_iter_bvec                  | 3          |
|               | io_uring/rsrc.c                   | io_buffer_unmap                | 1          |
|               | io_uring/rsrc.c                   | io_vec_fill_kern_bvec          | 1          |
|               | lib/iov_iter.c                    | iov_iter_advance               | 1          |
|               | io_uring/rsrc.c                   | io_import_fixed                | 1          |
|               | include/linux/compiler.h          | unlikely                       | 14         |
|               | include/linux/slab.h              | kfree                          | 2          |
|               | include/linux/io_uring_types.h    | io_kiocb_to_cmd                | 3          |
|               | drivers/vdpa/mlx5/core/mr.c       | kvfree                         | 4          |
|               | io_uring/rsrc.c                   | io_coalesce_buffer             | 1          |
|               | io_uring/rsrc.h                   | io_reset_rsrc_node             | 2          |
|               | io_uring/rsrc.c                   | headpage_already_acct          | 1          |
|               | include/linux/page-flags.h        | PageCompound                   | 3          |
|               | io_uring/filetable.h              | io_fixed_file_set              | 2          |
|               | include/linux/slab.h              | kvmalloc_array                 | 2          |
|               | io_uring/rsrc.c                   | lock_two_rings                 | 1          |
|               | io_uring/rsrc.h                   | io_req_assign_buf_node         | 1          |
|               | arch/arm64/kvm/ptdump.c           | release                        | 1          |
|               | io_uring/filetable.c              | io_alloc_file_tables           | 1          |
|               | include/linux/refcount.h          | refcount_inc                   | 1          |
|               | include/linux/blk-mq.h            | rq_data_dir                    | 1          |
|               | include/linux/overflow.h          | check_add_overflow             | 7          |
|               | include/linux/kernel.h            | u64_to_user_ptr                | 9          |
|               | io_uring/rsrc.c                   | io_rsrc_data_free              | 3          |
|               | io_uring/rsrc.c                   | io_sqe_buffer_register         | 2          |
|               | include/linux/bvec.h              | bvec_set_page                  | 2          |
|               | io_uring/rsrc.h                   | io_rsrc_node_lookup            | 2          |
|               | io_uring/rsrc.c                   | __io_account_mem               | 1          |
|               | io_uring/rsrc.c                   | validate_fixed_range           | 3          |
|               | include/linux/uaccess.h           | copy_to_user                   | 1          |
|               | io_uring/rsrc.c                   | io_account_mem                 | 1          |
|               | arch/arc/include/asm/arcregs.h    | min                            | 1          |
|               | io_uring/rsrc.h                   | __io_unaccount_mem             | 1          |
|               | include/linux/bvec.h              | bvec_iter_advance              | 1          |
|               | io_uring/filetable.c              | io_free_file_tables            | 1          |
|               | io_uring/io_uring.c               | io_post_aux_cqe                | 1          |
|               | include/asm-generic/rwonce.h      | READ_ONCE                      | 3          |
|               | mm/gup.c                          | unpin_user_pages               | 3          |
|               | include/linux/refcount.h          | refcount_dec_and_test          | 1          |
|               | io_uring/rsrc.c                   | io_vec_free                    | 2          |
|               | io_uring/rsrc.c                   | io_clone_buffers               | 1          |
|               | io_uring/rsrc.c                   | io_check_coalesce_buffer       | 1          |
|               | lib/iov_iter.c                    | iovec_from_user                | 3          |
|               | io_uring/filetable.h              | io_file_bitmap_set             | 2          |
|               | io_uring/filetable.h              | io_slot_file                   | 1          |
|               | io_uring/rsrc.c                   | io_files_update_with_index_alloc | 1        |
|               | include/linux/atomic/atomic-instrumented.h | atomic64_sub           | 1          |
|               | io_uring/rsrc.c                   | io_buffer_account_pin          | 1          |
|               | arch/arm/kernel/atags_compat.c    | page_size                      | 1          |
|               | include/linux/blk-mq.h            | blk_rq_bytes                   | 1          |
|               | include/linux/slab.h              | kvmalloc                       | 1          |
|               | crypto/asymmetric_keys/x509_parser.h | IS_ERR                       | 7          |
|               | io_uring/alloc_cache.c            | io_alloc_cache_init            | 2          |
|               | io_uring/rsrc.c                   | io_rsrc_node_alloc             | 5          |
|               | io_uring/rsrc.c                   | io_sqe_files_unregister        | 1          |
|               | include/linux/lockdep.h           | lockdep_assert_held            | 3          |
|               | io_uring/io_uring.h               | req_set_fail                   | 1          |
|               | include/linux/fortify-string.h    | memchr_inv                     | 1          |
|               | include/linux/atomic/atomic-instrumented.h | atomic_long_read         | 1          |
|               | io_uring/rsrc.c                   | io_vec_fill_bvec               | 1          |
|               | io_uring/rsrc.c                   | iov_kern_bvec_size             | 1          |
|               | include/linux/slab.h              | kmalloc_array                  | 1          |
|               | arch/alpha/include/asm/string.h   | memset                         | 3          |
|               | include/linux/io_uring_types.h    | cmd_to_io_kiocb                | 2          |
|               | include/linux/page-flags.h        | page_folio                     | 3          |
|               | io_uring/rsrc.c                   | io_unaccount_mem               | 1          |
|               | include/linux/mm.h                | folio_nr_pages                 | 1          |
|               | io_uring/rsrc.c                   | __io_sqe_buffers_update        | 1          |
|               | io_uring/filetable.h              | io_file_table_set_alloc_range  | 2          |
|               | arch/arm64/kernel/pi/relacheck.c  | swap                           | 1          |
|               | include/linux/bvec.h              | for_each_mp_bvec               | 1          |
|               | include/linux/err.h               | ERR_PTR                        | 2          |
|               | include/linux/blk-mq.h            | blk_rq_nr_phys_segments        | 1          |
|               | include/linux/overflow.h          | struct_size_t                  | 2          |
|               | io_uring/rsrc.c                   | io_sqe_buffers_unregister      | 1          |
|               | include/linux/mutex.h             | mutex_lock_nested              | 1          |
|               | fs/btrfs/extent_io.h              | folio_size                     | 1          |
|               | include/linux/err.h               | PTR_ERR                        | 7          |
|               | include/linux/mm_types.h          | compound_head                  | 4          |
|               | io_uring/filetable.h              | io_file_bitmap_clear           | 1          |
|               | io_uring/rsrc.c                   | io_vec_realloc                 | 2          |
|               | io_uring/io_uring.h               | io_ring_submit_lock            | 4          |
|               | io_uring/rsrc.c                   | io_find_buf_node               | 2          |
|               | io_uring/memmap.c                 | io_pin_pages                   | 1          |
|               | io_uring/rsrc.c                   | io_rsrc_data_alloc             | 2          |
|               | arch/parisc/include/asm/processor.h | rlimit                        | 2          |
|               | io_uring/rsrc.c                   | __io_register_rsrc_update      | 3          |
|               | io_uring/openclose.c              | __io_close_fixed               | 1          |
|               | include/linux/atomic/atomic-instrumented.h | atomic_long_try_cmpxchg   | 1          |
|               | io_uring/rsrc.c                   | io_sqe_files_register          | 1          |
|               | include/asm-generic/bug.h         | WARN_ON_ONCE                   | 3          |
|               | io_uring/rsrc.c                   | __io_sqe_files_update          | 1          |
|               | arch/alpha/kernel/osf_sys.c       | fget                           | 3          |
|               | include/linux/io_uring.h          | io_is_uring_fops               | 2          |
|               | include/linux/atomic/atomic-instrumented.h | atomic64_add               | 1          |
|               | arch/alpha/include/asm/string.h   | memcpy                         | 1          |
|               | include/linux/uaccess.h           | copy_from_user                 | 11         |
|               | include/linux/blk-mq.h            | rq_for_each_bvec               | 1          |
|               | io_uring/filetable.c              | io_fixed_fd_install            | 1          |
|               | include/linux/mutex.h             | mutex_lock                     | 1          |
|               | io_uring/io_uring.h               | io_is_compat                   | 1          |
|               | fs/file_table.c                   | fput                           | 6          |
| rsrc.h        | include/linux/nospec.h            | array_index_nospec             | 1          |
|               | arch/arm/include/asm/uaccess-asm.h | IS_ENABLED                    | 1          |
|               | io_uring/rsrc.h                   | io_req_assign_rsrc_node        | 1          |
|               | io_uring/rsrc.c                   | io_free_rsrc_node              | 1          |
|               | include/linux/lockdep.h           | lockdep_assert_held            | 1          |
|               | io_uring/rsrc.h                   | io_put_rsrc_node               | 3          |
|               | include/linux/atomic/atomic-instrumented.h | atomic_long_sub           | 1          |
|               | io_uring/rsrc.c                   | io_vec_free                     | 2          |
| rw.c          | io_uring/rw.c                     | io_import_rw_buffer             | 2         |
|               | block/fops.c                      | iopoll                          | 1         |
|               | lib/iov_iter.c                    | iov_iter_advance                | 2         |
|               | include/linux/fs.h                | kiocb_end_write                 | 1         |
|               | io_uring/rw.c                     | io_iov_buffer_select_prep       | 1         |
|               | include/linux/timekeeping.h       | ktime_get_ns                    | 2         |
|               | io_uring/rw.c                     | __io_import_rw_buffer           | 1         |
|               | io_uring/rw.c                     | kiocb_done                      | 2         |
|               | include/uapi/linux/stat.          | S_ISBLK                         | 2         |
|               | io_uring/slist.h                  | wq_list_for_each_resume         | 1         |
|               | include/linux/fs.h                | kiocb_set_rw_flags              | 1         |
|               | io_uring/rw.c                     | io_file_supports_nowait         | 2         |
|               | include/linux/poll.h              | vfs_poll                        | 1         |
|               | io_uring/rw.c                     | io_init_rw_fixed                | 2         |
|               | io_uring/rw.c                     | io_kiocb_update_pos             | 2         |
|               | io_uring/rw.c                     | io_uring_hybrid_poll            | 1         |
|               | io_uring/rw.c                     | io_req_end_write                | 4         |
|               | io_uring/rw.c                     | io_rw_recycle                   | 2         |
|               | include/linux/uio.h               | iov_iter_is_bvec                | 2         |
|               | arch/arm/mach-rpc/ecard.c         | complete                        | 1         |
|               | drivers/nvme/host/core.c          | uring_cmd_iopoll                | 1         |
|               | arch/alpha/kernel/perf_event.c    | read                            | 1         |
|               | include/linux/uio.h               | iter_iov_addr                   | 1         |
|               | io_uring/rw.c                     | need_complete_io                | 2         |
|               | io_uring/io_uring.h               | req_set_fail                    | 2         |
|               | io_uring/rw.c                     | io_rw_init_file                 | 2         |
|               | io_uring/slist.h                  | wq_list_cut                     | 1         |
|               | io_uring/rw.c                     | io_rw_done                      | 1         |
|               | io_uring/io_uring.h               | io_uring_alloc_async_data       | 1         |
|               | include/linux/io_uring_types.h    | cmd_to_io_kiocb                 | 3         |
|               | io_uring/io_uring.c               | __io_submit_flush_completions   | 1         |
|               | io_uring/io_uring.c               | io_req_post_cqe                 | 1         |
|               | io_uring/io_uring.c               | io_file_get_flags               | 1         |
|               | include/uapi/linux/stat.h         | S_ISREG                         | 1         |
|               | io_uring/io_uring.h               | req_has_async_data              | 1         |
|               | io_uring/rw.c                     | io_rw_do_import                 | 1         |
|               | io_uring/rw.c                     | io_uring_classic_poll           | 2         |
|               | include/asm-generic/barrier.h     | smp_load_acquire                | 1         |
|               | include/linux/blk-mq.h            | rq_list_empty                   | 2         |
|               | io_uring/kbuf.c                   | io_buffer_select                | 1         |
|               | kernel/time/hrtimer.c             | hrtimer_sleeper_start_expires   | 1         |
|               | io_uring/rw.c                     | io_prep_rw_pi                   | 1         |
|               | io_uring/rw.c                     | __io_prep_rw                    | 6         |
|               | kernel/sched/core.c               | io_schedule                     | 1         |
|               | include/linux/blkdev.h            | DEFINE_IO_COMP_BATCH            | 1         |
|               |                                   | trace_io_uring_short_write      | 1         |
|               | io_uring/rw.c                     | io_import_vec                   | 1         |
|               | io_uring/rw.c                     | io_meta_save_state              | 1         |
|               | io_uring/rw.c                     | io_iter_do_read                 | 2         |
|               | include/linux/fsnotify.h          | fsnotify_access                 | 1         |
|               | io_uring/io-wq.h                  | io_wq_current_is_worker         | 1         |
|               | include/linux/slab.h              | kfree                           | 1         |
|               | io_uring/rw.c                     | io_fixup_rw_res                 | 4         |
|               | io_uring/rw.c                     | io_kiocb_ppos                   | 1         |
|               | drivers/gpu/drm/radeon/mkregtable.c | INIT_LIST_HEAD                | 1         |
|               | drivers/media/i2c/adv748x/adv748x.h | io_read                       | 1         |
|               | include/linux/fs.h                | file_inode                      | 3         |
|               | io_uring/rsrc.c                   | io_vec_free                     | 2         |
|               | kernel/time/hrtimer.c             | hrtimer_setup_sleeper_on_stack  | 1         |
|               | include/linux/pagemap.h           | wake_page_match                 | 1         |
|               | io_uring/slist.h                  | wq_list_for_each                | 1         |
|               | arch/alpha/kernel/core_cia.c      | write                           | 1         |
|               | lib/iov_iter.c                    | import_ubuf                     | 2         |
|               | lib/iov_iter.c                    | iov_iter_restore                | 5         |
|               | include/linux/uaccess.h           | copy_from_user                  | 3         |
|               | io_uring/rw.c                     | io_rw_prep_reg_vec              | 2         |
|               | io_uring/rw.c                     | io_hybrid_iopoll_delay          | 1         |
|               | drivers/gpu/drm/radeon/mkregtable.c | container_of                  | 5         |
|               | io_uring/rw.c                     | io_rw_should_retry              | 1         |
|               | io_uring/kbuf.h                   | io_kbuf_recycle                 | 2         |
|               | io_uring/io_uring.h               | io_is_compat                    | 2         |
|               | io_uring/rw.c                     | io_prep_rwv                     | 2         |
|               | io_uring/rw.c                     | io_req_rw_cleanup               | 4         |
|               | io_uring/io_uring.h               | io_req_set_res                  | 5         |
|               | io_uring/rw.c                     | __io_read                       | 2         |
|               | arch/s390/hypfs/inode.c           | write_iter                      | 1         |
|               | io_uring/rsrc.c                   | io_import_reg_vec               | 1         |
|               | include/linux/percpu-refcount.h   | percpu_ref_is_dying             | 1         |
|               | arch/s390/hypfs/inode.c           | read_iter                       | 1         |
|               | io_uring/rw.c                     | io_prep_rw                      | 3         |
|               | include/linux/compiler.h          | likely                          | 2         |
|               | include/linux/list.h              | list_del_init                   | 1         |
|               | include/linux/fs.h                | __sb_writers_release            | 1         |
|               | include/asm-generic/barrier.h     | smp_store_release               | 1         |
|               | kernel/time/hrtimer.c             | hrtimer_cancel                  | 1         |
|               | io_uring/io_uring.c               | __io_req_task_work_add          | 1         |
|               | include/asm-generic/rwonce.h      | READ_ONCE                       | 10        |
|               | io_uring/rw.c                     | loop_rw_iter                    | 2         |
|               | io_uring/rw.c                     | __io_complete_rw_common         | 2         |
|               | include/linux/uio.h               | iter_iov_len                    | 1         |
|               | io_uring/rw.c                     | io_rw_alloc_async               | 1         |
|               | lib/iov_iter.c                    | __import_iovec                  | 1         |
|               | include/linux/ktime.h             | ktime_set                       | 1         |
|               | include/linux/sched.h             | set_current_state               | 1         |
|               | include/linux/fsnotify.h          | fsnotify_modify                 | 1         |
|               | io_uring/slist.h                  | wq_list_empty                   | 1         |
|               | include/linux/compiler.h          | unlikely                        | 28        |
|               | io_uring/io_uring.h               | io_file_can_poll                | 4         |
|               | include/linux/fs.h                | kiocb_start_write               | 1         |
|               | io_uring/rsrc.c                   | io_prep_reg_iovec               | 1         |
|               | io_uring/rw.c                     | io_complete_rw                  | 1         |
|               | io_uring/rw.c                     | io_rw_should_reissue            | 2         |
|               | io_uring/alloc_cache.h            | io_alloc_cache_put              | 1         |
|               | include/linux/lockdep.h           | lockdep_assert_held             | 1         |
|               | include/asm-generic/bug.h         | WARN_ON_ONCE                    | 1         |
|               | include/linux/hrtimer.h           | destroy_hrtimer_on_stack        | 1         |
|               | include/linux/sched.h             | __set_current_state             | 1         |
|               | include/linux/io_uring_types.h    | io_kiocb_to_cmd                 | 22        |
|               | include/linux/uio.h               | iov_iter_count                  | 6         |
|               | include/linux/uio.h               | iter_is_ubuf                    | 1         |
|               | io_uring/rw.c                     | io_complete_rw_iopoll           | 1         |
|               | fs/direct-io.c                    | dio_complete                    | 1         |
|               | io_uring/rsrc.h                   | io_vec_reset_iovec              | 1         |
|               | fs/read_write.c                   | rw_verify_area                  | 2         |
|               | io_uring/io_uring.c               | io_req_task_complete            | 1         |
|               | io_uring/rsrc.h                   | io_alloc_cache_vec_kasan        | 1         |
|               | io_uring/rw.c                     | io_kiocb_start_write            | 1         |
|               | include/linux/ioprio.h            | get_current_ioprio              | 1         |
|               | drivers/media/i2c/adv748x/adv748x.h | io_write                      | 1         |
|               | include/linux/uio.h               | iov_iter_save_state             | 6         |
|               | io_uring/rw.c                     | io_rw_import_reg_vec            | 2         |
|               | block/ioprio.c                    | ioprio_check_cap                | 1         |
|               | io_uring/io_uring.c               | io_req_task_queue               | 1         |
|               | io_uring/rw.c                     | io_req_io_end                   | 2         |
|               | include/linux/hrtimer.h           | hrtimer_set_expires             | 1         |
|               | io_uring/kbuf.h                   | io_put_kbuf                     | 5         |
|               | io_uring/rw.c                     | io_meta_restore                 | 3         |
|               | io_uring/rsrc.c                   | io_import_reg_buf               | 1         |
|               | include/linux/fs.h                | sb_start_write_trylock          | 1         |
|               | io_uring/kbuf.h                   | io_do_buffer_select             | 3         |
|               | io_uring/poll.h                   | io_poll_multishot_retry         | 1         |
|               | io_uring/rw.c                     | io_iov_compat_buffer_select_prep   | 1      |
|               | include/linux/kernel.h            | u64_to_user_ptr                 | 7         |
| rw.h          |                                   |                                 |           |
| slist.h       | io_uring/slist.h                  | INIT_WQ_LIST                    | 1         |
|               | include/asm-generic/rwonce.h      | READ_ONCE                       | 1         |
|               | io_uring/slist.h                  | wq_list_cut                     | 1         |
|               | include/asm-generic/rwonce.h      | WRITE_ONCE                      | 3         |
|               | drivers/gpu/drm/radeon/mkregtable.c| container_of                   | 1         |
|               | io_uring/slist.h                  | __wq_list_splice                | 1         |
|               | io_uring/slist.h                  | wq_list_empty                   | 1         |
| splice.c      | io_uring/io_uring.h               | req_set_fail                    | 2         |
|               | io_uring/filetable.h              | io_slot_file                    | 1          |
|               | fs/file_table.c                   | fput                            | 2          |
|               | io_uring/io_uring.h               | io_req_set_res                  | 2          |
|               | io_uring/rsrc.h                   | io_put_rsrc_node                | 1          |
|               | io_uring/splice.c                 | io_splice_get_file              | 2          |
|               | io_uring/io_uring.h               | io_ring_submit_unlock           | 1          |
|               | io_uring/splice.c                 | __io_splice_prep                | 2          |
|               | fs/splice.c                       | do_splice                       | 1          |
|               | fs/splice.c                       | do_tee                          | 1          |
|               | include/asm-generic/rwonce.h      | READ_ONCE                       | 6          |
|               | include/linux/io_uring_types.h    | io_kiocb_to_cmd                 | 6          |
|               | include/asm-generic/bug.h         | WARN_ON_ONCE                    | 2          |
|               | io_uring/rsrc.h                   | io_rsrc_node_lookup             | 1          |
|               | io_uring/io_uring.h               | io_ring_submit_lock             | 1          |
|               | include/linux/compiler.h          | unlikely                        | 1          |
|               | io_uring/io_uring.c               | io_file_get_normal              | 1          |
| opdef.h       | -                                 | -                               | -          |
| sqpoll.c      | io_uring/io_uring.c               | io_uring_cancel_generic         | 1          |
|               | include/linux/refcount.h          | refcount_set                    | 1          |
|               | include/linux/jiffies.h           | msecs_to_jiffies                | 1          |
|               | include/asm-generic/bug.h         | WARN_ON_ONCE                    | 5          |
|               | include/linux/cred.h              | current_cred                    | 1          |
|               | include/linux/atomic/atomic-instrumented.h| atomic_read              | 2          |
|               | include/linux/cpumask.h           | free_cpumask_var                | 2          |
|               | include/linux/cred.h                     | revert_creds             | 1          |
|               | drivers/gpu/drm/radeon/mkregtable.c      | INIT_LIST_HEAD           | 1          |
|               | io_uring/io-wq.c                         | io_wq_cpu_affinity       | 1          |
|               | io_uring/sqpoll.c                        | io_sq_thread_stop        | 1          |
|               | include/linux/cred.h                     | get_current_cred         | 1          |
|               | io_uring/sqpoll.c                        | io_attach_sq_data        | 1          |
|               | include/linux/audit.h                    | audit_uring_entry        | 1          |
|               | include/linux/percpu-refcount.h          | percpu_ref_is_dying      | 1          |
|               | io_uring/napi.c                          | io_napi_sqpoll_busy_poll | 1          |
|               | include/linux/mutex.h                    | mutex_init               | 1          |
|               | include/linux/wait.h                     | wq_has_sleeper           | 1          |
|               | arch/alpha/include/asm/bitops.h          | clear_bit                | 1          |
|               | include/linux/compiler.h                 | data_race                | 1          |
|               | io_uring/sqpoll.c                        | io_sq_thread_finish      | 1          |
|               | include/linux/mutex.h                    | mutex_lock               | 8          |
|               | drivers/acpi/acpica/utprint.c           | snprintf                  | 1          |
|               | include/linux/compiler.h                 | likely                   | 1          |
|               | io_uring/sqpoll.c                        | io_get_sq_data           | 1          |
|               | io_uring/sqpoll.c                        | io_sq_tw                 | 2          |
|               | io_uring/sqpoll.c                        | io_sq_update_worktime            | 1          |
|               | include/linux/refcount.h                 | refcount_dec_and_test            | 1          |
|               | io_uring/io_uring.h                      | io_sqring_full                   | 2          |
|                     | kernel/task_work.c                       | task_work_run                    | 1          |
|                     | include/asm-generic/rwonce.h              | READ_ONCE                        | 1          |
|                     | include/linux/atomic/atomic-instrumented.h| atomic_set                       | 1          |
|                     | drivers/gpu/drm/sti/sti_hdmi.h           | wait_event                        | 1          |
|                     | io_uring/sqpoll.c                        | io_sq_thread_unpark              | 3          |
|                     | include/linux/io_uring.h                 | io_is_uring_fops                 | 2          |
|                     | include/linux/cpumask.h                  | cpu_online                       | 1          |
|                     | include/linux/wait.h                     | DEFINE_WAIT                      | 2          |
|                     | drivers/gpu/drm/radeon/mkregtable.c      | list_for_each_entry              | 6          |
|                     | io_uring/sqpoll.c                        | __io_sq_thread                   | 1          |
|                     | io_uring/io_uring.c                      | io_submit_sqes                   | 1          |
|                     | include/linux/atomic/atomic-instrumented.h| atomic_andnot                    | 1          |
|                     | include/linux/atomic/atomic-instrumented.h| atomic_dec_return                | 1          |
|                     | drivers/i2c/busses/i2c-pca-isa.c         | wait_for_completion              | 1          |
|                     | arch/x86/boot/bitops.h                  | test_bit                         | 3          |
|                     | include/linux/kernel.h                   | do_exit                          | 1          |
|                     | include/asm-generic/barrier.h            | smp_mb__after_atomic             | 1          |
|                     | include/linux/llist.h                    | llist_empty                      | 1          |
|                     | kernel/sched/core.c                     | wake_up_process                  | 2          |
|                     | io_uring/slist.h                         | wq_list_empty                    | 4          |
|                     | io_uring/sqpoll.c                        | io_put_sq_data                   | 1          |
|                     | include/linux/cleanup.h                  | CLASS                            | 2          |
|                     | arch/alpha/include/asm/smp.h             | raw_smp_processor_id             | 4          |
|                     | include/linux/cpumask.h                  | alloc_cpumask_var                | 1          |
|                     | kernel/sched/wait.c                     | finish_wait                      | 2          |
|                     | include/linux/sched/signal.h            | signal_pending                   | 4          |
|                     | include/linux/wait.h                     | wake_up                          | 2          |
|                     | include/linux/mutex.h                    | mutex_unlock                     | 8          |
|                     | include/linux/sched.h                    | set_cpus_allowed_ptr             | 2          |
|                     | include/linux/task_work.h               | task_work_pending                | 1          |
|                     | arch/parisc/kernel/firmware.c           | __acquires                       | 1          |
|                     | io_uring/io_uring.c                      | io_handle_tw_list                | 1          |
|                     | include/linux/err.h                      | ERR_PTR                          | 5          |
|                     | include/linux/wait.h                     | init_waitqueue_head              | 1          |
|                     | include/linux/slab.h                     | kfree                            | 1          |
|                     | include/linux/sched/task.h              | get_task_struct                  | 1          |
|                     | io_uring/napi.h                          | io_napi                          | 1          |
|                     | arch/arm/mach-rpc/ecard.c               | complete                         | 2          |
|                     | crypto/asymmetric_keys/x509_parser.h    | IS_ERR                           | 3          |
|                     | include/linux/security.h                | security_uring_sqpoll            | 1          |
|                     | include/linux/list.h                    | list_del_init                    | 1          |
|                     | io_uring/io_uring.c                     | tctx_task_work_run               | 1          |
|                     | arch/alpha/include/asm/bitops.h          | set_bit                          | 3          |
|                     | include/linux/cpumask.h                  | cpumask_of                       | 1          |
|                     | include/linux/compiler.h                | unlikely                         | 1          |
|                     | io_uring/tctx.c                          | io_uring_alloc_task_context      | 1          |
|                     | include/linux/sched.h                    | cond_resched                     | 1          |
|                     | arch/parisc/kernel/firmware.c           | __releases                       | 1          |
|                     | kernel/sched/core.c                     | wake_up_new_task                 | 1          |
|                     | include/linux/list.h                    | list_is_singular                 | 1          |
|                     | include/linux/jiffies.h                 | time_after                       | 1          |
|                     | drivers/firmware/efi/libstub/efistub.h  | schedule                         | 2          |
|                     | include/linux/list.h                    | list_add                         | 1          |
|                     | io_uring/rw.c                            | io_do_iopoll                     | 1          |
|                     | include/linux/atomic/atomic-instrumented.h| atomic_inc                       | 1          |
|                     | include/linux/cpuset.h                   | cpuset_cpus_allowed              | 1          |
|                     | include/linux/audit.h                   | audit_uring_exit                 | 1          |
|                     | io_uring/sqpoll.c                        | io_sq_tw_pending                 | 1          |
|                     | io_uring/sqpoll.c                        | io_sqd_handle_event              | 1          |
|                     | io_uring/io_uring.h                      | io_run_task_work                 | 1          |
|                     | io_uring/sqpoll.c                        | io_sqd_events_pending            | 2          |
|                     | include/linux/atomic/atomic-instrumented.h| atomic_or                        | 2          |
|                     | include/linux/sched.h                    | set_task_comm                    | 1          |
|                     | drivers/target/target_core_file.h       | fd_file                          | 3          |
|                     | drivers/bluetooth/hci_nokia.c           | init_completion                  | 1          |
|                     | include/linux/err.h                     | PTR_ERR                          | 3          |
|                     | io_uring/sqpoll.c                       | io_sq_thread_park                | 3          |
|                     | kernel/sys.c                            | getrusage                        | 2          |
|                     | arch/arm64/include/asm/thread_info.h    | need_resched                     | 1          |
|                     | kernel/fork.c                           | create_io_thread                 | 1          |
|                     | include/linux/slab.h                    | kzalloc                          | 1          |
|                     | kernel/sched/wait.c                     | prepare_to_wait                  | 2          |
|                     | include/linux/cred.h                    | override_creds                   | 1          |
|                     | include/linux/sched/task.h              | put_task_struct                  | 2          |
|                     | include/linux/file.h                    | fd_empty                         | 2          |
|                     | io_uring/sqpoll.c                        | io_sqd_update_thread_idle        | 2          |
|                     | Documentation/scheduler/sched-pelt.c    | max                              | 1          |
|                     | include/linux/refcount.h                | refcount_inc                     | 1          |
|                     | include/linux/cpumask.h                 | cpumask_test_cpu                 | 1          |
|                     | io_uring/io_uring.h                     | io_sqring_entries                | 2          |
|                     | kernel/signal.c                         | get_signal                       | 1          |
| sqpoll.h       | -                                   | -                                 | -          |

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


//Danar

### statx.c

| Source  | Library                              | Function Utilized | Times Used |
|---------|--------------------------------------|-------------------|------------|
| statx.c | fs/stat.c                            | do_statx          | 1          |
|         | fs/namei.c                           | getname_uflags    | 1          |
|         | include/linux/io_uring_types.h       | io_kiocb_to_cmd   | 3          |
|         | io_uring/io_uring.h                  | io_req_set_res    | 1          |
|         | crypto/asymmetric_keys/x509_parser.h | IS_ERR            | 1          |
|         | include/linux/err.h                  | PTR_ERR           | 1          |
|         | fs/namei.c                           | putname           | 1          |
|         | include/asm-generic/rwonce.h         | READ_ONCE         | 5          |
|         | include/linux/kernel.h               | u64_to_user_ptr   | 2          |
|         | include/asm-generic/bug.h            | WARN_ON_ONCE      | 1          |

### statx.h

| Source | Library | Function Utilized | Times Used |
|--------|---------|-------------------|------------|

### sync.c

| Source | Library                        | Function Utilized | Times Used |
|--------|--------------------------------|-------------------|------------|
| sync.c | include/linux/fsnotify.h       | fsnotify_modify   | 1          |
|        | include/linux/io_uring_types.h | io_kiocb_to_cmd   | 6          |
|        | io_uring/io_uring.h            | io_req_set_res    | 3          |
|        | include/asm-generic/rwonce.h   | READ_ONCE         | 9          |
|        | fs/sync.c                      | sync_file_range   | 1          |
|        | include/linux/compiler.h       | unlikely          | 3          |
|        | fs/open.c                      | vfs_fallocate     | 1          |
|        | fs/sync.c                      | vfs_fsync_range   | 1          |
|        | include/asm-generic/bug.h      | WARN_ON_ONCE      | 3          |

### sync.h

| Source | Library | Function Utilized | Times Used |
|--------|---------|-------------------|------------|

### tctx.c

| Source | Library                                    | Function Utilized           | Times Used |
|--------|--------------------------------------------|-----------------------------|------------|
| tctx.c | include/linux/nospec.h                     | array_index_nospec          | 2          |
|        | include/linux/atomic/atomic-instrumented.h | atomic_set                  | 2          |
|        | include/linux/sched.h                      | cond_resched                | 1          | 
|        | include/linux/uaccess.h                    | copy_from_user              | 2          |
|        | include/linux/uaccess.h                    | copy_to_user                | 1          |
|        | include/linux/err.h                        | ERR_PTR                     | 1          |
|        | arch/alpha/kernel/osf_sys.c                | fget                        | 1          |
|        | fs/file_table.c                            | fput                        | 5          |
|        | include/linux/llist.h                      | init_llist_head             | 1          |
|        | include/linux/task_work.h                  | init_task_work              | 1          |
|        | include/linux/wait.h                       | init_waitqueue_head         | 2          |
|        | io_uring/tctx.c                            | io_init_wq_offload          | 1          |
|        | include/linux/io_uring.h                   | io_is_uring_fops            | 1          |
|        | io_uring/tctx.c                            | io_ring_add_registered_fd   | 1          |
|        | io_uring/tctx.c                            | io_ring_add_registered_file | 1          |
|        | io_uring/tctx.c                            | __io_uring_add_tctx_node    | 2          |
|        | io_uring/tctx.c                            | io_uring_alloc_task_context | 1          |
|        | io_uring/tctx.c                            | io_uring_del_tctx_node      | 1          |
|        | io_uring/io-wq.c                           | io_wq_create                | 1          |
|        | io_uring/io-wq.c                           | io_wq_max_workers           | 1          |
|        | io_uring/io-wq.c                           | io_wq_put_and_exit          | 1          |
|        | crypto/asymmetric_keys/x509_parser.h       | IS_ERR                      | 1          |
|        | include/linux/slab.h                       | kfree                       | 5          |
|        | include/linux/slab.h                       | kmalloc                     | 1          |
|        | include/linux/slab.h                       | kzalloc                     | 2          |
|        | include/linux/list.h                       | list_add                    | 1          |
|        | include/linux/list.h                       | list_del                    | 1          |
|        | drivers/net/wireless/ath/ath11k/hal.h      | list_empty                  | 1          |
|        | arch/arc/include/asm/arcregs.h             | min                         | 1          |
|        | include/linux/mutex.h                      | mutex_lock                  | 4          |
|        | include/linux/mutex.h                      | mutex_unlock                | 5          |
|        | drivers/infiniband/hw/hfi1/affinity.h      | num_online_cpus             | 1          |
|        | include/linux/percpu_counter.h             | percpu_counter_destroy      | 2          |
|        | include/linux/percpu_counter.h             | percpu_counter_init         | 1          |
|        | include/linux/err.h                        | PTR_ERR                     | 1          |
|        | include/linux/refcount.h                   | refcount_set                | 1          |
|        | include/linux/compiler.h                   | unlikely                    | 4          |
|        | include/asm-generic/bug.h                  | WARN_ON_ONCE                | 5          |
|        | lib/xarray.c                               | xa_erase                    | 1          |
|        | include/linux/xarray.h                     | xa_err                      | 1          |
|        | include/linux/xarray.h                     | xa_for_each                 | 2          |
|        | include/linux/xarray.h                     | xa_init                     | 1          |
|        | lib/xarray.c                               | xa_load                     | 1          |
|        | lib/xarray.c                               | xa_store                    | 1          |

### tctx.h

| Source | Library                  | Function Utilized                    | Times Used |
|--------|--------------------------|--------------------------------------|------------|
| tctx.h | io_uring/tctx.c          | __io_uring_add_tctx_node_from_submit | 1          |
|        | include/linux/compiler.h | likely                               | 1          |

### timeout.c

| Source    | Library                                    | Function Utilized           | Times Used |
|-----------|--------------------------------------------|-----------------------------|------------|
| timeout.c | include/linux/atomic/atomic-instrumented.h | atomic_read                 | 4          |
|           | include/linux/atomic/atomic-instrumented.h | atomic_set                  | 2          |
|           | include/linux/io_uring_types.h             | cmd_to_io_kiocb             | 6          |
|           | drivers/gpu/drm/radeon/mkregtable.c        | container_of                | 2          |
|           | include/linux/compiler.h                   | data_race                   | 1          |
|           | include/linux/err.h                        | ERR_PTR                     | 2          |
|           | kernel/time/time.c                         | get_timespec64              | 2          |
|           | kernel/time/hrtimer.c                      | hrtimer_setup               | 4          |
|           | include/linux/hrtimer.h                    | hrtimer_start               | 5          |
|           | kernel/time/hrtimer.c                      | hrtimer_try_to_cancel       | 4          |
|           | include/asm-generic/bitops/const_hweight.h | hweight32                   | 2          |
|           | drivers/gpu/drm/radeon/mkregtable.c        | INIT_LIST_HEAD              | 1          |
|           | io_uring/cancel.c                          | io_cancel_req_match         | 1          |
|           | io_uring/timeout.h                         | io_disarm_linked_timeout    | 1          |
|           | io_uring/timeout.c                         | io_fail_links               | 1          |
|           | io_uring/timeout.c                         | io_flush_killed_timeouts    | 2          |
|           | io_uring/io_uring.h                        | io_for_each_link            | 1          |
|           | io_uring/io_uring.c                        | io_free_req                 | 1          |
|           | io_uring/timeout.c                         | io_is_timeout_noseq         | 3          |
|           | io_uring/timeout.c                         | io_kill_timeout             | 2          |
|           | include/linux/io_uring_types.h             | io_kiocb_to_cmd             | 14         |
|           | io_uring/timeout.c                         | io_linked_timeout_update    | 1          |
|           | io_uring/timeout.c                         | io_match_task               | 1          |
|           | io_uring/timeout.c                         | io_put_req                  | 2          |
|           | io_uring/io_uring.c                        | io_queue_next               | 1          |
|           | io_uring/timeout.c                         | io_remove_next_linked       | 3          |
|           | io_uring/io_uring.c                        | io_req_post_cqe             | 1          |
|           | io_uring/io_uring.h                        | io_req_queue_tw_complete    | 3          |
|           | io_uring/io_uring.h                        | io_req_set_res              | 5          |
|           | io_uring/io_uring.c                        | io_req_task_complete        | 4          |
|           | io_uring/io_uring.c                        | io_req_task_queue_fail      | 1          |
|           | io_uring/io_uring.h                        | io_req_task_work_add        | 3          |
|           | io_uring/io_uring.h                        | io_should_terminate_tw      | 1          |
|           | io_uring/timeout.c                         | io_timeout_cancel           | 1          |
|           | io_uring/timeout.c                         | io_timeout_extract          | 2          |
|           | io_uring/timeout.c                         | io_timeout_finish           | 1          |
|           | io_uring/timeout.c                         | io_timeout_get_clock        | 4          |
|           | io_uring/timeout.c                         | __io_timeout_prep           | 2          |
|           | io_uring/timeout.c                         | io_timeout_update           | 1          |
|           | io_uring/timeout.c                         | io_translate_timeout_mode   | 2          |
|           | io_uring/cancel.c                          | io_try_cancel               | 1          |
|           | io_uring/io_uring.h                        | io_tw_lock                  | 1          |
|           | io_uring/io_uring.h                        | io_uring_alloc_async_data   | 1          |
|           | crypto/asymmetric_keys/x509_parser.h       | IS_ERR                      | 2          |
|           | include/linux/list.h                       | list_add                    | 2          |
|           | drivers/gpu/drm/radeon/mkregtable.c        | list_add_tail               | 2          |
|           | include/linux/list.h                       | list_del                    | 2          |
|           | include/linux/list.h                       | list_del_init               | 3          |
|           | drivers/net/wireless/ath/ath11k/hal.h      | list_empty                  | 2          |
|           | drivers/block/loop.c                       | list_entry                  | 1          |
|           | include/linux/list.h                       | list_first_entry            | 1          |
|           | drivers/gpu/drm/radeon/mkregtable.c        | list_for_each_entry         | 2          |
|           | include/linux/list.h                       | list_for_each_entry_safe    | 2          |
|           | include/linux/list.h                       | list_for_each_prev          | 1          |
|           | include/linux/list.h                       | LIST_HEAD                   | 2          |
|           | include/linux/list.h                       | list_move_tail              | 1          |
|           | drivers/block/aoe/aoenet.c                 | __must_hold                 | 10         |
|           | include/linux/err.h                        | PTR_ERR                     | 2          |
|           | include/linux/spinlock.h                   | raw_spin_lock_irq           | 8          |
|           | include/linux/spinlock.h                   | raw_spin_lock_irqsave       | 2          |
|           | include/linux/spinlock.h                   | raw_spin_unlock_irq         | 8          |
|           | include/linux/spinlock.h                   | raw_spin_unlock_irqrestore  | 2          |
|           | include/asm-generic/rwonce.h               | READ_ONCE                   | 4          |
|           | io_uring/io_uring.h                        | req_has_async_data          | 1          |
|           | block/blk.h                                | req_ref_inc_not_zero        | 1          |
|           | block/blk.h                                | req_ref_put_and_test        | 1          |
|           | io_uring/io_uring.h                        | req_set_fail                | 3          |
|           | drivers/gpu/drm/msm/disp/dpu1/dpu_crtc.h   | spin_lock                   | 2          |
|           | include/linux/spinlock.h                   | spin_unlock                 | 2          |
|           | include/linux/ktime.h                      | timespec64_to_ktime         | 5          |
|           | unknown                                    | trace_io_uring_fail_link    | 1          |
|           | include/linux/kernel.h                     | u64_to_user_ptr             | 2          |
|           | include/linux/compiler.h                   | unlikely                    | 3          |
|           | include/asm-generic/bug.h                  | WARN_ON_ONCE                | 2          |

### timeout.h

| Source    | Library            | Function Utilized          | Times Used |
|-----------|--------------------|----------------------------|------------|
| timeout.h | io_uring/timeout.c | __io_disarm_linked_timeout | 1          |

### truncate.c

| Source     | Library                        | Function Utilized | Times Used |
|------------|--------------------------------|-------------------|------------|
| truncate.c | fs/open.c                      | do_ftruncate      | 1          |
|            | include/linux/io_uring_types.h | io_kiocb_to_cmd   | 2          |
|            | io_uring/io_uring.h            | io_req_set_res    | 1          |
|            | include/asm-generic/rwonce.h   | READ_ONCE         | 1          |
|            | include/asm-generic/bug.h      | WARN_ON_ONCE      | 1          |

### truncate.h

| Source | Library | Function Utilized | Times Used |
|--------|---------|-------------------|------------|

### uring_cmd.c

| Source      | Library                             | Function Utilized            | Times Used |
|-------------|-------------------------------------|------------------------------|------------|
| uring_cmd.c | arch/x86/include/asm/kvm-x86-ops.h  | BUILD_BUG_ON                 | 1          |
|             | include/linux/io_uring_types.h      | cmd_to_io_kiocb              | 7          |
|             | net/socket.c                        | do_sock_getsockopt           | 1          |
|             | net/socket.c                        | do_sock_setsockopt           | 1          |
|             | include/linux/list.h                | hlist_add_head               | 1          |
|             | include/linux/list.h                | hlist_del                    | 1          |
|             | include/linux/list.h                | hlist_for_each_entry_safe    | 1          |
|             | io_uring/alloc_cache.h              | io_alloc_cache_put           | 1          |
|             | io_uring/rsrc.h                     | io_alloc_cache_vec_kasan     | 1          |
|             | arch/alpha/kernel/rtc.c             | ioctl                        | 2          |
|             | io_uring/rsrc.c                     | io_import_reg_buf            | 1          |
|             | io_uring/rsrc.c                     | io_import_reg_vec            | 1          |
|             | io_uring/io_uring.h                 | io_is_compat                 | 1          |
|             | include/linux/io_uring_types.h      | io_kiocb_to_cmd              | 6          |
|             | io_uring/rsrc.c                     | io_prep_reg_iovec            | 1          |
|             | io_uring/io_uring.h                 | io_req_complete_defer        | 1          |
|             | io_uring/io_uring.c                 | io_req_queue_iowq            | 1          |
|             | io_uring/uring_cmd.c                | io_req_set_cqe32_extra       | 1          |
|             | io_uring/io_uring.h                 | io_req_set_res               | 2          |
|             | io_uring/io_uring.c                 | __io_req_task_work_add       | 1          |
|             | io_uring/io_uring.h                 | io_req_task_work_add         | 1          |
|             | io_uring/uring_cmd.c                | io_req_uring_cleanup         | 3          |
|             | io_uring/io_uring.h                 | io_ring_submit_lock          | 2          |
|             | io_uring/io_uring.h                 | io_ring_submit_unlock        | 2          |
|             | io_uring/io_uring.h                 | io_should_terminate_tw       | 1          |
|             | io_uring/io_uring.h                 | io_submit_flush_completions  | 1          |
|             | io_uring/io_uring.h                 | io_uring_alloc_async_data    | 1          |
|             | io_uring/uring_cmd.c                | io_uring_cmd_del_cancelable  | 1          |
|             | io_uring/uring_cmd.c                | io_uring_cmd_getsockopt      | 1          |
|             | io_uring/uring_cmd.c                | io_uring_cmd_prep_setup      | 1          |
|             | io_uring/uring_cmd.c                | io_uring_cmd_setsockopt      | 1          |
|             | io_uring/rsrc.c                     | io_vec_free                  | 2          |
|             | include/linux/sockptr.h             | KERNEL_SOCKPTR               | 1          |
|             | include/linux/slab.h                | kfree                        | 2          |
|             | include/linux/lockdep.h             | lockdep_assert_held          | 1          |
|             | arch/alpha/include/asm/string.h     | memcpy                       | 1          |
|             | drivers/gpu/drm/radeon/mkregtable.c | offsetof                     | 1          |
|             | include/asm-generic/rwonce.h        | READ_ONCE                    | 12         |
|             | io_uring/io_uring.h                 | req_set_fail                 | 2          |
|             | include/linux/security.h            | security_uring_cmd           | 1          |
|             | include/asm-generic/barrier.h       | smp_store_release            | 1          |
|             | include/linux/io_uring/cmd.h        | task_work_cb                 | 1          |
|             | include/linux/kernel.h              | u64_to_user_ptr              | 2          |
|             | block/fops.c                        | uring_cmd                    | 2          |
|             | io_uring/io_uring.h                 | uring_sqe_size               | 1          |
|             | include/linux/sockptr.h             | USER_SOCKPTR                 | 2          |
|             | include/asm-generic/bug.h           | WARN_ON_ONCE                 | 1          |

### uring_cmd.h

| Source | Library | Function Utilized | Times Used |
|--------|---------|-------------------|------------|

### waitid.c

| Source   | Library                                                   | Function Utilized         | Times Used |
|----------|-----------------------------------------------------------|---------------------------|------------|
| waitid.c | kernel/sched/wait.c                                       | add_wait_queue            | 2          |  
|          | include/linux/atomic/atomic-instrumented.h                | atomic_fetch_inc          | 2          |
|          | include/linux/atomic/atomic-instrumented.h                | atomic_or                 | 1          |
|          | include/linux/atomic/atomic-instrumented.h                | atomic_read               | 2          |
|          | include/linux/atomic/atomic-instrumented.h                | atomic_set                | 1          |
|          | include/linux/atomic/atomic-instrumented.h                | atomic_sub_return         | 1          |
|          | drivers/comedi/drivers/ni_routing/tools/convert_c_to_py.c | BIT                       | 1          |
|          | drivers/gpu/drm/radeon/mkregtable.c                       | container_of              | 2          |
|          | kernel/exit.c                                             | __do_wait                 | 3          |
|          | include/linux/bits.h                                      | GENMASK                   | 1          |
|          | include/linux/list.h                                      | hlist_add_head            | 1          |
|          | include/linux/list.h                                      | hlist_del_init            | 2          |
|          | include/linux/wait.h                                      | init_waitqueue_func_entry | 1          |
|          | io_uring/cancel.c                                         | io_cancel_remove          | 1          |
|          | io_uring/cancel.c                                         | io_cancel_remove_all      | 1          |
|          | io_uring/io_uring.h                                       | io_is_compat              | 1          |
|          | include/linux/io_uring_types.h                            | io_kiocb_to_cmd           | 8          |
|          | io_uring/io_uring.h                                       | io_req_queue_tw_complete  | 1          |
|          | io_uring/io_uring.h                                       | io_req_set_res            | 2          |
|          | io_uring/io_uring.c                                       | io_req_task_complete      | 1          |
|          | io_uring/io_uring.h                                       | io_req_task_work_add      | 2          |
|          | io_uring/io_uring.h                                       | io_ring_submit_lock       | 1          |
|          | io_uring/io_uring.h                                       | io_ring_submit_unlock     | 3          |
|          | io_uring/io_uring.h                                       | io_tw_lock                | 1          |
|          | io_uring/io_uring.h                                       | io_uring_alloc_async_data | 1          |
|          | io_uring/waitid.c                                         | io_waitid_compat_copy_si  | 1          |
|          | io_uring/waitid.c                                         | io_waitid_complete        | 2          |
|          | io_uring/waitid.c                                         | io_waitid_copy_si         | 1          |
|          | io_uring/waitid.c                                         | io_waitid_drop_issue_ref  | 2          |
|          | io_uring/waitid.c                                         | io_waitid_finish          | 2          |
|          | io_uring/waitid.c                                         | io_waitid_free            | 1          |
|          | kernel/exit.c                                             | kernel_waitid_prepare     | 1          |
|          | include/linux/slab.h                                      | kfree                     | 1          |
|          | include/linux/list.h                                      | list_del_init             | 2          |
|          | include/linux/lockdep.h                                   | lockdep_assert_held       | 1          |
|          | kernel/exit.c                                             | pid_child_should_wake     | 1          |
|          | kernel/pid.c                                              | put_pid                   | 1          |
|          | include/asm-generic/rwonce.h                              | READ_ONCE                 | 4          |
|          | kernel/sched/wait.c                                       | remove_wait_queue         | 3          |
|          | io_uring/io_uring.h                                       | req_set_fail              | 2          |
|          | include/linux/spinlock.h                                  | spin_lock_irq             | 1          |
|          | include/linux/spinlock.h                                  | spin_unlock_irq           | 1          |
|          | include/linux/kernel.h                                    | u64_to_user_ptr           | 1          |
|          | include/linux/compiler.h                                  | unlikely                  | 2          |
|          | arch/arm64/include/asm/uaccess.h                          | unsafe_put_user           | 12         |
|          | arch/powerpc/include/asm/uaccess.h                        | user_write_access_begin   | 2          |
|          | arch/powerpc/include/asm/uaccess.h                        | user_write_access_end     | 2          |
|          | include/asm-generic/bug.h                                 | WARN_ON_ONCE              | 1          |

### waitid.h

| Source | Library | Function Utilized | Times Used |
|--------|---------|-------------------|------------|

### xattr.c

| Source  | Library                              | Function Utilized   | Times Used |
|---------|--------------------------------------|---------------------|------------|
| xattr.c | fs/xattr.c                           | file_getxattr       | 1          |
|         | fs/xattr.c                           | filename_getxattr   | 1          |
|         | fs/xattr.c                           | filename_setxattr   | 1          |
|         | fs/xattr.c                           | file_setxattr       | 1          |
|         | crypto/af_alg.c                      | getname             | 2          |
|         | fs/xattr.c                           | import_xattr_name   | 1          |
|         | io_uring/xattr.c                     | __io_getxattr_prep  | 2          |
|         | include/linux/io_uring_types.h       | io_kiocb_to_cmd     | 9          |
|         | io_uring/io_uring.h                  | io_req_set_res      | 1          |
|         | io_uring/xattr.c                     | __io_setxattr_prep  | 2          |
|         | io_uring/xattr.c                     | io_xattr_cleanup    | 1          |
|         | io_uring/xattr.c                     | io_xattr_finish     | 4          |
|         | crypto/asymmetric_keys/x509_parser.h | IS_ERR              | 2          |
|         | include/linux/slab.h                 | kfree               | 3          |
|         | include/linux/slab.h                 | kmalloc             | 2          |
|         | drivers/vdpa/mlx5/core/mr.c          | kvfree              | 1          |
|         | include/linux/err.h                  | PTR_ERR             | 2          |
|         | fs/namei.c                           | putname             | 1          |
|         | include/asm-generic/rwonce.h         | READ_ONCE           | 10         |
|         | fs/xattr.c                           | setxattr_copy       | 1          |
|         | include/linux/kernel.h               | u64_to_user_ptr     | 6          |
|         | include/linux/compiler.h             | unlikely            | 2          |
|         | include/asm-generic/bug.h            | WARN_ON_ONCE        | 4          |

### xattr.h

| Source | Library | Function Utilized | Times Used |
|--------|---------|-------------------|------------|

### zcrx.c

| Source | Library                                             | Function Utilized             | Times Used |
|--------|-----------------------------------------------------|-------------------------------|------------|
| zcrx.c | include/linux/nospec.h                              | array_index_nospec            | 1          |
|        | include/linux/atomic/atomic-instrumented.h          | atomic_dec                    | 1          |
|        | include/linux/atomic/atomic-instrumented.h          | atomic_inc                    | 1          |
|        | include/linux/atomic/atomic-instrumented.h          | atomic_read                   | 2          |
|        | include/linux/atomic/atomic-instrumented.h          | atomic_set                    | 1          |
|        | include/linux/atomic/atomic-instrumented.h          | atomic_xchg                   | 1          |
|        | arch/powerpc/kernel/iommu.c                         | capable                       | 1          |
|        | drivers/gpu/drm/radeon/mkregtable.c                 | container_of                  | 1          |
|        | include/linux/uaccess.h                             | copy_from_user                | 3          |
|        | include/linux/uaccess.h                             | copy_to_user                  | 3          |
|        | include/linux/dma-mapping.h                         | dma_dev_need_sync             | 1          |
|        | include/linux/dma-mapping.h                         | dma_map_page_attrs            | 1          |
|        | drivers/net/ethernet/google/gve/gve.h               | dma_mapping_error             | 1          |
|        | kernel/dma/mapping.c                                | __dma_sync_single_for_device  | 1          |
|        | include/linux/dma-mapping.h                         | dma_unmap_page_attrs          | 2          |
|        | drivers/base/core.c                                 | get_device                    | 1          |
|        | io_uring/zcrx.c                                     | io_allocate_rbuf_ring         | 1          |
|        | io_uring/rsrc.c                                     | io_buffer_validate            | 1          |
|        | io_uring/zcrx.c                                     | io_close_queue                | 2          |
|        | io_uring/memmap.c                                   | io_create_region_mmap_safe    | 1          |
|        | io_uring/io_uring.h                                 | io_defer_get_uncommited_cqe   | 1          |
|        | io_uring/zcrx.c                                     | io_free_rbuf_ring             | 1          |
|        | io_uring/memmap.c                                   | io_free_region                | 1          |
|        | io_uring/zcrx.c                                     | io_get_user_counter           | 4          |
|        | io_uring/memmap.c                                   | io_pin_pages                  | 1          |
|        | io_uring/memmap.h                                   | io_region_get_ptr             | 1          |
|        | io_uring/zcrx.c                                     | io_zcrx_alloc_fallback        | 1          |
|        | io_uring/zcrx.c                                     | io_zcrx_copy_chunk            | 2          |
|        | io_uring/zcrx.c                                     | io_zcrx_copy_frag             | 1          |
|        | io_uring/zcrx.c                                     | io_zcrx_create_area           | 1          |
|        | io_uring/zcrx.c                                     | io_zcrx_drop_netdev           | 2          |
|        | io_uring/zcrx.c                                     | io_zcrx_free_area             | 2          |
|        | io_uring/zcrx.c                                     | __io_zcrx_get_free_niov       | 2          |
|        | io_uring/zcrx.c                                     | io_zcrx_get_niov_uref         | 2          |
|        | io_uring/zcrx.c                                     | io_zcrx_get_rqe               | 1          |
|        | io_uring/zcrx.c                                     | io_zcrx_ifq_alloc             | 1          |
|        | io_uring/zcrx.c                                     | io_zcrx_ifq_free              | 2          |
|        | io_uring/zcrx.c                                     | io_zcrx_iov_page              | 1          |
|        | io_uring/zcrx.c                                     | io_zcrx_iov_to_area           | 4          |
|        | io_uring/zcrx.c                                     | io_zcrx_map_area              | 1          |
|        | io_uring/zcrx.c                                     | io_zcrx_put_niov_uref         | 1          |
|        | io_uring/zcrx.c                                     | io_zcrx_queue_cqe             | 2          |
|        | io_uring/zcrx.c                                     | io_zcrx_recv_frag             | 1          |
|        | io_uring/zcrx.c                                     | io_zcrx_recv_skb              | 1          |
|        | io_uring/zcrx.c                                     | io_zcrx_refill_slow           | 1          |
|        | io_uring/zcrx.c                                     | io_zcrx_return_niov           | 3          |
|        | io_uring/zcrx.c                                     | io_zcrx_return_niov_freelist  | 2          |
|        | io_uring/zcrx.c                                     | io_zcrx_ring_refill           | 1          |
|        | io_uring/zcrx.c                                     | io_zcrx_rqring_entries        | 1          |
|        | io_uring/zcrx.c                                     | io_zcrx_scrub                 | 1          |
|        | io_uring/zcrx.c                                     | io_zcrx_sync_for_device       | 2          |
|        | io_uring/zcrx.c                                     | io_zcrx_tcp_recvmsg           | 1          |
|        | io_uring/zcrx.c                                     | __io_zcrx_unmap_area          | 2          |
|        | io_uring/zcrx.c                                     | io_zcrx_unmap_area            | 1          |
|        | crypto/asymmetric_keys/x509_parser.h                | IS_ERR                        | 1          |
|        | include/linux/slab.h                                | kfree                         | 2          |
|        | include/linux/highmem-internal.h                    | kmap_local_page               | 2          |
|        | include/linux/highmem-internal.h                    | kunmap_local                  | 2          |
|        | drivers/vdpa/mlx5/core/mr.c                         | kvfree                        | 4          |
|        | include/linux/slab.h                                | kvmalloc_array                | 3          |
|        | include/linux/slab.h                                | kzalloc                       | 2          |
|        | include/linux/compiler.h                            | likely                        | 1          |
|        | include/linux/lockdep.h                             | lockdep_assert_held           | 3          |
|        | include/net/sock.h                                  | lock_sock                     | 1          |
|        | include/linux/fortify-string.h                      | memchr_inv                    | 1          |
|        | arch/alpha/include/asm/string.h                     | memcpy                        | 1          |
|        | arch/arc/include/asm/arcregs.h                      | min                           | 1          |
|        | arch/powerpc/boot/types.h                           | min_t                         | 4          |
|        | net/core/dev.c                                      | netdev_get_by_index           | 1          |
|        | include/linux/netdevice.h                           | netdev_put                    | 2          |
|        | include/net/netmem.h                                | net_iov_idx                   | 4          |
|        | include/net/netmem.h                                | net_iov_owner                 | 1          |
|        | include/net/netmem.h                                | net_iov_to_netmem             | 8          |
|        | include/net/netmem.h                                | netmem_is_net_iov             | 1          |
|        | include/net/netmem.h                                | netmem_to_net_iov             | 2          |
|        | net/core/netdev_rx_queue.c                          | net_mp_close_rxq              | 1          |
|        | include/net/page_pool/memory_provider.h             | net_mp_netmem_place_in_cache  | 2          |
|        | net/core/page_pool.c                                | net_mp_niov_clear_page_pool   | 1          |
|        | net/core/page_pool.c                                | net_mp_niov_set_dma_addr      | 2          |
|        | net/core/page_pool.c                                | net_mp_niov_set_page_pool     | 1          |
|        | net/core/netdev_rx_queue.c                          | net_mp_open_rxq               | 1          |
|        | include/net/netlink.h                               | nla_nest_end                  | 1          |
|        | include/net/netlink.h                               | nla_nest_start                | 1          |
|        | drivers/gpu/drm/radeon/mkregtable.c                 | offsetof                      | 2          |
|        | include/net/page_pool/helpers.h                     | page_pool_fragment_netmem     | 1          |
|        | include/net/page_pool/helpers.h                     | page_pool_get_dma_addr_netmem | 2          |
|        | net/core/page_pool.c                                | page_pool_put_unrefed_netmem  | 1          |
|        | include/net/page_pool/helpers.h                     | page_pool_ref_netmem          | 1          |
|        | include/net/page_pool/helpers.h                     | page_pool_unref_netmem        | 2          |
|        | include/linux/percpu-refcount.h                     | percpu_ref_get                | 1          |
|        | include/linux/percpu-refcount.h                     | percpu_ref_put                | 1          |
|        | include/linux/err.h                                 | PTR_ERR                       | 1          |
|        | drivers/base/core.c                                 | put_device                    | 1          |
|        | include/asm-generic/rwonce.h                        | READ_ONCE                     | 1          |
|        | net/core/sock.c                                     | release_sock                  | 1          |
|        | include/linux/log2.h                                | roundup_pow_of_two            | 1          |
|        | include/linux/skbuff.h                              | skb_frag_foreach_page         | 1          |
|        | include/linux/skbuff.h                              | skb_frag_is_net_iov           | 1          |
|        | include/linux/skbuff.h                              | skb_frag_off                  | 2          |
|        | include/linux/skbuff.h                              | skb_frag_size                 | 1          |
|        | include/linux/skbuff.h                              | skb_headlen                   | 4          |
|        | include/linux/skbuff.h                              | skb_shinfo                    | 2          |
|        | include/linux/skbuff.h                              | skb_walk_frags                | 1          |
|        | include/asm-generic/barrier.h                       | smp_load_acquire              | 1          |
|        | include/asm-generic/barrier.h                       | smp_store_release             | 1          |
|        | include/net/sock.h                                  | sock_error                    | 1          |
|        | include/net/sock.h                                  | sock_flag                     | 2          |
|        | include/net/rps.h                                   | sock_rps_record_flow          | 1          |
|        | drivers/gpu/drm/msm/disp/dpu1/dpu_crtc.h            | spin_lock                     | 2          |
|        | include/linux/spinlock.h                            | spin_lock_bh                  | 4          |
|        | include/linux/spinlock.h                            | spin_lock_init                | 3          |
|        | include/linux/spinlock.h                            | spin_unlock                   | 2          |
|        | include/linux/spinlock.h                            | spin_unlock_bh                | 5          |
|        | net/ipv4/tcp.c                                      | tcp_read_sock                 | 1          |
|        | include/linux/kernel.h                              | u64_to_user_ptr               | 5          |
|        | include/linux/compiler.h                            | unlikely                      | 10         |
|        | mm/gup.c                                            | unpin_user_pages              | 1          |
|        | arch/parisc/include/asm/bug.h                       | WARN_ON                       | 2          |
|        | include/asm-generic/bug.h                           | WARN_ON_ONCE                  | 5          |

### zcrx.h

| Source | Library | Function Utilized | Times Used |
|--------|---------|-------------------|------------|