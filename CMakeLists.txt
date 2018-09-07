cmake_minimum_required(VERSION 3.3)

project(yz_microservices)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x -stdlib=libc++")

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/Modules")

MESSAGE("CMAKE SOURCE DIR : ${CMAKE_SOURCE_DIR}")

set(RPCLIB_ROOT ${CMAKE_SOURCE_DIR}/lib/rpc)
set(RPCLIB_LIBS ${CMAKE_SOURCE_DIR}/lib/rpc/librpc.a)
set(RPCLIB_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include/)

set(CATCH_INCLUDE_DIR "${CMAKE_SOURCE_DIR}/lib/catch")
add_library(Catch INTERFACE)
target_include_directories(Catch INTERFACE ${CATCH_INCLUDE_DIR})

enable_testing()

add_subdirectory(src)
add_subdirectory(samples/basic_rpc)
