void    *xcalloc(size_t members, size_t size)
{
	void  *ptr;

	if ((ptr = calloc(members, size)) == NULL)
	{
		MALLOC_FAIL;
	}

	return ptr;
}
