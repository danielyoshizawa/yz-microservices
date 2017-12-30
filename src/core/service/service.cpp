//
// Created by Daniel Yoshizawa on 12/30/17.
//

#include "service.h"

namespace yz
{

    yz::service::~service()
    {

    }

    yz::service::service(const std::string &name) : name(name)
    {

    }

    std::string yz::service::WhatIsYourName() const
    {
        return name;
    }
}

