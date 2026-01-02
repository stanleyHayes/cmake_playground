cmake_minimum_required(VERSION 3.5)

# define the project
project(hello_cmake 
LANGUAGES CXX 
VERSION 0.0.1 
DESCRIPTION "Hello CMake" 
HOMEPAGE_URL "https://cmake.org")

set(CMAKE_BUILD_TYPE Release)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

# set the c++ standard
set(CMAKE_CXX_STANDARD 23)

# add the executable
add_executable(main main.cpp)