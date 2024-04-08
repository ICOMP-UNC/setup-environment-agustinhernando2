# Request the minimum version of CMake, in case of lower version throws error
# See: https://cmake.org/cmake/help/latest/command/cmake_minimum_required.html

cmake_minimum_required(VERSION 3.25 FATAL_ERROR)

# Define your project
# See: https://cmake.org/cmake/help/latest/command/project.html

project(
  "StatiCLib"
  VERSION 1.0.0
  DESCRIPTION "CMake C project template for operating systems II"
  LANGUAGES C
)

# Define the C standard, we are going to use std17
# See: https://cmake.org/cmake/help/latest/variable/CMAKE_CXX_STANDARD.html

set(CMAKE_C_STANDARD 17)

# Include the include directory, where the header files are located
# See: https://cmake.org/cmake/help/latest/command/include_directories.html

include_directories(include)

# Add the src directory, where the source files are located
# See: https://cmake.org/cmake/help/latest/command/file.html#glob

file(GLOB_RECURSE SOURCES "src/*.c")

# Create the executable
# See https://cmake.org/cmake/help/latest/command/add_executable.html

add_library(${PROJECT_NAME} STATIC ${SOURCES})
