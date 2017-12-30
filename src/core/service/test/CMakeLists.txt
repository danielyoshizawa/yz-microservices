cmake_minimum_required(VERSION 3.3)

set ( SOURCE service_test.cpp )

add_executable(service_test ${SOURCE})

target_include_directories( service_test PRIVATE ${YZ_CATCH_PATH})

target_link_libraries(service_test service)
