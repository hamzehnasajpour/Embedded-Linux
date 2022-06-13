##

### Build

 A good thing to do would be to explain in details how this bug can be reproduced under emulation (such as qemu) by people who have only typical x86 machine at their disposal. This makes it possible for other people to independently verify that bug indeed exists, and work on fixes for it. Otherwise, they can only send you suggestions what _you_ can do on _your_ system, which is MUCH slower process (think "email round trip time" and "non-scalable").

Example of a recipe to reproduce a bug under qemu:

    Download and unpack arm-2010q1-202-arm-none-linux-gnueabi-i686-pc-linux-gnu.tar.bz2 to /usr/package/arm-2010q1 directory.
    Add /usr/package/arm-2010q1/bin to $PATH.
    Unpack pristine busybox-1.19.3 source tarball into an empty directory.
    Build dynamic busybox binary using this cross-compiler:
```
        make defconfig
        make -j 4 CROSS_COMPILE=arm-none-linux-gnueabi-
        make CROSS_COMPILE=arm-none-linux-gnueabi- install
```
    Make ext2 image with the resulting binary:
```
        dd if=/dev/zero of=image_ext2 bs=1M count=16
        mke2fs -F image_ext2
        mkdir dir
        mount -o loop image_ext2 dir
        cp -a _install/* dir
```
    Add to image_ext2 dynamic loader and libraries from toolchain:
```
        cp -a /usr/package/arm-2010q1/arm-none-linux-gnueabi/libc/lib dir
```
    Unmount image_ext2:
```
        sync
        umount -d dir
```
    Download http://www.landley.net/aboriginal/downloads/binaries/system-image-armv6l.tar.bz2 and take zImage from there.
    Start this kernel with this file system image under qemu:

        qemu-system-arm -cpu arm1136-r2 -M versatilepb -nographic -no-reboot \
    	-hda image_ext2 \
    	-kernel zImage \
            -append 'rw init=/bin/sh panic=1 PATH=/bin:/sbin root=/dev/sda console=ttyAMA0'

    (give further description here how to trigger the bug) 

### link

https://busybox.net/FAQ.html#build