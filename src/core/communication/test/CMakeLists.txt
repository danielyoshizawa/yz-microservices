cmake_minimum_required(VERSION 3.3)

set ( SOURCE server_test.cpp )

add_executable(server_test ${SOURCE})

target_link_libraries(server_test Catch communication)

target_include_directories( server_test PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../ )

add_test(NAME server_test_switch COMMAND server_test)
