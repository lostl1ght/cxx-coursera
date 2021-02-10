cmake_minimum_required(VERSION 3.16)
project(task_03)

set(CMAKE_CXX_COMPILER g++)
set(CMAKE_CXX_FLAGS_RELEASE   "-std=c++17 -Wall -Wextra -Wpedantic -Werror -g0")
set(CMAKE_CXX_FLAGS_DEBUG  "-std=c++17 -Wall -Wextra -Wpedantic -Werror -ggdb")

set(CMAKE_VERBOSE_MAKEFILE on)

include_directories(inc)
aux_source_directory(src SRC)
add_executable(task_03 ${SRC})
