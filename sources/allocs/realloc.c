void    *xrealloc(void *ptr, size_t size)
{
	void  *copy = realloc(ptr, size);

	if (copy == NULL)
	{
		xfree(ptr);

		MALLOC_FAIL;
	}

	return copy;
}
