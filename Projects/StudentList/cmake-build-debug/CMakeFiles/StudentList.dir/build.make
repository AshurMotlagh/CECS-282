# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = K:\Toolbox\apps\CLion\ch-0\203.7717.62\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = K:\Toolbox\apps\CLion\ch-0\203.7717.62\bin\cmake\win\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = K:\Projects\Clion\CECS-282\Projects\StudentList

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = K:\Projects\Clion\CECS-282\Projects\StudentList\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/StudentList.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/StudentList.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/StudentList.dir/flags.make

CMakeFiles/StudentList.dir/main.cpp.obj: CMakeFiles/StudentList.dir/flags.make
CMakeFiles/StudentList.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=K:\Projects\Clion\CECS-282\Projects\StudentList\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/StudentList.dir/main.cpp.obj"
	K:\ProgramFiles\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\StudentList.dir\main.cpp.obj -c K:\Projects\Clion\CECS-282\Projects\StudentList\main.cpp

CMakeFiles/StudentList.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/StudentList.dir/main.cpp.i"
	K:\ProgramFiles\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E K:\Projects\Clion\CECS-282\Projects\StudentList\main.cpp > CMakeFiles\StudentList.dir\main.cpp.i

CMakeFiles/StudentList.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/StudentList.dir/main.cpp.s"
	K:\ProgramFiles\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S K:\Projects\Clion\CECS-282\Projects\StudentList\main.cpp -o CMakeFiles\StudentList.dir\main.cpp.s

CMakeFiles/StudentList.dir/myDate.cpp.obj: CMakeFiles/StudentList.dir/flags.make
CMakeFiles/StudentList.dir/myDate.cpp.obj: ../myDate.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=K:\Projects\Clion\CECS-282\Projects\StudentList\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/StudentList.dir/myDate.cpp.obj"
	K:\ProgramFiles\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\StudentList.dir\myDate.cpp.obj -c K:\Projects\Clion\CECS-282\Projects\StudentList\myDate.cpp

CMakeFiles/StudentList.dir/myDate.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/StudentList.dir/myDate.cpp.i"
	K:\ProgramFiles\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E K:\Projects\Clion\CECS-282\Projects\StudentList\myDate.cpp > CMakeFiles\StudentList.dir\myDate.cpp.i

CMakeFiles/StudentList.dir/myDate.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/StudentList.dir/myDate.cpp.s"
	K:\ProgramFiles\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S K:\Projects\Clion\CECS-282\Projects\StudentList\myDate.cpp -o CMakeFiles\StudentList.dir\myDate.cpp.s

# Object files for target StudentList
StudentList_OBJECTS = \
"CMakeFiles/StudentList.dir/main.cpp.obj" \
"CMakeFiles/StudentList.dir/myDate.cpp.obj"

# External object files for target StudentList
StudentList_EXTERNAL_OBJECTS =

StudentList.exe: CMakeFiles/StudentList.dir/main.cpp.obj
StudentList.exe: CMakeFiles/StudentList.dir/myDate.cpp.obj
StudentList.exe: CMakeFiles/StudentList.dir/build.make
StudentList.exe: CMakeFiles/StudentList.dir/linklibs.rsp
StudentList.exe: CMakeFiles/StudentList.dir/objects1.rsp
StudentList.exe: CMakeFiles/StudentList.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=K:\Projects\Clion\CECS-282\Projects\StudentList\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable StudentList.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\StudentList.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/StudentList.dir/build: StudentList.exe

.PHONY : CMakeFiles/StudentList.dir/build

CMakeFiles/StudentList.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\StudentList.dir\cmake_clean.cmake
.PHONY : CMakeFiles/StudentList.dir/clean

CMakeFiles/StudentList.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" K:\Projects\Clion\CECS-282\Projects\StudentList K:\Projects\Clion\CECS-282\Projects\StudentList K:\Projects\Clion\CECS-282\Projects\StudentList\cmake-build-debug K:\Projects\Clion\CECS-282\Projects\StudentList\cmake-build-debug K:\Projects\Clion\CECS-282\Projects\StudentList\cmake-build-debug\CMakeFiles\StudentList.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/StudentList.dir/depend

