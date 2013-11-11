s_socket        *newTCPClient(char *server, int port)
{
	s_socket      *sock;

	if ((sock = xmalloc(sizeof(*sock))) == NULL)
	{
		return NULL;
	}

	if ((sock->fd = socket(AF_INET, SOCK_STREAM, 0)) == -1)
	{
		perror("socket()");

		return freeSocket(sock);
	}

	sock->in.sin_addr.s_addr = inet_addr(server);
	sock->in.sin_family      = AF_INET;
	sock->in.sin_port        = htons(port);

	if (connect(sock->fd, (SOCKADDR *)&(sock->in), sizeof(sock->in)) == -1)
	{
		perror("connect()");

		return freeSocket(sock);
	}

	return sock;
}

s_socket        *newTCPServer(int port)
{
	int           reuse = 1;
	s_socket      *sock;

	if ((sock = xmalloc(sizeof(*sock))) == NULL)
	{
		return NULL;
	}

	if ((sock->fd = socket(AF_INET, SOCK_STREAM, 0)) == -1)
	{
		perror("socket()");

		return freeSocket(sock);
	}

	setsockopt(sock->fd, SOL_SOCKET, SO_REUSEADDR, &reuse, sizeof(reuse));

	sock->in.sin_addr.s_addr = htonl(INADDR_ANY);
	sock->in.sin_family      = AF_INET;
	sock->in.sin_port        = htons(port);

	if (bind(sock->fd, (SOCKADDR *)&(sock->in), sizeof(sock->in)) == -1)
	{
		perror("bind()");

		return freeSocket(sock);
	}

	if (listen(sock->fd, SERVER_LISTEN) == -1)
	{
		perror("listen()");

		return freeSocket(sock);
	}

	return sock;
}
