char    *xstrcat(char *str1, char *str2)
{
	char  *copy = xmalloc(sizeof(*copy) * (strlen(str1) + strlen(str2) + 1));

	if (copy == NULL)
	{
		return NULL;
	}

	copy[0] = '\0';
	strcat(copy, str1);
	strcat(copy, str2);

	return copy;
}

char    *xrstrcat(char *str1, char *str2)
{
	char  *copy = xstrcat(str1, str2);

	xfree(str1);

	return str1 = copy;
}
