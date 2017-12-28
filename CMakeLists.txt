cmake_minimum_required(VERSION 3.3)
project(yz_microservices)

#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

#set(SOURCE_FILES main.cpp)
#add_executable(yz_microservices ${SOURCE_FILES})

# Did this way so CLion can keep track off my files,
# probably this is not the best way, but is good for now.
add_subdirectory(src)
