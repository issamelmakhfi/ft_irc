#ifndef SERVER
#define SERVER

#include <iostream>
#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <unistd.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <vector>

#define PORT 8080

class Server {
    public:
        void    ft_server();
        int     CheckSocket();
    private:
        std::vector<int>    tab;
        int server_fd;
        int new_socket;
        int valread;
};

#endif