# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\JETBRAINS_CLION\CLion 2019.2.5\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\JETBRAINS_CLION\CLion 2019.2.5\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\tangj\Desktop\Coding\C-C-\C_C++\CLion_projects\Project1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\tangj\Desktop\Coding\C-C-\C_C++\CLion_projects\Project1\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Project1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Project1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Project1.dir/flags.make

CMakeFiles/Project1.dir/main.c.obj: CMakeFiles/Project1.dir/flags.make
CMakeFiles/Project1.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\tangj\Desktop\Coding\C-C-\C_C++\CLion_projects\Project1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Project1.dir/main.c.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Project1.dir\main.c.obj   -c C:\Users\tangj\Desktop\Coding\C-C-\C_C++\CLion_projects\Project1\main.c

CMakeFiles/Project1.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Project1.dir/main.c.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\tangj\Desktop\Coding\C-C-\C_C++\CLion_projects\Project1\main.c > CMakeFiles\Project1.dir\main.c.i

CMakeFiles/Project1.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Project1.dir/main.c.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\tangj\Desktop\Coding\C-C-\C_C++\CLion_projects\Project1\main.c -o CMakeFiles\Project1.dir\main.c.s

# Object files for target Project1
Project1_OBJECTS = \
"CMakeFiles/Project1.dir/main.c.obj"

# External object files for target Project1
Project1_EXTERNAL_OBJECTS =

Project1.exe: CMakeFiles/Project1.dir/main.c.obj
Project1.exe: CMakeFiles/Project1.dir/build.make
Project1.exe: CMakeFiles/Project1.dir/linklibs.rsp
Project1.exe: CMakeFiles/Project1.dir/objects1.rsp
Project1.exe: CMakeFiles/Project1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\tangj\Desktop\Coding\C-C-\C_C++\CLion_projects\Project1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Project1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Project1.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Project1.dir/build: Project1.exe

.PHONY : CMakeFiles/Project1.dir/build

CMakeFiles/Project1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Project1.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Project1.dir/clean

CMakeFiles/Project1.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\tangj\Desktop\Coding\C-C-\C_C++\CLion_projects\Project1 C:\Users\tangj\Desktop\Coding\C-C-\C_C++\CLion_projects\Project1 C:\Users\tangj\Desktop\Coding\C-C-\C_C++\CLion_projects\Project1\cmake-build-debug C:\Users\tangj\Desktop\Coding\C-C-\C_C++\CLion_projects\Project1\cmake-build-debug C:\Users\tangj\Desktop\Coding\C-C-\C_C++\CLion_projects\Project1\cmake-build-debug\CMakeFiles\Project1.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Project1.dir/depend

