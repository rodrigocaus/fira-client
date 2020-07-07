#include "net/udpsocket.h"

Datagram::Datagram() {
    Datagram(1);
}

Datagram::Datagram(size_t n) {
    n = std::max(size_t(1),n);
    this->byte_size = n;
    this->bytes = new uint8_t[n];
    this->fill(0);
}

Datagram::Datagram(uint8_t *bytes, size_t n) {
    this->bytes = NULL;
    this->setdata(bytes, n);
}

Datagram::~Datagram() {
    delete[] this->bytes;
}

uint8_t *Datagram::resize(size_t n) {
    uint8_t *b = this->bytes;
    size_t old_size = this->byte_size;
    this->bytes = new uint8_t[n];
    this->byte_size = n;
    this->fill(0);
    std::memcpy(this->bytes, b, (std::min(old_size, this->byte_size))*sizeof(uint8_t));
    delete[] b;
    return this->bytes;
}

/**
 * @brief Set datagram data
 * 
 * @param bytes 
 * @param n 
 */
void Datagram::setdata(uint8_t *bytes, size_t n) {
    delete[] this->bytes;
    this->byte_size = n;
    this->bytes = new uint8_t[n];
    std::memcpy(this->bytes, bytes, n*sizeof(uint8_t));
}

/**
 * @brief Fill Datagram with var
 * 
 * @param var 
 */
void Datagram::fill(uint8_t var) {
    std::memset(this->bytes, var, (this->byte_size)*sizeof(uint8_t));
}

UDPSocket::UDPSocket() {
    this->sockfd = socket(AF_INET, SOCK_DGRAM, 0);
    if(this->sockfd == -1) {
        throw UDPSocketRuntimeError("Problem creating UDP socket.");
    }
    this->recv_len = 0;
    this->port = 0;
}

UDPSocket::~UDPSocket() {
    close(this->sockfd);
}

void UDPSocket::_pre_bind(struct sockaddr_in *addr, std::string &ip, unsigned int port) {
    std::memset(addr, 0, sizeof(*addr));
    addr->sin_family = AF_INET;
    addr->sin_port = htons(port);
    if(inet_aton(ip.c_str(), &(addr->sin_addr)) == 0) {
        std::string e = "IP address not valid: " + ip;
        throw UDPSocketRuntimeError(e.c_str());
    }
}

/**
 * @brief Bind socket to local IP adress and specified port
 * 
 * @param my_ip Local IP. Change if UDPSocket Object must be a server. 
 * @param my_port Default is zero (any port number). Change if UDPSocket Object must be a server.
 */
void UDPSocket::bind(std::string &my_ip, unsigned int my_port) {
    this->_pre_bind(&(this->my_addr), my_ip, my_port);
    if(bind(this->sockfd, (struct sockaddr *)&(this->my_addr), sizeof(this->my_addr)) < 0) {
        throw UDPSocketRuntimeError("Bind Failed.");
    }
}

/**
 * @brief Register a remote UDP server to send datagram by IP
 * 
 * @param remote_ip 
 * @param remote_port 
 */
void UDPSocket::remote(std::string &remote_ip, unsigned int remote_port) {
    this->_pre_bind(&(this->remote_addr), remote_ip, remote_port);
    this->addr = remote_ip;
    this->port = uint16_t(port);
}

/**
 * @brief Register a remote UDP server to send datagram by hostname
 * 
 * @param remote_host 
 * @param remote_port 
 */
void UDPSocket::remote_hostname(std::string &remote_host, unsigned int remote_port) {
    struct hostent *hp = gethostbyname(remote_hostname.c_str());
    if(hp == 0 || hp->h_addr_list[0] == 0) {
        std::string e = "Could not obtain address of " + remote_hostname;
        throw UDPSocketRuntimeError(e.c_str());
    }
    char ip[16];
    unsigned char *a = hp->h_addr_list[0];
    sprintf(ip, "%d.%d.%d.%d", a[0], a[1], a[2], a[3]);
    this->remote(std::string(ip), remote_port);
}

/**
 * @brief Send a Datagram to registered remote host.
 * 
 * @param d 
 */
void UDPSocket::sendData(Datagram &d) {
    size_t r = sendto(this->sockfd, d.data(), d.size(), 0, (struct sockaddr *)&(this->remote_addr), sizeof(this->remote_addr));
    if(r == -1) {
        std::cerr << "Error sending message" << std::endl;
    }
}

/**
 * @brief Receive a Datagram (probably from registered remote host)
 * 
 * @param d 
 */
int UDPSocket::receiveData(Datagram &d, std::string &ip, unsigned int *port) {
    struct sockaddr_in recv_addr;
    int slen = sizeof(recv_addr);
    this->recv_len = recvfrom(this->sockfd, this->recv_bufffer, this->BUF_LEN, 0, (struct sockaddr *)&recv_addr, &slen);
    if(this->recv_len == -1) {
        std::cerr << "Error receiveing message" << std::endl;
        return -1;
    }
    d.setdata(this->recv_buffer, this->recv_len);
    ip = std::string(inet_ntoa(recv_addr.sin_addr));
    *port = (unsigned int) recv_addr.sin_port;
    
    return this->recv_len;
}


/**
 * @brief Return true if socket has incoming message
 * 
 * @return true 
 * @return false 
 */
bool UDPSocket::hasPendingData() {
    fd_set rfds;
    // Wait 42 microseconds
    struct timeval tv = {0, 42};
    FD_ZERO(&rfds);
    FD_SET(this->sockfd, &rfds);

    int retval = select(1,  &rfds, NULL, NULL, &tv);

    if(retval == -1) {
        std::cerr << "Error on select socket" << std::endl;
    }
    else if(retval) {
        return true;
    }

    return false;
}