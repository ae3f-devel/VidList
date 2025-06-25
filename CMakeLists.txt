cmake_minimum_required(VERSION 3.10)
project(CoMusic)

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/${OUTDIR})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/${OUTDIR})

message("${CMAKE_RUNTIME_OUTPUT_DIRECTORY}")

if(NOT IS_DIRECTORY "${PROJECT_SOURCE_DIR}/submod")
execute_process(
	COMMAND git clone https://github.com/pybind/pybind11 ${PROJECT_SOURCE_DIR}/submod
)
endif()

add_subdirectory(submod)

include_directories(${PYBIND11_INCLUDE_DIR})
file(GLOB VideoList-src ${PROJECT_SOURCE_DIR}/*.c*)
file(GLOB VideoList-inc ${PROJECT_SOURCE_DIR}/*.h*)
pybind11_add_module(VList ${VideoList-src})
