# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.31

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /snap/cmake/1445/bin/cmake

# The command to remove a file.
RM = /snap/cmake/1445/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/vadim/repository/tesk_cmake/qrhead

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/vadim/repository/tesk_cmake/qrhead/build

# Utility rule file for qrhead_autogen.

# Include any custom commands dependencies for this target.
include CMakeFiles/qrhead_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/qrhead_autogen.dir/progress.make

CMakeFiles/qrhead_autogen: qrhead_autogen/timestamp

qrhead_autogen/timestamp: /usr/lib/qt6/libexec/moc
qrhead_autogen/timestamp: /usr/lib/qt6/libexec/uic
qrhead_autogen/timestamp: CMakeFiles/qrhead_autogen.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/vadim/repository/tesk_cmake/qrhead/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target qrhead"
	/snap/cmake/1445/bin/cmake -E cmake_autogen /home/vadim/repository/tesk_cmake/qrhead/build/CMakeFiles/qrhead_autogen.dir/AutogenInfo.json ""
	/snap/cmake/1445/bin/cmake -E touch /home/vadim/repository/tesk_cmake/qrhead/build/qrhead_autogen/timestamp

CMakeFiles/qrhead_autogen.dir/codegen:
.PHONY : CMakeFiles/qrhead_autogen.dir/codegen

qrhead_autogen: CMakeFiles/qrhead_autogen
qrhead_autogen: qrhead_autogen/timestamp
qrhead_autogen: CMakeFiles/qrhead_autogen.dir/build.make
.PHONY : qrhead_autogen

# Rule to build all files generated by this target.
CMakeFiles/qrhead_autogen.dir/build: qrhead_autogen
.PHONY : CMakeFiles/qrhead_autogen.dir/build

CMakeFiles/qrhead_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/qrhead_autogen.dir/cmake_clean.cmake
.PHONY : CMakeFiles/qrhead_autogen.dir/clean

CMakeFiles/qrhead_autogen.dir/depend:
	cd /home/vadim/repository/tesk_cmake/qrhead/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/vadim/repository/tesk_cmake/qrhead /home/vadim/repository/tesk_cmake/qrhead /home/vadim/repository/tesk_cmake/qrhead/build /home/vadim/repository/tesk_cmake/qrhead/build /home/vadim/repository/tesk_cmake/qrhead/build/CMakeFiles/qrhead_autogen.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/qrhead_autogen.dir/depend

