### Download

https://code.visualstudio.com/Download

### Install

#### Ubuntu: 

1.    
```bash
sudo dpkg -i xxxxx.deb
```

2. Install `cmake`, `cmake tools` and `C/C++ Extension`


3.    
```bash
sudo apt-get install make cmake build-essential
```

#### Windows

1. Install VSCode.
2. Install extensions: `cmake`, `cmake tools` and `C/C++ Extension`.
3. Install mingw: https://www.msys2.org/
4. Install mingw tools

```bash
pacman -S --needed base-devel mingw-w64-x86_64-toolchain
pacman -S mingw-w64-x86_64-cmake
pacman -S mingw-w64-x86_64-make
```

5. Add `C:\msys64\mingw64\bin` to env path.
6. Open `VSCode` and open the preferences `settings.json`
`ctrl+shift+p` --> `Preferences: Open Settings (JSON)`

7. Update like this:

```json
{
    "cmake.configureOnOpen": true,
    "cmake.cmakePath": "C:\\msys64\\mingw64\\bin\\cmake.exe",
    "code-runner.runInTerminal": true,
    "explorer.confirmDelete": false
}
```

8. Save, open project, build and run.



https://code.visualstudio.com/docs/cpp/config-mingw
