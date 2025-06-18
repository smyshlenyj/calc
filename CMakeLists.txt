cmake_minimum_required(VERSION 3.10)
project(calc)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_executable(calc
    main.cpp
    math.cpp
)