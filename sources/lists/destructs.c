int     freeItem(s_list *list, s_item *item)
{
	if (item->prev == NULL)
	{
		list->head = item->next;
	}
	else
	{
		item->prev->next = item->next;
	}

	if (item->next == NULL)
	{
		list->tail = item->prev;
	}
	else
	{
		item->next->prev = item->prev;
	}

	xfree(item->val);
	xfree(item);

	return list->len = list->len - 1;
}

void    freeList(s_list *list)
{
	s_item        *temp;
	s_item        *item = list->head;

	while (item != NULL)
	{
		temp = item;
		item = item->next;

		xfree(temp->val);
		xfree(temp);
	}

	xfree(list);
}
