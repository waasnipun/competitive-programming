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
include CMakeFiles/permutations.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/permutations.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/permutations.dir/flags.make

CMakeFiles/permutations.dir/CSES/Introductory/permutations.cpp.o: CMakeFiles/permutations.dir/flags.make
CMakeFiles/permutations.dir/CSES/Introductory/permutations.cpp.o: ../CSES/Introductory/permutations.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/nipunwaas/Documents/competitive_programming/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/permutations.dir/CSES/Introductory/permutations.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/permutations.dir/CSES/Introductory/permutations.cpp.o -c /Users/nipunwaas/Documents/competitive_programming/CSES/Introductory/permutations.cpp

CMakeFiles/permutations.dir/CSES/Introductory/permutations.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/permutations.dir/CSES/Introductory/permutations.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/nipunwaas/Documents/competitive_programming/CSES/Introductory/permutations.cpp > CMakeFiles/permutations.dir/CSES/Introductory/permutations.cpp.i

CMakeFiles/permutations.dir/CSES/Introductory/permutations.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/permutations.dir/CSES/Introductory/permutations.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/nipunwaas/Documents/competitive_programming/CSES/Introductory/permutations.cpp -o CMakeFiles/permutations.dir/CSES/Introductory/permutations.cpp.s

# Object files for target permutations
permutations_OBJECTS = \
"CMakeFiles/permutations.dir/CSES/Introductory/permutations.cpp.o"

# External object files for target permutations
permutations_EXTERNAL_OBJECTS =

permutations: CMakeFiles/permutations.dir/CSES/Introductory/permutations.cpp.o
permutations: CMakeFiles/permutations.dir/build.make
permutations: CMakeFiles/permutations.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/nipunwaas/Documents/competitive_programming/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable permutations"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/permutations.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/permutations.dir/build: permutations
.PHONY : CMakeFiles/permutations.dir/build

CMakeFiles/permutations.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/permutations.dir/cmake_clean.cmake
.PHONY : CMakeFiles/permutations.dir/clean

CMakeFiles/permutations.dir/depend:
	cd /Users/nipunwaas/Documents/competitive_programming/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/nipunwaas/Documents/competitive_programming /Users/nipunwaas/Documents/competitive_programming /Users/nipunwaas/Documents/competitive_programming/cmake-build-debug /Users/nipunwaas/Documents/competitive_programming/cmake-build-debug /Users/nipunwaas/Documents/competitive_programming/cmake-build-debug/CMakeFiles/permutations.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/permutations.dir/depend

