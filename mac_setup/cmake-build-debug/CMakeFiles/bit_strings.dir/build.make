# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/nipunwaas/Documents/competitive_programming

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/nipunwaas/Documents/competitive_programming/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/bit_strings.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/bit_strings.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/bit_strings.dir/flags.make

CMakeFiles/bit_strings.dir/CSES/Introductory/bit_strings.cpp.o: CMakeFiles/bit_strings.dir/flags.make
CMakeFiles/bit_strings.dir/CSES/Introductory/bit_strings.cpp.o: ../CSES/Introductory/bit_strings.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/nipunwaas/Documents/competitive_programming/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/bit_strings.dir/CSES/Introductory/bit_strings.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/bit_strings.dir/CSES/Introductory/bit_strings.cpp.o -c /Users/nipunwaas/Documents/competitive_programming/CSES/Introductory/bit_strings.cpp

CMakeFiles/bit_strings.dir/CSES/Introductory/bit_strings.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bit_strings.dir/CSES/Introductory/bit_strings.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/nipunwaas/Documents/competitive_programming/CSES/Introductory/bit_strings.cpp > CMakeFiles/bit_strings.dir/CSES/Introductory/bit_strings.cpp.i

CMakeFiles/bit_strings.dir/CSES/Introductory/bit_strings.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bit_strings.dir/CSES/Introductory/bit_strings.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/nipunwaas/Documents/competitive_programming/CSES/Introductory/bit_strings.cpp -o CMakeFiles/bit_strings.dir/CSES/Introductory/bit_strings.cpp.s

# Object files for target bit_strings
bit_strings_OBJECTS = \
"CMakeFiles/bit_strings.dir/CSES/Introductory/bit_strings.cpp.o"

# External object files for target bit_strings
bit_strings_EXTERNAL_OBJECTS =

bit_strings: CMakeFiles/bit_strings.dir/CSES/Introductory/bit_strings.cpp.o
bit_strings: CMakeFiles/bit_strings.dir/build.make
bit_strings: CMakeFiles/bit_strings.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/nipunwaas/Documents/competitive_programming/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable bit_strings"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/bit_strings.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/bit_strings.dir/build: bit_strings
.PHONY : CMakeFiles/bit_strings.dir/build

CMakeFiles/bit_strings.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/bit_strings.dir/cmake_clean.cmake
.PHONY : CMakeFiles/bit_strings.dir/clean

CMakeFiles/bit_strings.dir/depend:
	cd /Users/nipunwaas/Documents/competitive_programming/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/nipunwaas/Documents/competitive_programming /Users/nipunwaas/Documents/competitive_programming /Users/nipunwaas/Documents/competitive_programming/cmake-build-debug /Users/nipunwaas/Documents/competitive_programming/cmake-build-debug /Users/nipunwaas/Documents/competitive_programming/cmake-build-debug/CMakeFiles/bit_strings.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/bit_strings.dir/depend

