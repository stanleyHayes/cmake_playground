set(VCPKG_ROOT $ENV{VCPKG_ROOT})
set(CMAKE_VERBOSE_MAKEFILE ON)
set(CMAKE_MESSAGE_LOG_LEVEL "WARNING")
message(STATUS "VCPKG_ROOT is set to: ${VCPKG_ROOT}")

set(HOME $ENV{HOME})

message(STATUS "HOME is set to: ${HOME}")
message(STATUS "RUNTIME OUTPUT DIR  ${RUNTIME_OUTPUT_DIRECTORY}")
message(WARNING "Warning: The path to the library is not set correctly.")

message(SEND_ERROR "Error: Missing required dependencies")

message(DEPRECATION "Warning: The `add_custom_command()` is deprecated, consider using `add_custom_target()` instead.")

set(MESSAGE "Hello, CMake!")
message(STATUS "The first program you need to write should say ${MESSAGE}")

