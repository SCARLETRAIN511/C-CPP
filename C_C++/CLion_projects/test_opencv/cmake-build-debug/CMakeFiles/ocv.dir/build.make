# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.15

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.2.5\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.2.5\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\tangj\Desktop\coding\C-C-\C_C++\CLion_projects\test_opencv

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\tangj\Desktop\coding\C-C-\C_C++\CLion_projects\test_opencv\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\ocv.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\ocv.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\ocv.dir\flags.make

CMakeFiles\ocv.dir\main.cpp.obj: CMakeFiles\ocv.dir\flags.make
CMakeFiles\ocv.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\tangj\Desktop\coding\C-C-\C_C++\CLion_projects\test_opencv\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ocv.dir/main.cpp.obj"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1423~1.281\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\ocv.dir\main.cpp.obj /FdCMakeFiles\ocv.dir\ /FS -c C:\Users\tangj\Desktop\coding\C-C-\C_C++\CLion_projects\test_opencv\main.cpp
<<

CMakeFiles\ocv.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ocv.dir/main.cpp.i"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1423~1.281\bin\Hostx86\x86\cl.exe > CMakeFiles\ocv.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\tangj\Desktop\coding\C-C-\C_C++\CLion_projects\test_opencv\main.cpp
<<

CMakeFiles\ocv.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ocv.dir/main.cpp.s"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1423~1.281\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\ocv.dir\main.cpp.s /c C:\Users\tangj\Desktop\coding\C-C-\C_C++\CLion_projects\test_opencv\main.cpp
<<

# Object files for target ocv
ocv_OBJECTS = \
"CMakeFiles\ocv.dir\main.cpp.obj"

# External object files for target ocv
ocv_EXTERNAL_OBJECTS =

ocv.exe: CMakeFiles\ocv.dir\main.cpp.obj
ocv.exe: CMakeFiles\ocv.dir\build.make
ocv.exe: C:\Users\tangj\vcpkg\installed\x86-windows\lib\opencv_dnn.lib
ocv.exe: C:\Users\tangj\vcpkg\installed\x86-windows\lib\opencv_highgui.lib
ocv.exe: C:\Users\tangj\vcpkg\installed\x86-windows\lib\opencv_ml.lib
ocv.exe: C:\Users\tangj\vcpkg\installed\x86-windows\lib\opencv_objdetect.lib
ocv.exe: C:\Users\tangj\vcpkg\installed\x86-windows\lib\opencv_photo.lib
ocv.exe: C:\Users\tangj\vcpkg\installed\x86-windows\lib\opencv_stitching.lib
ocv.exe: C:\Users\tangj\vcpkg\installed\x86-windows\lib\opencv_video.lib
ocv.exe: C:\Users\tangj\vcpkg\installed\x86-windows\lib\opencv_videoio.lib
ocv.exe: C:\Users\tangj\vcpkg\installed\x86-windows\lib\opencv_imgcodecs.lib
ocv.exe: C:\Users\tangj\vcpkg\installed\x86-windows\lib\opencv_calib3d.lib
ocv.exe: C:\Users\tangj\vcpkg\installed\x86-windows\lib\opencv_features2d.lib
ocv.exe: C:\Users\tangj\vcpkg\installed\x86-windows\lib\opencv_flann.lib
ocv.exe: C:\Users\tangj\vcpkg\installed\x86-windows\lib\opencv_imgproc.lib
ocv.exe: C:\Users\tangj\vcpkg\installed\x86-windows\lib\opencv_core.lib
ocv.exe: CMakeFiles\ocv.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\tangj\Desktop\coding\C-C-\C_C++\CLion_projects\test_opencv\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ocv.exe"
	"C:\Program Files\JetBrains\CLion 2019.2.5\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\ocv.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\mt.exe --manifests  -- C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1423~1.281\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\ocv.dir\objects1.rsp @<<
 /out:ocv.exe /implib:ocv.lib /pdb:C:\Users\tangj\Desktop\coding\C-C-\C_C++\CLion_projects\test_opencv\cmake-build-debug\ocv.pdb /version:0.0  /machine:X86 /INCREMENTAL:NO /subsystem:console C:\Users\tangj\vcpkg\installed\x86-windows\lib\opencv_dnn.lib C:\Users\tangj\vcpkg\installed\x86-windows\lib\opencv_highgui.lib C:\Users\tangj\vcpkg\installed\x86-windows\lib\opencv_ml.lib C:\Users\tangj\vcpkg\installed\x86-windows\lib\opencv_objdetect.lib C:\Users\tangj\vcpkg\installed\x86-windows\lib\opencv_photo.lib C:\Users\tangj\vcpkg\installed\x86-windows\lib\opencv_stitching.lib C:\Users\tangj\vcpkg\installed\x86-windows\lib\opencv_video.lib C:\Users\tangj\vcpkg\installed\x86-windows\lib\opencv_videoio.lib C:\Users\tangj\vcpkg\installed\x86-windows\lib\opencv_imgcodecs.lib C:\Users\tangj\vcpkg\installed\x86-windows\lib\opencv_calib3d.lib C:\Users\tangj\vcpkg\installed\x86-windows\lib\opencv_features2d.lib C:\Users\tangj\vcpkg\installed\x86-windows\lib\opencv_flann.lib C:\Users\tangj\vcpkg\installed\x86-windows\lib\opencv_imgproc.lib C:\Users\tangj\vcpkg\installed\x86-windows\lib\opencv_core.lib kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<
	powershell -noprofile -executionpolicy Bypass -file C:/Users/tangj/vcpkg/scripts/buildsystems/msbuild/applocal.ps1 -targetBinary C:/Users/tangj/Desktop/coding/C-C-/C_C++/CLion_projects/test_opencv/cmake-build-debug/ocv.exe -installedDir C:/Users/tangj/vcpkg/installed/x86-windows/bin -OutVariable out

# Rule to build all files generated by this target.
CMakeFiles\ocv.dir\build: ocv.exe

.PHONY : CMakeFiles\ocv.dir\build

CMakeFiles\ocv.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\ocv.dir\cmake_clean.cmake
.PHONY : CMakeFiles\ocv.dir\clean

CMakeFiles\ocv.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\tangj\Desktop\coding\C-C-\C_C++\CLion_projects\test_opencv C:\Users\tangj\Desktop\coding\C-C-\C_C++\CLion_projects\test_opencv C:\Users\tangj\Desktop\coding\C-C-\C_C++\CLion_projects\test_opencv\cmake-build-debug C:\Users\tangj\Desktop\coding\C-C-\C_C++\CLion_projects\test_opencv\cmake-build-debug C:\Users\tangj\Desktop\coding\C-C-\C_C++\CLion_projects\test_opencv\cmake-build-debug\CMakeFiles\ocv.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\ocv.dir\depend

