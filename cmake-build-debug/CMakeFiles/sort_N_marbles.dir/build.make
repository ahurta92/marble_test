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
CMAKE_COMMAND = /snap/clion/169/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/169/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/adrian/CLionProjects/marbles_lecture

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/adrian/CLionProjects/marbles_lecture/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/sort_N_marbles.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/sort_N_marbles.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sort_N_marbles.dir/flags.make

CMakeFiles/sort_N_marbles.dir/sort_N_marbles.cpp.o: CMakeFiles/sort_N_marbles.dir/flags.make
CMakeFiles/sort_N_marbles.dir/sort_N_marbles.cpp.o: ../sort_N_marbles.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/adrian/CLionProjects/marbles_lecture/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/sort_N_marbles.dir/sort_N_marbles.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sort_N_marbles.dir/sort_N_marbles.cpp.o -c /home/adrian/CLionProjects/marbles_lecture/sort_N_marbles.cpp

CMakeFiles/sort_N_marbles.dir/sort_N_marbles.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sort_N_marbles.dir/sort_N_marbles.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/adrian/CLionProjects/marbles_lecture/sort_N_marbles.cpp > CMakeFiles/sort_N_marbles.dir/sort_N_marbles.cpp.i

CMakeFiles/sort_N_marbles.dir/sort_N_marbles.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sort_N_marbles.dir/sort_N_marbles.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/adrian/CLionProjects/marbles_lecture/sort_N_marbles.cpp -o CMakeFiles/sort_N_marbles.dir/sort_N_marbles.cpp.s

# Object files for target sort_N_marbles
sort_N_marbles_OBJECTS = \
"CMakeFiles/sort_N_marbles.dir/sort_N_marbles.cpp.o"

# External object files for target sort_N_marbles
sort_N_marbles_EXTERNAL_OBJECTS =

sort_N_marbles: CMakeFiles/sort_N_marbles.dir/sort_N_marbles.cpp.o
sort_N_marbles: CMakeFiles/sort_N_marbles.dir/build.make
sort_N_marbles: CMakeFiles/sort_N_marbles.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/adrian/CLionProjects/marbles_lecture/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable sort_N_marbles"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sort_N_marbles.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/sort_N_marbles.dir/build: sort_N_marbles
.PHONY : CMakeFiles/sort_N_marbles.dir/build

CMakeFiles/sort_N_marbles.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/sort_N_marbles.dir/cmake_clean.cmake
.PHONY : CMakeFiles/sort_N_marbles.dir/clean

CMakeFiles/sort_N_marbles.dir/depend:
	cd /home/adrian/CLionProjects/marbles_lecture/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/adrian/CLionProjects/marbles_lecture /home/adrian/CLionProjects/marbles_lecture /home/adrian/CLionProjects/marbles_lecture/cmake-build-debug /home/adrian/CLionProjects/marbles_lecture/cmake-build-debug /home/adrian/CLionProjects/marbles_lecture/cmake-build-debug/CMakeFiles/sort_N_marbles.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/sort_N_marbles.dir/depend

