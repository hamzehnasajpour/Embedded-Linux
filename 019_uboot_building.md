## Uboot

### Step 1: Download the Source Code

https://github.com/u-boot/u-boot

```bash
cd u-boot
```

```bash
make ..._config
```
or 

```bash
cp configs/... .config
```

```bash
make
```

or 

```bash
make CROSS_COMPILE=<toolchain prefix>
```

Example:

```bash
$ tar xjf u-boot-2009.01.tar.bz2
$ cd u-boot-2009.01/
$ make at91sam9260ek_config
... with environment variable in SPI DATAFLASH CS1
Configuring for at91sam9260ek board...
$ make CROSS_COMPILE=armv5l-timesys-linux-gnueabi-
```

links:
https://linuxlink.timesys.com/docs/wiki/engineering/HOWTO_Build_U-Boot
