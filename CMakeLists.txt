cmake_minimum_required(VERSION 2.8)
project(ZeroFusion)


# Force using C++11
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -fPIC")

find_package (Boost REQUIRED)
find_package (OpenCV REQUIRED)
find_package (OpenGL REQUIRED)
find_package (GLEW REQUIRED)
find_package (BLAS REQUIRED)
find_package (LAPACK REQUIRED)
find_package (GLUT REQUIRED)
find_package (OpenMP)
find_package (PkgConfig)
find_package (PCL 1.8 REQUIRED)
find_package (Pangolin REQUIRED)
#find_package (PythonLibs REQUIRED)
find_package (X11 REQUIRED)
pkg_search_module(Eigen3 REQUIRED eigen3)
find_package(dlib REQUIRED)
find_package(cppzmq)


set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)

set(PCL_INCLUDE_DIRS /usr/local/include/pcl-1.8)
set(GLEW_INCLUDE_DIR, "/usr/include/GL")
set(GLEW_LIBRARY, "/usr/lib64/")
set(Boost_USE_STATIC_LIBS ON)
set(Boost_USE_MULTITHREADED ON)
ADD_DEFINITIONS(-DBoost_USE_STATIC_LIBS=ON)
set(Boost_INCLUDE_DIR /usr/include/)
set(Boost_LIBRARY_DIR /usr/lib/x86_64-linux-gnu/)

add_executable(ZeroFusion main.cpp)
include(/usr/local/lib/cmake/dlib/dlib.cmake)
include_directories(
        ${PROJECT_SOURCE_DIR}
        ${PROJECT_SOURCE_DIR}/include
        ${EIGEN3_INCLUDE_DIR}
        ${Pangolin_INCLUDE_DIRS}
        ${PCL_INCLUDE_DIRS}
        ${OpenCV_INCLUDE_DIRS}
)

target_link_libraries(ZeroFusion dlib::dlib)
