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
CMAKE_SOURCE_DIR = C:\Users\tangj\Desktop\coding\C-C-\C_C++\CLion_projects_B\Test_B

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\tangj\Desktop\coding\C-C-\C_C++\CLion_projects_B\Test_B\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/test_cv.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/test_cv.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test_cv.dir/flags.make

CMakeFiles/test_cv.dir/main.cpp.obj: CMakeFiles/test_cv.dir/flags.make
CMakeFiles/test_cv.dir/main.cpp.obj: CMakeFiles/test_cv.dir/includes_CXX.rsp
CMakeFiles/test_cv.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\tangj\Desktop\coding\C-C-\C_C++\CLion_projects_B\Test_B\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/test_cv.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\test_cv.dir\main.cpp.obj -c C:\Users\tangj\Desktop\coding\C-C-\C_C++\CLion_projects_B\Test_B\main.cpp

CMakeFiles/test_cv.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_cv.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\tangj\Desktop\coding\C-C-\C_C++\CLion_projects_B\Test_B\main.cpp > CMakeFiles\test_cv.dir\main.cpp.i

CMakeFiles/test_cv.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_cv.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\tangj\Desktop\coding\C-C-\C_C++\CLion_projects_B\Test_B\main.cpp -o CMakeFiles\test_cv.dir\main.cpp.s

# Object files for target test_cv
test_cv_OBJECTS = \
"CMakeFiles/test_cv.dir/main.cpp.obj"

# External object files for target test_cv
test_cv_EXTERNAL_OBJECTS =

test_cv.exe: CMakeFiles/test_cv.dir/main.cpp.obj
test_cv.exe: CMakeFiles/test_cv.dir/build.make
test_cv.exe: D:/opencv/mingw-build/install/x64/mingw/lib/libopencv_highgui412.dll.a
test_cv.exe: D:/opencv/mingw-build/install/x64/mingw/lib/libopencv_videoio412.dll.a
test_cv.exe: D:/opencv/mingw-build/install/x64/mingw/lib/libopencv_imgcodecs412.dll.a
test_cv.exe: D:/opencv/mingw-build/install/x64/mingw/lib/libopencv_imgproc412.dll.a
test_cv.exe: D:/opencv/mingw-build/install/x64/mingw/lib/libopencv_core412.dll.a
test_cv.exe: CMakeFiles/test_cv.dir/linklibs.rsp
test_cv.exe: CMakeFiles/test_cv.dir/objects1.rsp
test_cv.exe: CMakeFiles/test_cv.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\tangj\Desktop\coding\C-C-\C_C++\CLion_projects_B\Test_B\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable test_cv.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\test_cv.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test_cv.dir/build: test_cv.exe

.PHONY : CMakeFiles/test_cv.dir/build

CMakeFiles/test_cv.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\test_cv.dir\cmake_clean.cmake
.PHONY : CMakeFiles/test_cv.dir/clean

CMakeFiles/test_cv.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\tangj\Desktop\coding\C-C-\C_C++\CLion_projects_B\Test_B C:\Users\tangj\Desktop\coding\C-C-\C_C++\CLion_projects_B\Test_B C:\Users\tangj\Desktop\coding\C-C-\C_C++\CLion_projects_B\Test_B\cmake-build-debug C:\Users\tangj\Desktop\coding\C-C-\C_C++\CLion_projects_B\Test_B\cmake-build-debug C:\Users\tangj\Desktop\coding\C-C-\C_C++\CLion_projects_B\Test_B\cmake-build-debug\CMakeFiles\test_cv.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/test_cv.dir/depend
