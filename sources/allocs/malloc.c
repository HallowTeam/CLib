void    *xmalloc(size_t size)
{
	void  *ptr;

	if ((ptr = malloc(size)) == NULL)
	{
		MALLOC_FAIL;
	}

	return ptr;
}
