cmake_minimum_required(VERSION 3.16)
project(types)

set(CMAKE_CXX_COMPILER g++)
set(CMAKE_CXX_FLAGS_RELEASE   "-std=c++17 -Wall -Wextra -Wpedantic -g0")
set(CMAKE_CXX_FLAGS_DEBUG  "-std=c++17 -Wall -Wextra -Wpedantic -ggdb")

set(CMAKE_VERBOSE_MAKEFILE on)

include_directories(inc)
aux_source_directory(src SRC)
add_executable(types ${SRC})
