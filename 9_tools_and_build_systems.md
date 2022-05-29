### GNU Build system

In the Unix world, such a build system is traditionally achieved using the command `make` (see Overview in The GNU Make Manual). You express the recipe to build your package in a `Makefile`. This file is a set of rules to build the files in the package. For instance the program prog may be built by running the linker on the files `main.o`, `foo.o`, and `bar.o`; the file `main.o` may be built by running the compiler on `main.c`; etc. Each time make is run, it reads `Makefile`, checks the existence and modification time of the files mentioned, decides what files need to be built (or rebuilt), and runs the associated commands.

**When a package needs to be built on a different platform than the one it was developed on, its Makefile usually needs to be adjusted.** For instance the compiler may have another name or require more options. In 1991, David J. MacKenzie got tired of customizing Makefile for the 20 platforms he had to deal with. Instead, he handcrafted a little shell script called configure to automatically adjust the Makefile (see Genesis in The Autoconf Manual). Compiling his package was now as simple as running `./configure && make`. 


Today this process has been standardized in the GNU project. The GNU Coding Standards (see The Release Process in The GNU Coding Standards) explains how each package of the GNU project should have a configure script, and the minimal interface it should have. The Makefile too should follow some established conventions. The result? A unified build system that makes all packages almost indistinguishable by the installer. In its simplest scenario, all the installer has to do is to unpack the package, run `./configure && make && make install`, and repeat with the next package to install. 

We call this build system the GNU Build System, since it was grown out of the GNU project. However it is used by a vast number of other packages: following any existing convention has its advantages. 

The `Autotools` are tools that will create a GNU Build System for your package. `Autoconf` mostly focuses on configure and Automake on Makefiles. It is entirely possible to create a GNU Build System without the help of these tools. However it is rather burdensome and error-prone. We will discuss this again after some illustration of the GNU Build System in action. 

https://www.gnu.org/software/automake/manual/html_node/GNU-Build-System.html


#### A Small Hello World

https://www.gnu.org/software/automake/manual/html_node/Hello-World.html

---

### CMake

In software development, `CMake` is cross-platform free and open-source software for build automation, testing, packaging and installation of software by using a compiler-independent method.`CMake` is not a build system but rather it generates another system's build files. It supports directory hierarchies and applications that depend on multiple libraries. It is used in conjunction with native build environments such as `Make`, `Qt Creator`, `Ninja`, `Android Studio`, `Apple's Xcode`, and `Microsoft Visual Studio`. It has minimal dependencies, requiring only a C++ compiler on its own build system. 

