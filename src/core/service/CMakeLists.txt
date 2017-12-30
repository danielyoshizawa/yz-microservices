cmake_minimum_required(VERSION 3.3)

set ( SOURCE service.cpp )

add_library(service ${SOURCE})

target_include_directories(service PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_subdirectory(test)