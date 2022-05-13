
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

### Parts

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

### Cross Compile and native

