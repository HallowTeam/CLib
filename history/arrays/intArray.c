intArray        *newIntArray(int len, int val)
{
	intArray      *array;

	if ((array = malloc(sizeof(*array))) == NULL)
	{
		return NULL;
	}

	return initIntArray(array, len, val);
}

intArray        *initIntArray(intArray *array, int len, int val)
{
	int   i;

	if ((array->vals = malloc(sizeof(*(array->vals)) * len)) == NULL)
	{
		return xfree(array);
	}

	array->len = len;

	for (i = 0; i < len; i++)
	{
		array->vals[i] = val;
	}

	return array;
}

void    printIntArray(intArray *array)
{
	int   i;

	for (i = 0; i < array->len; i++)
	{
		printf("%d,", array->vals[i]);
	}

	printf("\n");
}

void    freeIntArray(intArray *array)
{
	xfree(array->vals);
	xfree(array);
}
