#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include <server.h>
#include <client.h>

TEST_CASE( "Alfa Bravo Tango!", "[server]" ) {

    yz::communication::server servidor;
    yz::communication::client client;

    SECTION( "Talk to me man! ")
    {
        REQUIRE(true == true);
    }

}
