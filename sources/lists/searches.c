s_item  *getItem(s_list *list, int index)
{
	int           i;
	s_item        *item = list->head;

	for (i = 0; item != NULL; i++)
	{
		if (i >= index)
		{
			return item;
		}

		item = item->next;
	}

	return list->tail;
}
