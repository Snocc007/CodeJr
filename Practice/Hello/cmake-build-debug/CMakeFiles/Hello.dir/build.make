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
CMAKE_COMMAND = "/Applications/CLion 2020.2 EAP.app/Contents/bin/cmake/mac/bin/cmake"

# The command to remove a file.
RM = "/Applications/CLion 2020.2 EAP.app/Contents/bin/cmake/mac/bin/cmake" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/snocc/CodeJr/Practice/Hello

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/snocc/CodeJr/Practice/Hello/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Hello.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Hello.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Hello.dir/flags.make

CMakeFiles/Hello.dir/main.cpp.o: CMakeFiles/Hello.dir/flags.make
CMakeFiles/Hello.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/snocc/CodeJr/Practice/Hello/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Hello.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Hello.dir/main.cpp.o -c /Users/snocc/CodeJr/Practice/Hello/main.cpp

CMakeFiles/Hello.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Hello.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/snocc/CodeJr/Practice/Hello/main.cpp > CMakeFiles/Hello.dir/main.cpp.i

CMakeFiles/Hello.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Hello.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/snocc/CodeJr/Practice/Hello/main.cpp -o CMakeFiles/Hello.dir/main.cpp.s

CMakeFiles/Hello.dir/calc.cpp.o: CMakeFiles/Hello.dir/flags.make
CMakeFiles/Hello.dir/calc.cpp.o: ../calc.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/snocc/CodeJr/Practice/Hello/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Hello.dir/calc.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Hello.dir/calc.cpp.o -c /Users/snocc/CodeJr/Practice/Hello/calc.cpp

CMakeFiles/Hello.dir/calc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Hello.dir/calc.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/snocc/CodeJr/Practice/Hello/calc.cpp > CMakeFiles/Hello.dir/calc.cpp.i

CMakeFiles/Hello.dir/calc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Hello.dir/calc.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/snocc/CodeJr/Practice/Hello/calc.cpp -o CMakeFiles/Hello.dir/calc.cpp.s

# Object files for target Hello
Hello_OBJECTS = \
"CMakeFiles/Hello.dir/main.cpp.o" \
"CMakeFiles/Hello.dir/calc.cpp.o"

# External object files for target Hello
Hello_EXTERNAL_OBJECTS =

Hello: CMakeFiles/Hello.dir/main.cpp.o
Hello: CMakeFiles/Hello.dir/calc.cpp.o
Hello: CMakeFiles/Hello.dir/build.make
Hello: CMakeFiles/Hello.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/snocc/CodeJr/Practice/Hello/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Hello"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Hello.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Hello.dir/build: Hello

.PHONY : CMakeFiles/Hello.dir/build

CMakeFiles/Hello.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Hello.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Hello.dir/clean

CMakeFiles/Hello.dir/depend:
	cd /Users/snocc/CodeJr/Practice/Hello/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/snocc/CodeJr/Practice/Hello /Users/snocc/CodeJr/Practice/Hello /Users/snocc/CodeJr/Practice/Hello/cmake-build-debug /Users/snocc/CodeJr/Practice/Hello/cmake-build-debug /Users/snocc/CodeJr/Practice/Hello/cmake-build-debug/CMakeFiles/Hello.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Hello.dir/depend

