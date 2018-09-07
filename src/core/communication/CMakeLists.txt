cmake_minimum_required(VERSION 3.3)

find_package(rpclib REQUIRED)

set ( SOURCE server.cpp client.cpp )

add_library(communication SHARED ${SOURCE})

message(${RPCLIB_INCLUDE_DIR})

target_include_directories(communication PUBLIC
                                                ${CMAKE_CURRENT_SOURCE_DIR}
                                                ${RPCLIB_INCLUDE_DIR}
        )

target_link_libraries(communication ${RPCLIB_LIBS})

set_target_properties(
        communication
        PROPERTIES
        CXX_STANDARD 14
        COMPILE_FLAGS "${CMAKE_CXX_FLAGS} ${RPCLIB_EXTRA_FLAGS}")

target_compile_definitions(communication PUBLIC ${RPCLIB_COMPILE_DEFINITIONS})

add_subdirectory(test)
