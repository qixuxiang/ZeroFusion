#include <iostream>
#include <zmq.hpp>


int main() {
    zmq::context_t context (1);
    zmq::socket_t socket (context, ZMQ_REP);
    socket.bind ("tcp://*:5555");
    std::cout << "Hello, World!" << std::endl;
    return 0;
}