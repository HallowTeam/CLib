s_item  *intItem(s_list *list, int index, int value)
{
	s_item        *item = insertItem(list, index);

	if (item != NULL)
	{
		setInt(item->val, value);
	}

	return item;
}

s_item  *charItem(s_list *list, int index, char value)
{
	s_item        *item = insertItem(list, index);

	if (item != NULL)
	{
		setChar(item->val, value);
	}

	return item;
}

s_item  *strItem(s_list *list, int index, char *value)
{
	s_item        *item = insertItem(list, index);

	if (item != NULL)
	{
		setStr(item->val, value);
	}

	return item;
}

s_item  *ptrItem(s_list *list, int index, void *value)
{
	s_item        *item = insertItem(list, index);

	if (item != NULL)
	{
		setPtr(item->val, value);
	}

	return item;
}

s_item  *newItems(s_list *list, int index, e_var type, int amount, ...)
{
	int           i;
	int           x;
	va_list       ap;
	s_item        *item;

	va_start(ap, amount);

	for (i = 0; i < amount; i++, index++)
	{
		switch (type)
		{
			case INT : item = intItem(list, index, va_arg(ap, int));    break;
			case STR : item = strItem(list, index, va_arg(ap, char *)); break;
			case PTR : item = ptrItem(list, index, va_arg(ap, void *)); break;
			case CHAR: item = charItem(list, index, va_arg(ap, int));   break;
			default  : printf("UNDEFINED TYPE\n");                      break;
		}

		if (item == NULL)
		{
			for (x = i; x > 0; x--)
			{
				freeItem(list, getItem(list, index - i));
			}

			break;
		}
	}

	va_end(ap);

	return item;
}
