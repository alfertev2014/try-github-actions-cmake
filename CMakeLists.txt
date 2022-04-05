cmake_minimum_required(VERSION 3.15)

project(helloworld VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_compile_options(
    -Wall -Wextra -Wno-unused-parameter -pedantic
)

add_library(helloworld helloworld.cpp)

add_executable(helloworld_main main.cpp)

target_link_libraries(helloworld_main PRIVATE helloworld)

