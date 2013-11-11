int     blockFile(int fd, bool blocking)
{
	int   opts;

	if ((opts = fcntl(fd, F_GETFL)) == -1)
	{
		perror("fcntl()");

		return -1;
	}

	if (blocking == true)
	{
		opts &= ~O_NONBLOCK;
	}
	else
	{
		opts |=  O_NONBLOCK;
	}

	if (fcntl(fd, F_SETFL, opts) == -1)
	{
		perror("fcntl()");

		return -1;
	}

	return 0;
}
