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
### opdef.c
This file defines and manages the operation handling table for io_uring. It maps each supported operation (opcode) to its corresponding preparation, execution, and cleanup logic.

### opdef.h
This header file defines the structure and interfaces for managing io_uring operations (opcodes). It provides the blueprint for how each operation is handled, including its preparation, execution, and cleanup.

### openclose.c
This file implements the open and close operations for io_uring. It provides the logic for handling file-related system calls, such as opening, closing, and managing file descriptors, within the io_uring framework.

### openclose.h
This header file declares the interfaces for handling file open and close operations in io_uring. It provides function prototypes for preparing, executing, and cleaning up open/close requests, as well as managing fixed file descriptors.

### poll.c
This file implements the polling operations for io_uring, enabling efficient monitoring of file descriptors for readiness (e.g., for reading or writing). It handles the IORING_OP_POLL_ADD and IORING_OP_POLL_REMOVE opcodes, which allow applications to asynchronously wait for events on file descriptors.

### poll.h
This header file declares the structures and functions used for implementing polling operations in io_uring. It provides the necessary definitions for managing poll requests, handling events, and integrating polling into the io_uring framework.

### refs.h
This file provides utilities for reference counting in io_uring, specifically for managing the lifecycle of io_kiocb (I/O kernel control block) objects. Reference counting ensures that requests are not prematurely freed or accessed after being released.

### register.c
This file implements the logic for the io_uring_register() syscall, which allows applications to register or unregister resources and configurations with an io_uring instance. It handles various registration-related operations to optimize performance and enable advanced features.

### register.h
This header file declares the interfaces for resource registration and unregistration in io_uring. It provides function prototypes used in the implementation of the io_uring_register() syscall.

### rsrc.c
This file implements the management of resources (e.g., files, buffers, memory) for io_uring. It handles the registration, updating, and unregistration of resources, ensuring efficient and safe access to these resources during asynchronous I/O operations.

### rsrc.h
This header file declares the structures, constants, and functions used for managing resources (e.g., files, buffers, memory) in io_uring. It provides the interface for registering, updating, and managing resources efficiently.

### rw.c
This file implements the read and write operations for io_uring, handling both synchronous and asynchronous I/O requests. It supports various read/write modes, including vectored I/O, fixed buffers, and multishot reads.

### rw.h
This header file declares the structures and functions used for implementing read and write operations in io_uring. It provides the interface for preparing, executing, and managing various types of I/O requests, including regular, fixed, and multishot reads/writes.

### slist.h
This file provides utility functions and macros for managing singly linked lists and stacks in the io_uring framework. It is primarily used for managing work queues (io_wq_work_list) and work nodes (io_wq_work_node) in an efficient and thread-safe manner.

### splice.c
This file implements the splice and tee operations for io_uring, which allow efficient data transfer between file descriptors without copying data to user space. These operations are useful for high-performance I/O scenarios, such as streaming or piping data between files or sockets.

### splice.h
This header file declares the interfaces for implementing splice and tee operations in io_uring. These operations enable efficient, zero-copy data transfers between file descriptors.

### sqpoll.c
This file implements the submission queue polling (SQPOLL) feature for io_uring, which offloads submission queue processing to a dedicated kernel thread. This feature improves performance by reducing the overhead of system calls for applications that frequently submit I/O requests.

### sqpoll.h
This header file declares the structures and functions used for implementing submission queue polling (SQPOLL) in io_uring. It provides the interface for managing the kernel thread responsible for polling the submission queue (SQ) and processing I/O requests.

//Danar
statx.c
statx.h
sync.c
sync.h
tctx.c
tctx.h
timeout.c
timeout.h
truncate.c
truncate.h
uring_cmd.c
uring_cmd.h
waitid.c
waitid.h
xattr.c
xattr.h
zcrx.c
zcrx.h