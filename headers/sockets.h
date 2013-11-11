#ifndef LIBUTILS_SOCKETS_ID
#define LIBUTILS_SOCKETS_ID

#define SERVER_LISTEN           5
#define SOCKET_RECV             512

typedef int SOCKET;
typedef struct in_addr IN_ADDR;
typedef struct sockaddr SOCKADDR;
typedef struct sockaddr_in SOCKADDR_IN;

typedef struct
{
	SOCKET        fd;
	SOCKADDR_IN   in;

} s_socket;

/* PROTOTYPES START */
void        *freeSocket(s_socket *sock);
s_socket    *newTCPClient(char *server, int port);
s_socket    *newTCPServer(int port);
int         recvTCP(s_socket *sock, char **message);
int         sendTCP(s_socket *sock, char *message);
s_socket    *serverAccept(s_socket *server);
/* PROTOTYPES END */

#endif
