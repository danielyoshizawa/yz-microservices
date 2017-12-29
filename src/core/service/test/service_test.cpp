//
// Created by Daniel Yoshizawa on 12/28/17.
//

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

TEST_CASE( "Good Job!", "[service]" ) {

    Service service;

    SECTION( "Get this service a name! ")
    {
        REQUIRE(service.WhatIsYourName() == "Service, Baby!");
    }

}