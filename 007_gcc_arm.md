### Download

https://releases.linaro.org/components/toolchain/binaries/latest-7/

### Install

1. Extract the toolchain like this:

```bash
sudo tar -xvf gcc-linaro-7.5.0-2019.12-x86_64_arm-linux-gnueabihf.tar.xz -C /opt/
```

2. Update `PATH` env variable in `~/.bashrc`

```bash
nano ~/.bashrc
```

add this line end of the file:

```
PATH=$PATH:"PATH_TO_THE_GCC_DIRECTORY/bin"
```

3. Update

```bash
source ~/.bashrc`
```

4. Check the `PATH` env variable for sure:
```bash
echo $PATH
```
### Build simple main.cpp

[examples](./003_cpp_examples.md)

### Using in the VSCode

1. Open `VSCode`
2. Click on Kit Options
3. `Scan for kits`
4. New toolchain should be appeared.
5. Select it.
6. Build the project.

### Build CMake Project in Shell

1. Close the project.
2. Change directory to the project path.
3. `mkdir build` (optional)
4. `cd build`.
5. `cmake ..`
6. `make`.
7. `sudo make install` (if needed)
8. Done