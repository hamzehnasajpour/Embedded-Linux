## Buildroot
Buildroot is a simple, efficient and easy-to-use tool to generate embedded Linux systems through cross-compilation.

https://github.com/buildroot/buildroot

### Build
1) run 'make menuconfig'
2) select the target architecture and the packages you wish to compile
3) run 'make'
4) wait while it compiles
5) find the kernel, bootloader, root filesystem, etc. in output/images

---

## Busybox
BusyBox provides the everyday convenience commands that often feel like they’re part of your shell. Although userland tools like ls and cat are ubiquitous, they actually reside in a separate utility package that’s independent of your shell. Many Linux distributions deliver these commands via GNU’s coreutils but others ship BusyBox instead.

The project works by symlinking familiar command names in /usr/bin to the BusyBox binary. This executable then invokes the function corresponding to the name passed as its first argument.

 * With BusyBox the command mkdir runs `/usr/bin/busybox mkdir`
 * With GNU Coreutils – the command mkdir runs `/usr/bin/mkdir`.


>**The purpose of Busybox is only to "combine tiny versions of many common UNIX utilities into a single small executable ... with size-optimization and limited resources in mind".**

https://github.com/mirror/busybox

### Build

 A good thing to do would be to explain in details how this bug can be reproduced under emulation (such as qemu) by people who have only typical x86 machine at their disposal. This makes it possible for other people to independently verify that bug indeed exists, and work on fixes for it. Otherwise, they can only send you suggestions what _you_ can do on _your_ system, which is MUCH slower process (think "email round trip time" and "non-scalable").

Example of a recipe to reproduce a bug under qemu:
>    Download and unpack arm-2010q1-202-arm-none-linux-gnueabi-i686-pc-linux-gnu.tar.bz2 to /usr/package/arm-2010q1 directory.
    Add /usr/package/arm-2010q1/bin to $PATH.
    Unpack pristine busybox-1.19.3 source tarball into an empty directory.
    Build dynamic busybox binary using this cross-compiler:


```bash
make defconfig
make -j 4 CROSS_COMPILE=arm-none-linux-gnueabi-
make CROSS_COMPILE=arm-none-linux-gnueabi- install
```
    
Make ext2 image with the resulting binary:

```bash
    dd if=/dev/zero of=image_ext2 bs=1M count=16
    mke2fs -F image_ext2
    mkdir dir
    mount -o loop image_ext2 dir
    cp -a _install/* dir
```

Add to image_ext2 dynamic loader and libraries from toolchain:
```bash
    cp -a /usr/package/arm-2010q1/arm-none-linux-gnueabi/libc/lib dir
```

Unmount image_ext2:
```bash
    sync
    umount -d dir
```


### link

https://busybox.net/FAQ.html#build