# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/sebas/projects/cpp/reflect

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/sebas/projects/cpp/reflect/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/reflect.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/reflect.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/reflect.dir/flags.make

CMakeFiles/reflect.dir/src/main.cpp.o: CMakeFiles/reflect.dir/flags.make
CMakeFiles/reflect.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sebas/projects/cpp/reflect/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/reflect.dir/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/reflect.dir/src/main.cpp.o -c /home/sebas/projects/cpp/reflect/src/main.cpp

CMakeFiles/reflect.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/reflect.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sebas/projects/cpp/reflect/src/main.cpp > CMakeFiles/reflect.dir/src/main.cpp.i

CMakeFiles/reflect.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/reflect.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sebas/projects/cpp/reflect/src/main.cpp -o CMakeFiles/reflect.dir/src/main.cpp.s

# Object files for target reflect
reflect_OBJECTS = \
"CMakeFiles/reflect.dir/src/main.cpp.o"

# External object files for target reflect
reflect_EXTERNAL_OBJECTS =

reflect: CMakeFiles/reflect.dir/src/main.cpp.o
reflect: CMakeFiles/reflect.dir/build.make
reflect: CMakeFiles/reflect.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/sebas/projects/cpp/reflect/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable reflect"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/reflect.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/reflect.dir/build: reflect

.PHONY : CMakeFiles/reflect.dir/build

CMakeFiles/reflect.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/reflect.dir/cmake_clean.cmake
.PHONY : CMakeFiles/reflect.dir/clean

CMakeFiles/reflect.dir/depend:
	cd /home/sebas/projects/cpp/reflect/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sebas/projects/cpp/reflect /home/sebas/projects/cpp/reflect /home/sebas/projects/cpp/reflect/cmake-build-debug /home/sebas/projects/cpp/reflect/cmake-build-debug /home/sebas/projects/cpp/reflect/cmake-build-debug/CMakeFiles/reflect.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/reflect.dir/depend
