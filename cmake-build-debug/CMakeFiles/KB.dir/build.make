# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.6

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
CMAKE_COMMAND = /home/sdeguchi/IDE/clion-2016.3.2/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/sdeguchi/IDE/clion-2016.3.2/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/sdeguchi/ClionProjects/KB

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/sdeguchi/ClionProjects/KB/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/KB.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/KB.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/KB.dir/flags.make

CMakeFiles/KB.dir/main.cpp.o: CMakeFiles/KB.dir/flags.make
CMakeFiles/KB.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sdeguchi/ClionProjects/KB/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/KB.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/KB.dir/main.cpp.o -c /home/sdeguchi/ClionProjects/KB/main.cpp

CMakeFiles/KB.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/KB.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sdeguchi/ClionProjects/KB/main.cpp > CMakeFiles/KB.dir/main.cpp.i

CMakeFiles/KB.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/KB.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sdeguchi/ClionProjects/KB/main.cpp -o CMakeFiles/KB.dir/main.cpp.s

CMakeFiles/KB.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/KB.dir/main.cpp.o.requires

CMakeFiles/KB.dir/main.cpp.o.provides: CMakeFiles/KB.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/KB.dir/build.make CMakeFiles/KB.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/KB.dir/main.cpp.o.provides

CMakeFiles/KB.dir/main.cpp.o.provides.build: CMakeFiles/KB.dir/main.cpp.o


CMakeFiles/KB.dir/Movie.cpp.o: CMakeFiles/KB.dir/flags.make
CMakeFiles/KB.dir/Movie.cpp.o: ../Movie.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sdeguchi/ClionProjects/KB/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/KB.dir/Movie.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/KB.dir/Movie.cpp.o -c /home/sdeguchi/ClionProjects/KB/Movie.cpp

CMakeFiles/KB.dir/Movie.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/KB.dir/Movie.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sdeguchi/ClionProjects/KB/Movie.cpp > CMakeFiles/KB.dir/Movie.cpp.i

CMakeFiles/KB.dir/Movie.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/KB.dir/Movie.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sdeguchi/ClionProjects/KB/Movie.cpp -o CMakeFiles/KB.dir/Movie.cpp.s

CMakeFiles/KB.dir/Movie.cpp.o.requires:

.PHONY : CMakeFiles/KB.dir/Movie.cpp.o.requires

CMakeFiles/KB.dir/Movie.cpp.o.provides: CMakeFiles/KB.dir/Movie.cpp.o.requires
	$(MAKE) -f CMakeFiles/KB.dir/build.make CMakeFiles/KB.dir/Movie.cpp.o.provides.build
.PHONY : CMakeFiles/KB.dir/Movie.cpp.o.provides

CMakeFiles/KB.dir/Movie.cpp.o.provides.build: CMakeFiles/KB.dir/Movie.cpp.o


CMakeFiles/KB.dir/Actor.cpp.o: CMakeFiles/KB.dir/flags.make
CMakeFiles/KB.dir/Actor.cpp.o: ../Actor.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sdeguchi/ClionProjects/KB/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/KB.dir/Actor.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/KB.dir/Actor.cpp.o -c /home/sdeguchi/ClionProjects/KB/Actor.cpp

CMakeFiles/KB.dir/Actor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/KB.dir/Actor.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sdeguchi/ClionProjects/KB/Actor.cpp > CMakeFiles/KB.dir/Actor.cpp.i

CMakeFiles/KB.dir/Actor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/KB.dir/Actor.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sdeguchi/ClionProjects/KB/Actor.cpp -o CMakeFiles/KB.dir/Actor.cpp.s

CMakeFiles/KB.dir/Actor.cpp.o.requires:

.PHONY : CMakeFiles/KB.dir/Actor.cpp.o.requires

CMakeFiles/KB.dir/Actor.cpp.o.provides: CMakeFiles/KB.dir/Actor.cpp.o.requires
	$(MAKE) -f CMakeFiles/KB.dir/build.make CMakeFiles/KB.dir/Actor.cpp.o.provides.build
.PHONY : CMakeFiles/KB.dir/Actor.cpp.o.provides

CMakeFiles/KB.dir/Actor.cpp.o.provides.build: CMakeFiles/KB.dir/Actor.cpp.o


CMakeFiles/KB.dir/Graph.cpp.o: CMakeFiles/KB.dir/flags.make
CMakeFiles/KB.dir/Graph.cpp.o: ../Graph.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sdeguchi/ClionProjects/KB/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/KB.dir/Graph.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/KB.dir/Graph.cpp.o -c /home/sdeguchi/ClionProjects/KB/Graph.cpp

CMakeFiles/KB.dir/Graph.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/KB.dir/Graph.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sdeguchi/ClionProjects/KB/Graph.cpp > CMakeFiles/KB.dir/Graph.cpp.i

CMakeFiles/KB.dir/Graph.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/KB.dir/Graph.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sdeguchi/ClionProjects/KB/Graph.cpp -o CMakeFiles/KB.dir/Graph.cpp.s

CMakeFiles/KB.dir/Graph.cpp.o.requires:

.PHONY : CMakeFiles/KB.dir/Graph.cpp.o.requires

CMakeFiles/KB.dir/Graph.cpp.o.provides: CMakeFiles/KB.dir/Graph.cpp.o.requires
	$(MAKE) -f CMakeFiles/KB.dir/build.make CMakeFiles/KB.dir/Graph.cpp.o.provides.build
.PHONY : CMakeFiles/KB.dir/Graph.cpp.o.provides

CMakeFiles/KB.dir/Graph.cpp.o.provides.build: CMakeFiles/KB.dir/Graph.cpp.o


CMakeFiles/KB.dir/MovieTree.cpp.o: CMakeFiles/KB.dir/flags.make
CMakeFiles/KB.dir/MovieTree.cpp.o: ../MovieTree.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sdeguchi/ClionProjects/KB/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/KB.dir/MovieTree.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/KB.dir/MovieTree.cpp.o -c /home/sdeguchi/ClionProjects/KB/MovieTree.cpp

CMakeFiles/KB.dir/MovieTree.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/KB.dir/MovieTree.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sdeguchi/ClionProjects/KB/MovieTree.cpp > CMakeFiles/KB.dir/MovieTree.cpp.i

CMakeFiles/KB.dir/MovieTree.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/KB.dir/MovieTree.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sdeguchi/ClionProjects/KB/MovieTree.cpp -o CMakeFiles/KB.dir/MovieTree.cpp.s

CMakeFiles/KB.dir/MovieTree.cpp.o.requires:

.PHONY : CMakeFiles/KB.dir/MovieTree.cpp.o.requires

CMakeFiles/KB.dir/MovieTree.cpp.o.provides: CMakeFiles/KB.dir/MovieTree.cpp.o.requires
	$(MAKE) -f CMakeFiles/KB.dir/build.make CMakeFiles/KB.dir/MovieTree.cpp.o.provides.build
.PHONY : CMakeFiles/KB.dir/MovieTree.cpp.o.provides

CMakeFiles/KB.dir/MovieTree.cpp.o.provides.build: CMakeFiles/KB.dir/MovieTree.cpp.o


# Object files for target KB
KB_OBJECTS = \
"CMakeFiles/KB.dir/main.cpp.o" \
"CMakeFiles/KB.dir/Movie.cpp.o" \
"CMakeFiles/KB.dir/Actor.cpp.o" \
"CMakeFiles/KB.dir/Graph.cpp.o" \
"CMakeFiles/KB.dir/MovieTree.cpp.o"

# External object files for target KB
KB_EXTERNAL_OBJECTS =

KB: CMakeFiles/KB.dir/main.cpp.o
KB: CMakeFiles/KB.dir/Movie.cpp.o
KB: CMakeFiles/KB.dir/Actor.cpp.o
KB: CMakeFiles/KB.dir/Graph.cpp.o
KB: CMakeFiles/KB.dir/MovieTree.cpp.o
KB: CMakeFiles/KB.dir/build.make
KB: CMakeFiles/KB.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/sdeguchi/ClionProjects/KB/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable KB"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/KB.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/KB.dir/build: KB

.PHONY : CMakeFiles/KB.dir/build

CMakeFiles/KB.dir/requires: CMakeFiles/KB.dir/main.cpp.o.requires
CMakeFiles/KB.dir/requires: CMakeFiles/KB.dir/Movie.cpp.o.requires
CMakeFiles/KB.dir/requires: CMakeFiles/KB.dir/Actor.cpp.o.requires
CMakeFiles/KB.dir/requires: CMakeFiles/KB.dir/Graph.cpp.o.requires
CMakeFiles/KB.dir/requires: CMakeFiles/KB.dir/MovieTree.cpp.o.requires

.PHONY : CMakeFiles/KB.dir/requires

CMakeFiles/KB.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/KB.dir/cmake_clean.cmake
.PHONY : CMakeFiles/KB.dir/clean

CMakeFiles/KB.dir/depend:
	cd /home/sdeguchi/ClionProjects/KB/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sdeguchi/ClionProjects/KB /home/sdeguchi/ClionProjects/KB /home/sdeguchi/ClionProjects/KB/cmake-build-debug /home/sdeguchi/ClionProjects/KB/cmake-build-debug /home/sdeguchi/ClionProjects/KB/cmake-build-debug/CMakeFiles/KB.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/KB.dir/depend

