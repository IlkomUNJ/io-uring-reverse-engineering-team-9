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
io_uring.c
io_uring.h
io-wq.c
io-wq.h
kbuf.c
kbuf.h
memmap.c
memmap.h
msg_ring.c
msg_ring.h
napi.c
napi.h
net.c
net.h
nop.c
nop.h
notif.c
notif.h

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