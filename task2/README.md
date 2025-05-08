

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



