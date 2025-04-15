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
   git clone https://github.com/VadimZherko/MarkUp.git
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
./build/MarkUp  # Linux & MacOS
build\MarkUp.exe  # Windows
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

# Manual

This section describes the keyboard shortcuts available in the application and their respective functions.

## General Actions

| Shortcut     | Action           | Description |
|--------------|------------------|-------------|
| `Ctrl + L`   | **Load File**    | Load marks from a `.txt` file into the workspace. |
| `Ctrl + S`   | **Save File**    | Save all marks currently in the workspace to a `.txt` file. |
| `Ctrl + N`   | **Add Mark**     | Add a new mark to the workspace. |
| `Ctrl + >`   | **Rotate Mark**  | Rotate the selected mark by 90 degrees clockwise. |
| `Ctrl + X`   | **Move Mark(s)** | Move a selected mark or group of marks by a predefined offset. |

## Copying Marks

These shortcuts allow duplication of selected marks in the specified direction:

| Shortcut         | Action               | Description |
|------------------|----------------------|-------------|
| `↑ Up Arrow`     | **Copy Mark(s) Up**     | Copies the selected mark(s) upward. If one mark or one row is selected, a fixed Y and ID offset is applied. If multiple rows are selected, the offset is calculated dynamically. |
| `← Left Arrow`   | **Copy Mark(s) Left**   | Same as Up Arrow, but copies left. |
| `→ Right Arrow`  | **Copy Mark(s) Right**  | Same as Up Arrow, but copies right. |
| `↓ Down Arrow`   | **Copy Mark(s) Down**   | Same as Up Arrow, but copies down. |

## Deleting Marks

| Shortcut   | Action             | Description |
|------------|--------------------|-------------|
| `Delete`   | **Delete Mark(s)** | Removes the selected mark(s) from the workspace. |
