s_list  *newList(void)
{
	s_list        *list;

	if ((list = xmalloc(sizeof(*list))) == NULL)
	{
		return NULL;
	}

	list->len  = 0;
	list->curr = NULL;
	list->head = NULL;
	list->tail = NULL;

	return list;
}

s_item  *newItem(void)
{
	s_item        *item;

	if ((item = xmalloc(sizeof(*item))) == NULL)
	{
		return NULL;
	}

	item->prev = NULL;
	item->next = NULL;
	item->val  = xmalloc(sizeof(*(item->val)));

	if (item->val == NULL)
	{
		return xfree(item);
	}

	return item;
}
