
## What Does Embedded Linux Mean?

Embedded Linux is a type of Linux operating system/kernel that is designed to be installed and used within embedded devices and appliances.

It is a compact version of Linux that offers features and services in line with the operating and application requirement of the embedded system.

Embedded Linux, though utilizing the same Linux kernel, is quite different from the standard Linux OS. Embedded Linux is specifically customized for embedded systems. Therefore it is has a much smaller size, requires less processing power and has minimal features. Based on the requirements of the underlying embedded system, the Linux kernel is modified and optimized as an embedded Linux version. Such an instance of Linux can only run device-specific purpose-built applications.

Android OS is a type of embedded Linux, customized to be used on smartphones. Other devices on which embedded Linux is used include:

    Smart TVs
    Wireless routers
    Tablet PCs
    Navigation devices
    Other industrial and consumer electronic equipment 

لینوکس امبدد نوعی از سیستم عامل/هسته لینوکس است که برای نصب و استفاده در دستگاه ها و وسایل امبد طراحی شده است.

این نسخه فشرده لینوکس است که ویژگی ها و خدماتی را مطابق با نیازهای عملیاتی و کاربردی سیستم تعبیه شده ارائه می دهد.

لینوکس امبدد، اگرچه از همان هسته لینوکس استفاده می کند، با سیستم عامل لینوکس استاندارد کاملاً متفاوت است. لینوکس امبدد به طور خاص برای سیستم های امبدد سفارشی شده است. بنابراین اندازه بسیار کوچکتری دارد، به قدرت پردازش کمتری نیاز دارد و دارای حداقل امکانات است. 

سیستم عامل اندروید نوعی لینوکس  امبدد است که برای استفاده در گوشی های هوشمند سفارشی شده است. دستگاه های دیگری که لینوکس  امبدد در آنها استفاده می شود عبارتند از:

    Smart TVs
    Wireless routers
    Tablet PCs
    Navigation devices
    Other industrial and consumer electronic equipment 

---

## Embedded systems

An embedded system is a small computer that forms part of a larger system, device or machine. It includes both hardware and software and its purpose is to control the device and to allow a user to interact with it. They tend to have one, or a limited number of tasks that they can perform.

Examples of embedded systems include:

    central heating systems
    engine management systems in vehicles
    domestic appliances, such as dishwashers and TVs
    digital watches
    electronic calculators
    GPS systems
    fitness trackers

Depending on the embedded system’s purpose, they use input devices like sensors and switches to produce output, for example sounding warning buzzers and switching lights on.

Embedded devices are not usually programmable by a user - the programming is usually done beforehand by the manufacturer. However, it is often possible to upgrade the software on an embedded device. For example, fitness trackers are embedded systems, but the software can often be upgraded by connecting the device to a PC and installing the new software.

Embedded systems can have advantages over general purpose computers in that:

    Their limited number of functions means they are cheaper to design and build.
    They tend to require less power. Some devices run from batteries.
    They do not need much processing power. They can be built using cheaper, less powerful processors.

---
## OS

### Features of an OS
    ·         Process management
    ·         Memory management
    ·         I/O system management
    ·         Storage management
    ·         Network interface
    ·         User interface
    ·         File management
    ·         Protection and Security
    
### Why should we choose Linux OS?

The reasons why most of the people chose Linux OS for the embedded device are,
·         Linux is a free and open source operating system
·         Linux can run on various kind of CPUs
·         Linux has a very well structured kernel
·         Linux is a highly secure OS
·         Linux OS never crash unless there is any hardware problems
·         Easy to write device drivers in Linux kernel
·         Wide range of software available which are supported by Linux

Every OS has component parts, and the Linux OS also has the following components parts:

### Linux Components
* Bootloader. Your computer needs to go through a startup sequence called booting. This boot process needs guidance, and your OS is the software in control throughout the boot process. When you start your computer the bootloader for your operating system kickstarts the process.

* OS Kernel. You can call the kernel the part of the operating system which is the “closest” to your computing hardware as it is the part which controls the CPU, access to memory and any peripheral devices. It is the “lowest” level at which your operating system works.

*  Background services. Called “daemons” in Linux, these small applications act as servants in the background, ensuring that key functions such as scheduling, printing and multimedia function correctly. They load after you have booted up, or when you have logged into your computer.

*  OS Shell. You need to be able to tell our operating system what to do, and this is the goal of the shell. Also known as the command line, it is a facility which lets you instruct your OS using text. However few people nowadays are familiar with command line code, and it once used to put people off using Linux. This changed because a modern distribution of Linux will use a desktop shell just like Windows.

*  Desktop environment. You can’t interact with the graphical server directly. Instead you need software that can drive the server. This is called a desktop environment in Linux and there are plenty of options including KDE, Unity and Cinnamon. A desktop environment is usually bundled with a number of applications including file and web browsers plus a couple of games.

*  Applications. Obviously, the desktop environment which is bundled with your Linux OS or which you choose to install cannot cater for every application need, there are too many. Individual applications, however, can and there are thousands for Linux just like Windows and Apple’s OS X has thousands of applications. Most Linux distros have app stores which help you find and install apps, for example Ubuntu Software which comes with Ubuntu.

---

### Embedded System Parts

1. Power supply

For the embedded system the power supply is the key component to provide the power to the embedded system circuit. Usually, the embedded system requires 5 V supply or can be range from 1.8 to 3.3. V.  The power supply source can be battery or can be provided by a wall adaptor. The power supply is selected as per user requirements and application requirements. The power supply should be smooth and should be efficient so that continuous power supply can be provided to an embedded system. The power supply should also allow dissipation and should be as efficient as possible.

2. Processor
For any embedded system the processor acts as the brain of the system. The processor is responsible for deciding the performance of the embedded system. In the market there are multiple types of processors available and can be selected as per user requirement. The embedded system can act as a microcontroller and microprocessor. The processor can be an 8-bit processor, a 16-bit processor, and a 32-bit processor. The lesser the bit the smaller the application is for embedded systems. When large applications are used the higher bit processor is needed in the embedded system. The processor needs to be very fast, the price should be minimum, performance should be good so that functions can be performed very fast in an embedded system.

3. Memory
As there are different microcontrollers is used in the embedded system the memory is present in the microcontroller itself.  There are basically two types of memory RAM(Random access memory) and ROM (Read-only memory). As the RAM is volatile type memory the data can be stored temporarily in the memory and when system is switch off the data is lost from the memory. Read-only memory is classified as code memory. The ROM is used for storing the program and when the system is switch on the embedded system fetch code from ROM memory.

4. Timers counters
In some of the applications there is always a requirement of delay that needed to provide in the application. For example, in LED display applications there is a requirement of some delay so that LED can be continuing blink.  And for that timer and counter can be used in the embedded system. The programming can be done in such a way so that delay can be generating the embedded system.  The delay time span can be decided by using the crystal oscillator and system frequency so that delay can be generated as per user requirement.

5. Communication ports
The communication port is the type of interface that is used to communicate with other types of embedded systems. In the embedded system there is multiple types of communication ports like UART, USB, Ethernet, RS-485, and many more. When an embedded system is used in small scale application then the communication ports can be used from the microcontroller. There are also serial protocols that can be used for sending data from one system board to another board.

6. Output and Input
When the embedded system is used the input is needed to interact with the system. The input to the embedded system can be provided by the sensor or by the user itself. The processor used in the embedded system can be based on input and output. The proper configuration needs to be done for using the input and output port. In the embedded system there are fixed input and output ports so that devices can be connected to that specified ports only. For example, P0, P1, P2, and many more.


----------------------------------------------------

### Specs:

* CPU
* GPU
* RAM
* Storage (Nand Flash, NOR Flash, SSD, eMMC, External Storage)
* USB Host 
* MMC
* Network
* Serial Port
* SPI
* I2C
* GPIO
* LED
* ADC
* Key/Button
* HDMI/VGA/Display port
* Bluetooth
* Wifi
* RTC
* Audio Input/Output

----------------------------------------------------

### EVB embedded system samples:

* https://www.raspberrypi.com/products/
* http://nanopi.io/nanopi-neo.html
* http://www.orangepi.org/
* http://cubieboard.org/model/at
* https://www.newark.com/c/embedded-computers-education-maker-boards/arm/embedded-development-kits-arm?silicon-manufacturer=atmel

----------------------------------------------------

### ARM

معماری ARM و پردازنده های مبتنی بر آن، یع قدرت پردازش بالا و مصرف توان پایین مشهور هستند. دو پارامتری که برای ابزارهای همراه امروزی بسیار ضروری می باشد. ابزارهایی که باید همیشه انلاین باشند، در دسترس باشند و در حال پردازش اطلاعات. 
میکروکنترلر ARM پردازنده‌ایست که در تلفن‌های هوشمند، تبلت‌ها، و حتی برخی لپ‌تاپ‌ها بکاربرده می‌شود. این فن‌آوری کمک شایانی به رشد و توسعه‌ی سریع رایانه‌های قابل حمل داشته و تاثیر بسزایی در ساخت دستگاه‌های الکترونیکی دارد.
میکروکنترلر ARM از خانواده CPUهای مبتنی بر معماری RISC (Reduced Instruction Set Computer) بوده که براساس معماری Advanced RISC Machines (ARM) (به معنی ماشین‌های RISC پیشرفته توسعه‌یافته) می‌باشد. RISC یک رایانه کم ‌دستور و یک معماری بهینه‌‌ با حداقل دستورالعمل‌ است.

هلدینگ ARM هیچ پردازنده‌ای را تولید نمی‌‌کند. این شرکت این فن‌آوری را ایجاد کرده، دستورالعمل‌های استاندارد را توسعه داده، و سپس به دیگر تولیدکننده‌ها این امکان را می‌دهد تا از این طراحی‌ها استفاده کنند. از این‌رو پردازنده‌های ARM گوناگونی وجود دارند که هرکدام به روش متفاوتی کار می‌کنند.

به دلیل کاهش پیچیدگی واحدهای RISC برروی یک تراشه به ترانزیستورهای کمتری نیاز داریم. بطورکلی ترانزیستور بیش‌تر به معنای توان مصرفی بیش‌تر و ساختار پیچیده‌تر می‌باشد که در نتیجه باعث افزایش قیمت می‌شود.از این‌رو، میکروکنترلرهای ARM معمولاً ارزان قیمت‌تر از پردازنده‌های دسکتاپ سنتی هستند. 

در مقایسه با دیگر میکروکنترلرها، میکروکنترلر ARM به دلیل سرعت بالا، قیمت پایین، توان مصرفی کم، و تولید حرارت کم‌تر برای دستگاه‌های مبتنی بر باتری، سبک، قابل حمل، همانند تلفن‌های هوشمند، لپ‌تاپ‌ها و تبلت‌ها، همچنین سیستم‌های تعبیه‌شده مناسب است. با این وجود، میکروکنترلرهای ARM برای سرورها و دسکتاپ‌ها به ویژه اَبَر کامپیوترها نیز بکاربرده می‌شوند.
مزایای عمده پردازنده های ARM:
× دسترسی آسان در بازار
× تنوع سیستم های برای انواع کاربرد
× قیمت پایین
× توانایی پردازش بالا

#### Versions/Family
خانواده ARM به خانواده های متعددی تقسیم می شوند که به صورت پیوسته نام گذاری شده اند و از خانواده ARM1 تا ARM11 ادامه یافته و توسعه های بعدی با نام Cortext توسعه داده شده اند. هر خانواده جدید با معرفی پردازنده های جدید با بهبود طراحی، افزایش کارایی و ویژگی های جدید همراه می باشد.

https://en.wikipedia.org/wiki/ARM_architecture_family
https://en.wikipedia.org/wiki/List_of_ARM_processors
