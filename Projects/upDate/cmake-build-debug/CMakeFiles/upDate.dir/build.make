# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = K:\Toolbox\apps\CLion\ch-0\211.6693.114\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = K:\Toolbox\apps\CLion\ch-0\211.6693.114\bin\cmake\win\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = K:\Projects\Clion\CECS-282\Projects\upDate

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = K:\Projects\Clion\CECS-282\Projects\upDate\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/upDate.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/upDate.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/upDate.dir/flags.make

CMakeFiles/upDate.dir/main.cpp.obj: CMakeFiles/upDate.dir/flags.make
CMakeFiles/upDate.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=K:\Projects\Clion\CECS-282\Projects\upDate\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/upDate.dir/main.cpp.obj"
	K:\ProgramFiles\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\upDate.dir\main.cpp.obj -c K:\Projects\Clion\CECS-282\Projects\upDate\main.cpp

CMakeFiles/upDate.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/upDate.dir/main.cpp.i"
	K:\ProgramFiles\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E K:\Projects\Clion\CECS-282\Projects\upDate\main.cpp > CMakeFiles\upDate.dir\main.cpp.i

CMakeFiles/upDate.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/upDate.dir/main.cpp.s"
	K:\ProgramFiles\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S K:\Projects\Clion\CECS-282\Projects\upDate\main.cpp -o CMakeFiles\upDate.dir\main.cpp.s

CMakeFiles/upDate.dir/upDate.cpp.obj: CMakeFiles/upDate.dir/flags.make
CMakeFiles/upDate.dir/upDate.cpp.obj: ../upDate.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=K:\Projects\Clion\CECS-282\Projects\upDate\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/upDate.dir/upDate.cpp.obj"
	K:\ProgramFiles\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\upDate.dir\upDate.cpp.obj -c K:\Projects\Clion\CECS-282\Projects\upDate\upDate.cpp

CMakeFiles/upDate.dir/upDate.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/upDate.dir/upDate.cpp.i"
	K:\ProgramFiles\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E K:\Projects\Clion\CECS-282\Projects\upDate\upDate.cpp > CMakeFiles\upDate.dir\upDate.cpp.i

CMakeFiles/upDate.dir/upDate.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/upDate.dir/upDate.cpp.s"
	K:\ProgramFiles\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S K:\Projects\Clion\CECS-282\Projects\upDate\upDate.cpp -o CMakeFiles\upDate.dir\upDate.cpp.s

# Object files for target upDate
upDate_OBJECTS = \
"CMakeFiles/upDate.dir/main.cpp.obj" \
"CMakeFiles/upDate.dir/upDate.cpp.obj"

# External object files for target upDate
upDate_EXTERNAL_OBJECTS =

upDate.exe: CMakeFiles/upDate.dir/main.cpp.obj
upDate.exe: CMakeFiles/upDate.dir/upDate.cpp.obj
upDate.exe: CMakeFiles/upDate.dir/build.make
upDate.exe: CMakeFiles/upDate.dir/linklibs.rsp
upDate.exe: CMakeFiles/upDate.dir/objects1.rsp
upDate.exe: CMakeFiles/upDate.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=K:\Projects\Clion\CECS-282\Projects\upDate\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable upDate.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\upDate.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/upDate.dir/build: upDate.exe

.PHONY : CMakeFiles/upDate.dir/build

CMakeFiles/upDate.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\upDate.dir\cmake_clean.cmake
.PHONY : CMakeFiles/upDate.dir/clean

CMakeFiles/upDate.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" K:\Projects\Clion\CECS-282\Projects\upDate K:\Projects\Clion\CECS-282\Projects\upDate K:\Projects\Clion\CECS-282\Projects\upDate\cmake-build-debug K:\Projects\Clion\CECS-282\Projects\upDate\cmake-build-debug K:\Projects\Clion\CECS-282\Projects\upDate\cmake-build-debug\CMakeFiles\upDate.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/upDate.dir/depend

