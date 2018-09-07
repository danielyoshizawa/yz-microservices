#pragma once
#ifndef YZ_MICROSERVICES_CLIENT_H
#define YZ_MICROSERVICES_CLIENT_H

#include <string>

namespace yz
{
    namespace communication
    {
        class client
        {
        public:
            virtual ~client();
            client();
        };
    }
}

#endif //YZ_MICROSERVICES_CLIENT_H
