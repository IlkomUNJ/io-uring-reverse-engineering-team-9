## Sources
### advise.c
Store io_madvice & io_fadvice structures, both have the same exact attributes. Which make them basically the same thing. Except function body treat them as separate. Codes which make use of io_madvice are guarded by compilation macro, which make its relevant functions only active if the build flag is set. But functions that make use of io_fadvice are active all the time. The exact difference between io_madvice & io_fadvice will only known after exploring do_madvise function for io_madvice & vfs_fadvise function for io_fadvice.

### alloc_cache.c
This file creates, init, and free memory cache.

### cancel.c
This file handles cancelling asynchronous operations. It store io_cancel structure that have attribute *file, addr, flags, fd, opcode. It also define a macro CANCEL_FLAGS which is a combination bitwise OR of several flags.

## Headers
### advise.h
Just declare the function specification

### alloc_cache.h
Define a constant IO_ALLOC_CACHE_MAX to set maximum cache size. It also declares and defines helper function for memory cache system.

//Ryan
cancel.h
epoll.c
epoll.h
eventfd.c
eventfd.h
fdinfo.c
fdinfo.h
filetable.c
filetable.h
fs.c
fs.h
futex.c
futex.h

//Agas
### io_uring.c
Implements the core functionality of io_uring, including the management of submission and completion queues. It handles memory allocation, initialization, and cleanup of ring buffers. This file also defines the main logic for processing I/O requests.

### io_uring.h
Declares the core data structures and functions used in io_uring, including submission queue entries (SQE) and completion queue entries (CQE). It provides the interface for managing ring buffers and interacting with io_uring operations.

### io-wq.c
Manages the worker queue for asynchronous I/O operations. It schedules tasks that cannot be completed immediately and ensures efficient execution across worker threads. This file also handles synchronization and task prioritization.

### io-wq.h
Declares functions and structures for managing the worker queue (WQ) used in asynchronous I/O operations. It provides the interface for scheduling, synchronization, and task prioritization across worker threads.

### kbuf.c
Handles kernel buffer allocation and management for I/O operations. It ensures data consistency between user space and kernel space. This file is critical for preventing memory leaks and ensuring safe buffer usage.

### kbuf.h
Declares functions and structures for kernel buffer management in I/O operations. It provides the interface for allocating, deallocating, and ensuring safe usage of kernel buffers to maintain data consistency between user space and kernel space.

### memmap.c
Implements memory mapping between user space and kernel space. It allows efficient access to kernel buffers by mapping them to user space. This file also manages cleanup and unmapping when memory is no longer needed.

### memmap.h
Declares functions and structures for memory mapping between user space and kernel space. It provides the interface for mapping kernel buffers to user space and managing memory regions efficiently.

### msg_ring.c
Implements the functionality for message passing between io_uring instances. It allows one io_uring instance to enqueue requests into another instance's submission queue. This file ensures efficient inter-instance communication and synchronization.

### msg_ring.h
Declares the functions and structures for message passing between io_uring instances. It provides the interface for enqueuing requests from one io_uring instance to another.

### napi.c
Handles NAPI (New API) polling for network-related operations in io_uring. It integrates with the kernel's networking stack to process packets efficiently. This file is critical for reducing overhead in high-performance network I/O.

### napi.h
Declares functions and structures for handling NAPI (New API) polling in io_uring. It integrates with the kernel's networking stack to process network-related I/O operations efficiently.

### net.c
Manages network-related I/O operations within io_uring. It provides support for socket-based operations and integrates with the kernel's networking subsystems. This file ensures low-latency and efficient network communication.

### net.h
Declares functions and structures for managing network-related I/O operations. It provides support for socket-based operations and ensures efficient communication with the kernel's networking subsystems.

### nop.c
Implements the "no operation" (NOP) request type for io_uring. It is used for testing and benchmarking purposes or as a placeholder operation. This file ensures that NOP requests are processed correctly without affecting other operations.

### nop.h
Declares the "no operation" (NOP) request type for io_uring. It provides the interface for processing NOP requests, which are used for testing, benchmarking, or as placeholders.

### notif.c
Handles completion notifications for io_uring operations. It manages how events are sent back to user space after an operation is completed. This file ensures proper event delivery and callback execution.

### notif.h
Declares functions and structures for handling completion notifications in io_uring. It provides the interface for sending events back to user space after operations are completed.

//Darrell
opdef.c
opdef.h
openclose.c
openclose.h
poll.c
poll.h
refs.h
register.c
register.h
rsrc.c
rsrc.h
rw.c
rw.h
slist.h
splice.c
splice.h
sqpoll.c
sqpoll.h

//Danar
## statx.c
This file contains the implementation logic for submitting asynchronous statx() system calls using the io_uring interface. The statx() syscall is used to retrieve metadata about a file or directory, such as its size, type, permissions, timestamps, and other attributes. In this file, you'll find code that prepares the request, submits it to the io_uring submission queue, and handles any internal data structures required to track the operation until completion.

## statx.h
This header file declares the function prototypes, macros, and data structures needed by other parts of liburing or user applications to use the async statx() functionality. It typically includes declarations for functions like io_uring_prep_statx() and io_uring_submit_statx(), along with necessary flags and struct definitions that are shared across modules.

## sync.c
This file implements support for asynchronous synchronization operations such as fsync() and fdatasync() using io_uring. These operations ensure that changes made to files (like writes) are safely flushed to disk. The code here manages the setup and submission of these I/O operations into the io_uring ring, allowing applications to perform sync operations without blocking the main thread.

## sync.h
This header defines the public API for using async fsync and fdatasync operations. It includes function declarations like io_uring_prep_fsync() and io_uring_prep_fdatasync(), which are used when preparing requests, and may also define relevant flags and helper macros.

## tctx.c
This file handles the management of thread-local context (often abbreviated as "tctx") within liburing. Thread context is essential in multi-threaded programs to manage resources specific to each thread, such as private memory, state tracking, and cleanup routines. This file ensures proper initialization, usage, and cleanup of per-thread data to avoid conflicts and improve performance in threaded applications.

## tctx.h
The header file exposes internal structures and function declarations related to thread context handling. It allows other components of liburing to access and manipulate thread-specific data structures safely and efficiently.

## timeout.c
This file provides the implementation for setting up timeout-based operations using io_uring. It supports the IORING_OP_TIMEOUT opcode, which allows users to set time limits on waiting for completions or other events. This is useful for implementing cancellable waits or enforcing deadlines on I/O operations.

## timeout.h
This header file declares the interfaces needed to work with timeouts via io_uring, including function prototypes for preparing and submitting timeout requests, as well as definitions for timeout-related flags and structures.

## truncate.c
Implements support for asynchronous file truncation through io_uring. File truncation involves changing the size of a file, often to zero length, and is commonly used during file resets or cleanups. This file handles the preparation and submission of truncate requests so they can be executed non-blockingly.

## truncate.h
Declares the APIs and helper functions needed to initiate truncate operations asynchronously. It includes declarations for functions like io_uring_prep_truncate() and io_uring_prep_ftruncate().

## uring_cmd.c
This file implements support for submitting custom passthrough commands directly to the kernel using io_uring, typically via the IORING_OP_URING_CMD opcode. This feature is especially useful for devices like NVMe SSDs that support vendor-specific commands, enabling advanced device control from user space.

## uring_cmd.h
Exposes the function prototypes and data structures required to use uring command passthrough, including definitions for the io_uring_cmd structure and helpers for initializing and submitting custom commands.

## waitid.c
Implements asynchronous process status monitoring using the waitid() system call via io_uring. This allows applications to wait for child processes to change state (e.g., exit, stop, continue) without blocking. The file handles submission and processing of such wait requests in an event-driven manner.

## waitid.h
Declares the function signatures and related types needed to use async waitid() functionality, such as io_uring_prep_waitid(). It may also include constants and flags associated with process state monitoring.

## xattr.c
Implements support for asynchronous extended attribute (xattr) operations using io_uring. Extended attributes allow associating metadata (like security labels or custom tags) with files. This file handles asynchronous versions of getxattr, setxattr, removexattr, and similar operations.

## xattr.h
Declares the APIs and helper functions for working with xattrs asynchronously. It includes function prototypes like io_uring_prep_getxattr() and io_uring_prep_setxattr(), along with definitions of flags and structures used in xattr handling.

## zcrx.c
Implements zero-copy receive (ZCRX) functionality using io_uring, designed to optimize network or I/O receive operations by eliminating unnecessary memory copies between kernel and user space. This improves performance, especially in high-throughput scenarios like networking or large file transfers.

## zcrx.h
Declares the APIs, structures, and flags required to configure and use zero-copy receive features. It provides interfaces for developers to enable ZCRX and interact with it programmatically.