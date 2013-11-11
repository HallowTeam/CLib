int     recvTCP(s_socket *sock, char **message)
{
	int   i     = 1;
	int   len   = 0;
	int   total = 0;

	do
	{
		if (i == 2)
		{
			blockFile(sock->fd, false);
		}

		if ((*message = xrealloc(*message, (SOCKET_RECV - 1) * i++ + 1)) == NULL)
		{
			xfree(*message);

			return -1;
		}

		if ((len = recv(sock->fd, *message + total, SOCKET_RECV - 1, 0)) == -1)
		{
			if (errno == EAGAIN || errno == EWOULDBLOCK)
			{
				break;
			}

			xfree(*message);
			perror("recv()");

			return -1;
		}

		total += len;

	} while (len == SOCKET_RECV - 1);

	if (i != 2)
	{
		blockFile(sock->fd, true);
	}

	(*message)[total] = '\0';

	return total;
}

int     sendTCP(s_socket *sock, char *message)
{
	if (send(sock->fd, message, strlen(message), 0) == -1)
	{
		perror("send()");

		return -1;
	}

	return 0;
}
