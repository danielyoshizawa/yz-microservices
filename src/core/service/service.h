//
// Created by Daniel Yoshizawa on 12/30/17.
//

#pragma once

#ifndef YZ_MICROSERVICES_SERVICE_H_H
#define YZ_MICROSERVICES_SERVICE_H_H

#include <string>

namespace yz
{
    class service
    {
    private:
        std::string name;

    public:
        virtual ~service();
        service(const std::string & name);
        virtual std::string WhatIsYourName() const;
    };
};

#endif //YZ_MICROSERVICES_SERVICE_H_H
