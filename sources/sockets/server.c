s_socket        *serverAccept(s_socket *server)
{
	int           sinsize;
	s_socket      *client;

	if ((client = xmalloc(sizeof(*client))) == NULL)
	{
		return NULL;
	}

	sinsize = sizeof(server->in);

	if ((client->fd = accept(server->fd, (SOCKADDR *)&(server->in), (socklen_t *)&sinsize)) == -1)
	{
		perror("accept()");

		return freeSocket(client);
	}

	return client;
}
