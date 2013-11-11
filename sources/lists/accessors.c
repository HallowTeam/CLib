s_item  *nextItem(s_list *list)
{
	if (list->curr == NULL || list->curr->next == NULL)
	{
		return list->curr = list->head;
	}

	return list->curr = list->curr->next;
}

s_item  *prevItem(s_list *list)
{
	if (list->curr == NULL || list->curr->prev == NULL)
	{
		return list->curr = list->tail;
	}

	return list->curr = list->curr->prev;
}
