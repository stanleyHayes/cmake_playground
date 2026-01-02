cmake_minimum_required(VERSION 4.0)
project(geometry
        LANGUAGES CXX
        VERSION 0.0.1
        DESCRIPTION "Geometry is a static library to be used by our mathematics application"
        HOMEPAGE_URL "https://github.io/geometry"
)

add_executable(geometry main.cpp)

add_subdirectory(src/shape)
add_subdirectory(src/square)

target_link_libraries(geometry PUBLIC square)
