# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.26

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\MinGW\bin\cmake.exe

# The command to remove a file.
RM = C:\MinGW\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\PC\Documents\Code\Projects\LMS

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\PC\Documents\Code\Projects\LMS\build

# Include any dependencies generated for this target.
include CMakeFiles/LMS.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/LMS.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/LMS.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/LMS.dir/flags.make

CMakeFiles/LMS.dir/main.cpp.obj: CMakeFiles/LMS.dir/flags.make
CMakeFiles/LMS.dir/main.cpp.obj: C:/Users/PC/Documents/Code/Projects/LMS/main.cpp
CMakeFiles/LMS.dir/main.cpp.obj: CMakeFiles/LMS.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\PC\Documents\Code\Projects\LMS\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/LMS.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/LMS.dir/main.cpp.obj -MF CMakeFiles\LMS.dir\main.cpp.obj.d -o CMakeFiles\LMS.dir\main.cpp.obj -c C:\Users\PC\Documents\Code\Projects\LMS\main.cpp

CMakeFiles/LMS.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LMS.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\PC\Documents\Code\Projects\LMS\main.cpp > CMakeFiles\LMS.dir\main.cpp.i

CMakeFiles/LMS.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LMS.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\PC\Documents\Code\Projects\LMS\main.cpp -o CMakeFiles\LMS.dir\main.cpp.s

CMakeFiles/LMS.dir/books.cpp.obj: CMakeFiles/LMS.dir/flags.make
CMakeFiles/LMS.dir/books.cpp.obj: C:/Users/PC/Documents/Code/Projects/LMS/books.cpp
CMakeFiles/LMS.dir/books.cpp.obj: CMakeFiles/LMS.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\PC\Documents\Code\Projects\LMS\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/LMS.dir/books.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/LMS.dir/books.cpp.obj -MF CMakeFiles\LMS.dir\books.cpp.obj.d -o CMakeFiles\LMS.dir\books.cpp.obj -c C:\Users\PC\Documents\Code\Projects\LMS\books.cpp

CMakeFiles/LMS.dir/books.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LMS.dir/books.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\PC\Documents\Code\Projects\LMS\books.cpp > CMakeFiles\LMS.dir\books.cpp.i

CMakeFiles/LMS.dir/books.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LMS.dir/books.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\PC\Documents\Code\Projects\LMS\books.cpp -o CMakeFiles\LMS.dir\books.cpp.s

# Object files for target LMS
LMS_OBJECTS = \
"CMakeFiles/LMS.dir/main.cpp.obj" \
"CMakeFiles/LMS.dir/books.cpp.obj"

# External object files for target LMS
LMS_EXTERNAL_OBJECTS =

LMS.exe: CMakeFiles/LMS.dir/main.cpp.obj
LMS.exe: CMakeFiles/LMS.dir/books.cpp.obj
LMS.exe: CMakeFiles/LMS.dir/build.make
LMS.exe: CMakeFiles/LMS.dir/linkLibs.rsp
LMS.exe: CMakeFiles/LMS.dir/objects1.rsp
LMS.exe: CMakeFiles/LMS.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\PC\Documents\Code\Projects\LMS\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable LMS.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\LMS.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/LMS.dir/build: LMS.exe
.PHONY : CMakeFiles/LMS.dir/build

CMakeFiles/LMS.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\LMS.dir\cmake_clean.cmake
.PHONY : CMakeFiles/LMS.dir/clean

CMakeFiles/LMS.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\PC\Documents\Code\Projects\LMS C:\Users\PC\Documents\Code\Projects\LMS C:\Users\PC\Documents\Code\Projects\LMS\build C:\Users\PC\Documents\Code\Projects\LMS\build C:\Users\PC\Documents\Code\Projects\LMS\build\CMakeFiles\LMS.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/LMS.dir/depend

