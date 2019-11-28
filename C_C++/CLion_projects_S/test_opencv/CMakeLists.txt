cmake_minimum_required(VERSION 3.10)
project(ocv)
set(CMAKE_BUILD_TYPE Release)
set(CMAKE_TOOLCHAIN_FILE C:/Users/tangj/vcpkg/scripts/buildsystems/vcpkg.cmake)

find_package(opencv)
set(CMAKE_CXX_STANDARD 11)
add_executable(ocv main.cpp)
target_link_libraries(ocv ${OpenCV_LIBS})
