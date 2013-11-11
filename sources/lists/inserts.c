s_item  *insertItem(s_list *list, int index)
{
	s_item        *item  = newItem();

	if (item == NULL)
	{
		return NULL;
	}

	if (list->len == 0 || list->len <= index)
	{
		insertItemAfter(list, item);
	}
	else
	{
		insertItemBefore(list, item, index);
	}

	list->len = list->len + 1;

	return item;
}

void    insertItemBefore(s_list *list, s_item *item, int index)
{
	s_item        *pivot = getItem(list, index);

	if (pivot->prev == NULL)
	{
		list->head = item;
	}
	else
	{
		pivot->prev->next = item;
	}

	item->prev  = pivot->prev;
	item->next  = pivot;
	pivot->prev = item;
}

void    insertItemAfter(s_list *list, s_item *item)
{
	if (list->tail == NULL)
	{
		list->head = item;
	}
	else
	{
		item->prev       = list->tail;
		list->tail->next = item;
	}

	list->tail = item;
}
