cmake_minimum_required(VERSION 3.20)

project(openglc)

add_executable(openglc
	src/main.c
)

enable_testing()
include(CTest)
add_subdirectory(tests)

