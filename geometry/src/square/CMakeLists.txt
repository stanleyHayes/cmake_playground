add_library(square STATIC square.cpp)
target_include_directories(square PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")
target_link_libraries(square PUBLIC shape)