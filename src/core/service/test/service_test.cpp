//
// Created by Daniel Yoshizawa on 12/28/17.
//

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include <service.h>

TEST_CASE( "Good Job!", "[service]" ) {

    std::string service_name("Service, Baby!");
    yz::service service(service_name);

    SECTION( "Get this service a name! ")
    {
        REQUIRE(service.WhatIsYourName() == service_name);
    }

}