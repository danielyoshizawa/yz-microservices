//
// Created by Daniel Yoshizawa on 12/30/17.
//

#include "service.h"

namespace yz
{

    service::~service()
    {

    }

    service::service(const std::string &name) : name(name)
    {

    }

    std::string service::WhatIsYourName() const
    {
        return name;
    }
}

