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
CMAKE_COMMAND = "D:\Clion\CLion 2019.2.5\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Clion\CLion 2019.2.5\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\tangj\Desktop\coding\C-C-\C_C++\CLion_projects_B\TestB

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\tangj\Desktop\coding\C-C-\C_C++\CLion_projects_B\TestB\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Test_B.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Test_B.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Test_B.dir/flags.make

CMakeFiles/Test_B.dir/main.cpp.obj: CMakeFiles/Test_B.dir/flags.make
CMakeFiles/Test_B.dir/main.cpp.obj: CMakeFiles/Test_B.dir/includes_CXX.rsp
CMakeFiles/Test_B.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\tangj\Desktop\coding\C-C-\C_C++\CLion_projects_B\TestB\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Test_B.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Test_B.dir\main.cpp.obj -c C:\Users\tangj\Desktop\coding\C-C-\C_C++\CLion_projects_B\TestB\main.cpp

CMakeFiles/Test_B.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Test_B.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\tangj\Desktop\coding\C-C-\C_C++\CLion_projects_B\TestB\main.cpp > CMakeFiles\Test_B.dir\main.cpp.i

CMakeFiles/Test_B.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Test_B.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\tangj\Desktop\coding\C-C-\C_C++\CLion_projects_B\TestB\main.cpp -o CMakeFiles\Test_B.dir\main.cpp.s

# Object files for target Test_B
Test_B_OBJECTS = \
"CMakeFiles/Test_B.dir/main.cpp.obj"

# External object files for target Test_B
Test_B_EXTERNAL_OBJECTS =

Test_B.exe: CMakeFiles/Test_B.dir/main.cpp.obj
Test_B.exe: CMakeFiles/Test_B.dir/build.make
Test_B.exe: D:/opencv/mingw-build/lib/libopencv_highgui320.dll.a
Test_B.exe: D:/opencv/mingw-build/lib/libopencv_imgcodecs320.dll.a
Test_B.exe: D:/opencv/mingw-build/lib/libopencv_imgproc320.dll.a
Test_B.exe: D:/opencv/mingw-build/lib/libopencv_core320.dll.a
Test_B.exe: CMakeFiles/Test_B.dir/linklibs.rsp
Test_B.exe: CMakeFiles/Test_B.dir/objects1.rsp
Test_B.exe: CMakeFiles/Test_B.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\tangj\Desktop\coding\C-C-\C_C++\CLion_projects_B\TestB\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Test_B.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Test_B.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Test_B.dir/build: Test_B.exe

.PHONY : CMakeFiles/Test_B.dir/build

CMakeFiles/Test_B.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Test_B.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Test_B.dir/clean

CMakeFiles/Test_B.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\tangj\Desktop\coding\C-C-\C_C++\CLion_projects_B\TestB C:\Users\tangj\Desktop\coding\C-C-\C_C++\CLion_projects_B\TestB C:\Users\tangj\Desktop\coding\C-C-\C_C++\CLion_projects_B\TestB\cmake-build-debug C:\Users\tangj\Desktop\coding\C-C-\C_C++\CLion_projects_B\TestB\cmake-build-debug C:\Users\tangj\Desktop\coding\C-C-\C_C++\CLion_projects_B\TestB\cmake-build-debug\CMakeFiles\Test_B.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Test_B.dir/depend

