cmake_minimum_required(VERSION 3.3)

set ( SOURCE_SERVER server_rpc_sample.cpp )

add_executable(server_rpc_sample ${SOURCE_SERVER})

target_link_libraries(server_rpc_sample communication)

target_include_directories( server_rpc_sample PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/ )

set ( SOURCE_CLIENT client_rpc_sample.cpp )

add_executable(client_rpc_sample ${SOURCE_CLIENT})

target_link_libraries(client_rpc_sample communication)

target_include_directories( client_rpc_sample PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/ )

