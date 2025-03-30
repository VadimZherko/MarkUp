# Building the Project

This project is built using CMake and Qt6. Follow the instructions below to set up the environment and compile the project on different platforms.

## Prerequisites

Before building the project, ensure you have the following installed:

- CMake (version 3.16 or higher)
- Qt6 (including Qt6 Widgets, Core, and Gui modules)
- A C++ compiler (GCC, Clang, or MSVC)

## Installing Dependencies

### **Linux (Ubuntu/Debian-based)**
```sh
sudo apt update
sudo apt install qt6-base-dev cmake g++
```

### **Arch Linux**
```sh
sudo pacman -S qt6-base cmake gcc
```

### **MacOS**
```sh
brew install qt cmake
```

### **Windows**
1. Download and install Qt from [qt.io](https://www.qt.io/download-open-source).
2. Install CMake from [cmake.org](https://cmake.org/download/).
3. Ensure that the Qt installation directory is added to the `PATH` variable.

## Building the Project

1. Clone the repository:
   ```sh
   git clone https://github.com/your-username/your-project.git
   cd your-project
   ```

2. Create a build directory and configure the project:
   ```sh
   cmake -B build
   ```

3. Compile the project:
   ```sh
   cmake --build build
   ```

## Running the Application

Once the build process is complete, you can run the application:

```sh
./build/MyApp  # Linux & MacOS
build\MyApp.exe  # Windows
```

## Alternative: Using vcpkg
If you prefer using vcpkg to manage dependencies, install Qt via vcpkg:
```sh
./vcpkg install qt6-base
cmake -DCMAKE_TOOLCHAIN_FILE=/path/to/vcpkg.cmake -B build
cmake --build build
```

## Notes
- If CMake fails to find Qt, specify the Qt installation path manually:
  ```sh
  cmake -DCMAKE_PREFIX_PATH=/path/to/qt6 ..
  ```
- Ensure that all required Qt modules are installed.

Let me know if you run into any issues!

