cmake_minimum_required(VERSION 3.3)
project(yz_microservices)

set(YZ_CATCH_PATH "${CMAKE_CURRENT_SOURCE_DIR}/lib/catch")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

add_subdirectory(src)
