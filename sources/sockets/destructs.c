void    *freeSocket(s_socket *sock)
{
	if (sock->fd != -1)
	{
		close(sock->fd);
	}

	return xfree(sock);
}
