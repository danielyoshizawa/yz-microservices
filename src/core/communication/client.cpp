#include "client.h"

#include <iostream>

#include "rpc/client.h"
#include "rpc/rpc_error.h"

namespace yz
{
    namespace communication
    {
        client::~client()
        {

        }

        client::client()
        {
            rpc::client c("localhost", rpc::constants::DEFAULT_PORT);
            try {
                double five = c.call("add", 2, 3).as<double>();
                std::cout << "add(2, 3) = ";
                std::cout << five << std::endl;
                double one = c.call("remove", 3, 2).as<double>();
                std::cout << "remove(3, 2) = ";
                std::cout << one << std::endl;


            } catch (rpc::rpc_error &e) {
                std::cout << std::endl << e.what() << std::endl;
                std::cout << "in function '" << e.get_function_name() << "': ";

                using err_t = std::tuple<int, std::string>;
                auto err = e.get_error().as<err_t>();
                std::cout << "[error " << std::get<0>(err) << "]: " << std::get<1>(err)
                << std::endl;
            }

        }

    }
}

