## Sources

//Ryan
### advise.c
Store io_madvice & io_fadvice structures, both have the same exact attributes. Which make them basically the same thing. Except function body treat them as separate. Codes which make use of io_madvice are guarded by compilation macro, which make its relevant functions only active if the build flag is set. But functions that make use of io_fadvice are active all the time. The exact difference between io_madvice & io_fadvice will only known after exploring do_madvise function for io_madvice & vfs_fadvise function for io_fadvice.

### alloc_cache.c
This file creates, init, and free memory cache.

### cancel.c
This file handles cancelling asynchronous operations. It store io_cancel structure that have attribute *file, addr, flags, fd, opcode. It also define a macro CANCEL_FLAGS which is a combination bitwise OR of several flags.

### epoll.c
This file implements io_uring support for epoll operation. It store io_epoll and io_epoll_wait structures, both store file and epoll_event struct. The function io_epoll_ctl_prep() and io_epoll_ctl() prepare and execute epoll control operation such as add, modify, and remove file descriptor. The function io_epoll_wait_prep() and io_epoll_wait prepare and execute event polling via epoll. The prep function extracts parameters such as the maximum number of events and the user event buffer. The main function calls epoll_sendevents() to deliver events, return -EAGAIN if no event are available.

### eventfd.c
This file implements eventfd support for io_uring, enabling  efficient notification of io_uring completion events. It manages the registration, signaling, and unregistration of eventfd objects. It store io_ev_fd structure that store the eventfd context (eventfd_ctx), reference counters (refcount_t), and state. Functions in this file handle acquiring and releasing eventfd references, signaling the eventfd when events occur, and ensuring correct behavior for both synchronous and asynchronous notification modes.

### fdinfo.c
This file provides the code for displaying detailed state information about io_uring file descriptors, but only compiled if the CONFIG_PROC_FS flag is enabled. The main function is io_uring_show_fdinfo() which output statistics and configuration for an io_uring instance.

### filetable.c
This file manages a table of files for io_uring. It handles adding and removing files from the table, and keep track which spots are free or used using a bitmap. The main functions include io_alloc_file_tables() and io_free_file_tables() for creating and freeing the table, io_file_bitmap_get() for finding a free slot, and io_install_fixed_file(), __io_fixed_fd_install(), and io_fixed_fd_install() for adding files to the table, and io_fixed_fd_remove() and io_register_file_alloc_range() to remove a file.

### fs.c
It store io_rename, io_unlink, io_mkdir, and io_link structures. Io_rename and io_link have same attributes. Functions that have '*_prep' like io_renameat_prep, is used for validate inputs and setup structures. Main functions like io_renameat execute the actual file operation. '*_cleanup' functions free resources.

### futex.c
It store io_futex and io_futex_data structures. Main functions are `io_futex_wait()` for single futex waiting, `io_futex_wake()` for waking up waiters, and `io_futexv_wait()` for waiting on multiple futexes simultaneously. The code uses constants like `FUTEX2_VALID_MASK` for validation and macros such as `FLAGS_STRICT` to control behavior. Helper functions `io_futex_wake_fn()` and `io_futexv_wake_fn()` serve as callbacks when futexes are triggered. Resource management is handled through `io_futex_cache_init()` and `io_futex_cache_free()`, with a constant `IO_FUTEX_ALLOC_CACHE_MAX` defining the maximum cache size. For cancellation, `io_futex_cancel()` and `io_futex_remove_all()` properly clean up pending operations. All operations follow io_uring's pattern with preparation functions like `io_futex_prep()` validating inputs before execution.

### io_uring.c
Implements the core functionality of io_uring, including the management of submission and completion queues. It handles memory allocation, initialization, and cleanup of ring buffers. This file also defines the main logic for processing I/O requests.

### io-wq.c
Manages the worker queue for asynchronous I/O operations. It schedules tasks that cannot be completed immediately and ensures efficient execution across worker threads. This file also handles synchronization and task prioritization.

### kbuf.c
Handles kernel buffer allocation and management for I/O operations. It ensures data consistency between user space and kernel space. This file is critical for preventing memory leaks and ensuring safe buffer usage.

### memmap.c
Implements memory mapping between user space and kernel space. It allows efficient access to kernel buffers by mapping them to user space. This file also manages cleanup and unmapping when memory is no longer needed.

### msg_ring.c
Implements the functionality for message passing between io_uring instances. It allows one io_uring instance to enqueue requests into another instance's submission queue. This file ensures efficient inter-instance communication and synchronization.

### napi.c
Handles NAPI (New API) polling for network-related operations in io_uring. It integrates with the kernel's networking stack to process packets efficiently. This file is critical for reducing overhead in high-performance network I/O.

### net.c
Manages network-related I/O operations within io_uring. It provides support for socket-based operations and integrates with the kernel's networking subsystems. This file ensures low-latency and efficient network communication.

### nop.c
Implements the "no operation" (NOP) request type for io_uring. It is used for testing and benchmarking purposes or as a placeholder operation. This file ensures that NOP requests are processed correctly without affecting other operations.

### notif.c
Handles completion notifications for io_uring operations. It manages how events are sent back to user space after an operation is completed. This file ensures proper event delivery and callback execution.

### opdef.c
This file defines and manages the operation handling table for io_uring. It maps each supported operation (opcode) to its corresponding preparation, execution, and cleanup logic.

### openclose.c
This file implements the open and close operations for io_uring. It provides the logic for handling file-related system calls, such as opening, closing, and managing file descriptors, within the io_uring framework.

### poll.c
This file implements the polling operations for io_uring, enabling efficient monitoring of file descriptors for readiness (e.g., for reading or writing). It handles the IORING_OP_POLL_ADD and IORING_OP_POLL_REMOVE opcodes, which allow applications to asynchronously wait for events on file descriptors.

### register.c
This file implements the logic for the io_uring_register() syscall, which allows applications to register or unregister resources and configurations with an io_uring instance. It handles various registration-related operations to optimize performance and enable advanced features.

### rsrc.c
This file implements the management of resources (e.g., files, buffers, memory) for io_uring. It handles the registration, updating, and unregistration of resources, ensuring efficient and safe access to these resources during asynchronous I/O operations.

### rw.c
This file implements the read and write operations for io_uring, handling both synchronous and asynchronous I/O requests. It supports various read/write modes, including vectored I/O, fixed buffers, and multishot reads.

### splice.c
This file implements the splice and tee operations for io_uring, which allow efficient data transfer between file descriptors without copying data to user space. These operations are useful for high-performance I/O scenarios, such as streaming or piping data between files or sockets.

### sqpoll.c
This file implements the submission queue polling (SQPOLL) feature for io_uring, which offloads submission queue processing to a dedicated kernel thread. This feature improves performance by reducing the overhead of system calls for applications that frequently submit I/O requests.

## statx.c
This file contains the implementation logic for submitting asynchronous statx() system calls using the io_uring interface. The statx() syscall is used to retrieve metadata about a file or directory, such as its size, type, permissions, timestamps, and other attributes. In this file, you'll find code that prepares the request, submits it to the io_uring submission queue, and handles any internal data structures required to track the operation until completion.

## sync.c
This file implements support for asynchronous synchronization operations such as fsync() and fdatasync() using io_uring. These operations ensure that changes made to files (like writes) are safely flushed to disk. The code here manages the setup and submission of these I/O operations into the io_uring ring, allowing applications to perform sync operations without blocking the main thread.

## tctx.c
This file handles the management of thread-local context (often abbreviated as "tctx") within liburing. Thread context is essential in multi-threaded programs to manage resources specific to each thread, such as private memory, state tracking, and cleanup routines. This file ensures proper initialization, usage, and cleanup of per-thread data to avoid conflicts and improve performance in threaded applications.

## timeout.c
This file provides the implementation for setting up timeout-based operations using io_uring. It supports the IORING_OP_TIMEOUT opcode, which allows users to set time limits on waiting for completions or other events. This is useful for implementing cancellable waits or enforcing deadlines on I/O operations.

## truncate.c
Implements support for asynchronous file truncation through io_uring. File truncation involves changing the size of a file, often to zero length, and is commonly used during file resets or cleanups. This file handles the preparation and submission of truncate requests so they can be executed non-blockingly.

## uring_cmd.c
This file implements support for submitting custom passthrough commands directly to the kernel using io_uring, typically via the IORING_OP_URING_CMD opcode. This feature is especially useful for devices like NVMe SSDs that support vendor-specific commands, enabling advanced device control from user space.

## waitid.c
Implements asynchronous process status monitoring using the waitid() system call via io_uring. This allows applications to wait for child processes to change state (e.g., exit, stop, continue) without blocking. The file handles submission and processing of such wait requests in an event-driven manner.

## xattr.c
Implements support for asynchronous extended attribute (xattr) operations using io_uring. Extended attributes allow associating metadata (like security labels or custom tags) with files. This file handles asynchronous versions of getxattr, setxattr, removexattr, and similar operations.

## zcrx.c
Implements zero-copy receive (ZCRX) functionality using io_uring, designed to optimize network or I/O receive operations by eliminating unnecessary memory copies between kernel and user space. This improves performance, especially in high-throughput scenarios like networking or large file transfers.


## Headers
### advise.h
Just declare the function specification

### alloc_cache.h
Define a constant IO_ALLOC_CACHE_MAX to set maximum cache size to 128. It also declares and defines helper function to allocate, free, and cache memory objects. There is CONFIG_KASAN flag in *io_alloc_cache_get that if it is enabled, the function will always clear the initial bytes that must be zeroed post alloc, in case any of them overlap with KASAN storage.

### cancel.h
Store io_cancel_data structure that also store another structure (io_ring_ctx). It represents information needed to identify which request to cancel. This file also defines interfaces for cancelling submitted but not yet compiled I/O operations.

### epoll.h
It declares the io_uring epoll operation interfaces, which are only available when the flag CONFIG_EPOLL is enabled. It provides function prototypes for preparing and executing asynchronous epoll control io_epoll_ctl_prep(), io_epoll_ctl() and epoll wait io_epoll_wait_prep(), io_epoll_wait() operations via io_uring.

### eventfd.h
It defines the interface for integrating eventfd notifications with io_uring. It provides functions for registering and unregistering an eventfd. Tt also declares functions to trigger eventfd notifications manually or to flush them in accordance with the current state of the completion queue.

### fdinfo.h
It declares the io_uring_show_fdinfo() function which defined in fdinfo.c

### filetable.h
It declares filetable.c main functions. There are inline functions such as io_file_bitmap_clear, io_file_bitmap_set, io_slot_flags, io_slot_file, io_fixed_file_set, and io_file_table_set_alloc_range to handle bitmap operations, retrieve files from resource nodes, and encode or decode slot flags. There is also macros FFS_NOWAIT, FFS_ISREG, and FFS_MASK.

### fs.h
This file declares the function prototypes defined at fs.c.

### futex.h
This file declares the interface for futex operations in futex.c.

<<<<<<< HEAD
=======
//Agas
### io_uring.c
Implements the core functionality of io_uring, including the management of submission and completion queues. It handles memory allocation, initialization, and cleanup of ring buffers. This file also defines the main logic for processing I/O requests.

>>>>>>> 1a1a760 (baru)
### io_uring.h
Declares the core data structures and functions used in io_uring, including submission queue entries (SQE) and completion queue entries (CQE). It provides the interface for managing ring buffers and interacting with io_uring operations.

### io-wq.h
Declares functions and structures for managing the worker queue (WQ) used in asynchronous I/O operations. It provides the interface for scheduling, synchronization, and task prioritization across worker threads.

### kbuf.h
Declares functions and structures for kernel buffer management in I/O operations. It provides the interface for allocating, deallocating, and ensuring safe usage of kernel buffers to maintain data consistency between user space and kernel space.

### memmap.h
Declares functions and structures for memory mapping between user space and kernel space. It provides the interface for mapping kernel buffers to user space and managing memory regions efficiently.

### msg_ring.h
Declares the functions and structures for message passing between io_uring instances. It provides the interface for enqueuing requests from one io_uring instance to another.

### napi.h
Declares functions and structures for handling NAPI (New API) polling in io_uring. It integrates with the kernel's networking stack to process network-related I/O operations efficiently.

### net.h
Declares functions and structures for managing network-related I/O operations. It provides support for socket-based operations and ensures efficient communication with the kernel's networking subsystems.

### nop.h
Declares the "no operation" (NOP) request type for io_uring. It provides the interface for processing NOP requests, which are used for testing, benchmarking, or as placeholders.

### notif.h
Declares functions and structures for handling completion notifications in io_uring. It provides the interface for sending events back to user space after operations are completed.

### opdef.h
This header file defines the structure and interfaces for managing io_uring operations (opcodes). It provides the blueprint for how each operation is handled, including its preparation, execution, and cleanup.

### openclose.h
This header file declares the interfaces for handling file open and close operations in io_uring. It provides function prototypes for preparing, executing, and cleaning up open/close requests, as well as managing fixed file descriptors.

### poll.h
This header file declares the structures and functions used for implementing polling operations in io_uring. It provides the necessary definitions for managing poll requests, handling events, and integrating polling into the io_uring framework.

### refs.h
This file provides utilities for reference counting in io_uring, specifically for managing the lifecycle of io_kiocb (I/O kernel control block) objects. Reference counting ensures that requests are not prematurely freed or accessed after being released.

### register.h
This header file declares the interfaces for resource registration and unregistration in io_uring. It provides function prototypes used in the implementation of the io_uring_register() syscall.

### rsrc.h
This header file declares the structures, constants, and functions used for managing resources (e.g., files, buffers, memory) in io_uring. It provides the interface for registering, updating, and managing resources efficiently.

### rw.h
This header file declares the structures and functions used for implementing read and write operations in io_uring. It provides the interface for preparing, executing, and managing various types of I/O requests, including regular, fixed, and multishot reads/writes.

### slist.h
This file provides utility functions and macros for managing singly linked lists and stacks in the io_uring framework. It is primarily used for managing work queues (io_wq_work_list) and work nodes (io_wq_work_node) in an efficient and thread-safe manner.

### splice.h
This header file declares the interfaces for implementing splice and tee operations in io_uring. These operations enable efficient, zero-copy data transfers between file descriptors.

### sqpoll.h
This header file declares the structures and functions used for implementing submission queue polling (SQPOLL) in io_uring. It provides the interface for managing the kernel thread responsible for polling the submission queue (SQ) and processing I/O requests.

## statx.h
This header file declares the function prototypes, macros, and data structures needed by other parts of liburing or user applications to use the async statx() functionality. It typically includes declarations for functions like io_uring_prep_statx() and io_uring_submit_statx(), along with necessary flags and struct definitions that are shared across modules.

## sync.h
This header defines the public API for using async fsync and fdatasync operations. It includes function declarations like io_uring_prep_fsync() and io_uring_prep_fdatasync(), which are used when preparing requests, and may also define relevant flags and helper macros.

## tctx.h
The header file exposes internal structures and function declarations related to thread context handling. It allows other components of liburing to access and manipulate thread-specific data structures safely and efficiently.

## timeout.h
This header file declares the interfaces needed to work with timeouts via io_uring, including function prototypes for preparing and submitting timeout requests, as well as definitions for timeout-related flags and structures.

## truncate.h
Declares the APIs and helper functions needed to initiate truncate operations asynchronously. It includes declarations for functions like io_uring_prep_truncate() and io_uring_prep_ftruncate().

## uring_cmd.h
Exposes the function prototypes and data structures required to use uring command passthrough, including definitions for the io_uring_cmd structure and helpers for initializing and submitting custom commands.

## waitid.h
Declares the function signatures and related types needed to use async waitid() functionality, such as io_uring_prep_waitid(). It may also include constants and flags associated with process state monitoring.

## xattr.h
Declares the APIs and helper functions for working with xattrs asynchronously. It includes function prototypes like io_uring_prep_getxattr() and io_uring_prep_setxattr(), along with definitions of flags and structures used in xattr handling.

## zcrx.h
Declares the APIs, structures, and flags required to configure and use zero-copy receive features. It provides interfaces for developers to enable ZCRX and interact with it programmatically.