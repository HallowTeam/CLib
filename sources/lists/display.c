void    printList(s_list *list)
{
	s_item        *item = list->head;

	printf("NULL => ");

	while (item != NULL)
	{
		switch (item->val->type)
		{
			case INT : printf("INT : %d => ",  getInt(item->val));  break;
			case STR : printf("STR : %s => ",  getStr(item->val));  break;
			case PTR : printf("PTR : %p => ",  getPtr(item->val));  break;
			case CHAR: printf("CHAR : %c => ", getChar(item->val)); break;
			default  : printf("UNDEF => ")                        ; break;
		}

		item = item->next;
	}

	printf("NULL\n");
}
