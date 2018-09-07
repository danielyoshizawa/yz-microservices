#include "server.h"

#include <iostream>
#include "rpc/server.h"
#include "rpc/this_handler.h"

namespace yz
{
    namespace communication
    {
        server::~server()
        {

        }

        server::server()
        {
            rpc::server srv(rpc::constants::DEFAULT_PORT);

            srv.bind("add", [](double a, double b) { return a + b; });
            srv.bind("remove", [](double a, double b) { return a - b; });

            srv.run();
        }

    }
}

