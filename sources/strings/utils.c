void    dumpStr(char *str, int len)
{
	int   i;

	for (i = 0; i < len; i++)
	{
		if (isprint(str[i]))
		{
			printf("%c", str[i]);
		}
		else
		{
			printf("{%02X}", str[i]);
		}
	}

	printf("\n");
}
