#ifndef UDP_SOCKET
#define UDP_SOCKET

#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>
#include <stdexcept>

#include <netdb.h>
#include <unistd.h> 
#include <sys/types.h> 
#include <sys/socket.h> 
#include <arpa/inet.h> 
#include <netinet/in.h> 

class Datagram {
    /**
     * @brief   Basic Datagram class to manage data
     *          transferred via UDP.
     * 
     */
public:
    Datagram();
    Datagram(size_t n);
    Datagram(uint8_t *bytes, size_t n);
    ~Datagram();

    uint8_t *data() {return this->bytes;}
    size_t size() {return this->byte_size;}
    uint8_t *resize(size_t n);
    void setdata(uint8_t *bytes, size_t n);
    void fill(uint8_t val);

private:
    uint8_t *bytes;
    size_t byte_size;
};

class UDPSocketRuntimeError: public std::runtime_error {
public:
    UDPSocketRuntimeError(const char *e): std::runtime_error(e) {}
};

class UDPSocket {
    /**
     * @brief   UDP basic socket. Default function is a UDP client
     *          where a remote server is registered.
     * 
     */
public:
    UDPSocket();
    ~UDPSocket();

    void bind(std::string &my_ip = "127.0.0.1", unsigned int my_port = 0);
    void remote(std::string &remote_ip, unsigned int remote_port);
    void remote_hostname(std::string &remote_host, unsigned int remote_port);
    void sendData(Datagram &d);
    int receiveData(Datagram &d, std::string &ip, unsigned int port);
    bool hasPendingData();

private:
    void _pre_bind(struct sockaddr_in *addr, std::string &ip, unsigned int *port);

    int sockfd;
    const unsigned int BUF_LEN = 4096;
    uint8_t recv_buffer[BUF_LEN];
    uint16_t recv_len;
    struct sockaddr_in remote_addr;
    struct sockaddr_in my_addr;
    unsigned int port;
    std::string addr;
};

#endif