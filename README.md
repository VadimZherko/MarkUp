Building the Project

This project is built using CMake and Qt6. Follow the instructions below to set up the environment and compile the project on different platforms.

Prerequisites

Before building the project, ensure you have the following installed:

CMake (version 3.16 or higher)

Qt6 (including Qt6 Widgets, Core, and Gui modules)

A C++ compiler (GCC, Clang, or MSVC)

Installing Dependencies

Linux (Ubuntu/Debian-based)

sudo apt install qt6-base-dev cmake g++

Arch Linux

sudo pacman -S qt6-base cmake gcc

MacOS

brew install qt cmake

Windows

Download and install Qt from qt.io.

Install CMake from cmake.org.

Ensure that the Qt installation directory is added to the PATH variable.

Building the Project

Clone the repository:

git clone https://github.com/your-username/your-project.git cd your-project

Create a build directory and configure the project:

cmake -B build

Compile the project:

cmake --build build

Running the Application

Once the build process is complete, you can run the application:

./build/MyApp # Linux & MacOS build\MyApp.exe # Windows

Alternative: Using vcpkg

If you prefer using vcpkg to manage dependencies, install Qt via vcpkg:

./vcpkg install qt6-base cmake -DCMAKE_TOOLCHAIN_FILE=/path/to/vcpkg.cmake -B build cmake --build build

Notes

If CMake fails to find Qt, specify the Qt installation path manually:

cmake -DCMAKE_PREFIX_PATH=/path/to/qt6 ..

Ensure that all required Qt modules are installed.

Let me know if you run into any issues!
