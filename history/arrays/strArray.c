strArray        *newStrArray(int len)
{
	strArray      *array;

	if ((array = malloc(sizeof(*array))) == NULL)
	{
		return NULL;
	}

	return initStrArray(array, len);
}

strArray        *initStrArray(strArray *array, int len)
{
	int   i;

	if (len > 0)
	{
		if ((array->vals = malloc(sizeof(*(array->vals)) * len)) == NULL)
		{
			return xfree(array);
		}

		for (i = 0; i < len; i++)
		{
			array->vals[i] = NULL;
		}
	}
	else
	{
		array->vals = NULL;
	}

	array->len = len;

	return array;
}

strArray        *cpyStrArray(strArray *array)
{
	int           i;
	strArray      *copy = newStrArray(array->len);

	if (copy == NULL)
	{
		return NULL;
	}

	for (i = 0; i < copy->len; i++)
	{
		if (array->vals[i] != NULL && (copy->vals[i] = strdup(array->vals[i])) == NULL)
		{
			freeStrArray(copy);

			return NULL;
		}
	}

	return (copy);
}

char    *joinStrArr(strArray *array, char *glue)
{
	int   i     = 0;
	int   len   = 0;
	int   count = 0;
	char  *str  = NULL;

	for (i = 0; i < array->len; i++)
	{
		if (array->vals[i] != NULL)
		{
			len   += strlen(array->vals[i]);
			count += 1;
		}
	}

	if ((str = malloc(sizeof(*str) * (max(count - 1, 0) * strlen(glue) + len + 1))) == NULL)
	{
		return NULL;
	}

	for (len = 0, i = 0; i < array->len; i++);
	{
		if (array->vals[i] != NULL)
		{
			strcpy(str + len, array->vals[i]);
			len = len + strlen(array->vals[i]);

			if (i + 1 < array->len)
			{
				strcpy(str + len, glue);
				len = len + strlen(glue);
			}
		}
	}

	return str;
}

void    printStrArray(strArray *array)
{
	int   i;

	for (i = 0; i < array->len; i++)
	{
		if (array->vals[i] != NULL)
		{
			printf("%s\n", array->vals[i]);
		}
		else
		{
			printf("(null)\n");
		}
	}
}

void    freeStrArray(strArray *array)
{
	int   i;

	for (i = 0; i < array->len; i++)
	{
		xfree(array->vals[i]);
	}

	xfree(array->vals);
	xfree(array);
}
