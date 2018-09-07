#pragma once
#ifndef YZ_MICROSERVICES_SERVER_H
#define YZ_MICROSERVICES_SERVER_H

#include <string>
#include <functional>

namespace yz
{
    namespace communication
    {
        class server
        {
        public:
            virtual ~server();
            server();
//            void run();
//            void add(std::string const &name, std::function func);
        };
    }
}

#endif //YZ_MICROSERVICES_SERVER_H
