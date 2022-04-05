cmake_minimum_required(VERSION 3.15)

set(PATCH_VERSION "1" CACHE INTERNAL "Patch version")
set(PROJECT_VERSION 0.0.${PATCH_VERSION})

project(helloworld VERSION ${PROJECT_VERSION})

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_compile_options(
    -Wall -Wextra -Wno-unused-parameter -pedantic
)

configure_file(version.h.in version.h)

add_library(helloworld helloworld.cpp)

target_include_directories(helloworld PRIVATE "${CMAKE_BINARY_DIR}")

add_executable(helloworld_main main.cpp)

target_link_libraries(helloworld_main PRIVATE helloworld)

