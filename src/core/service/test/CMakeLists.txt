cmake_minimum_required(VERSION 3.3)

set ( SOURCE service_test.cpp )

add_executable(service_test ${SOURCE})

target_link_libraries(service_test service Catch)
