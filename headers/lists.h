#ifndef LIBUTILS_LISTS_ID
#define LIBUTILS_LISTS_ID

typedef struct s_item
{
	struct s_var  *val;
	struct s_item *next;
	struct s_item *prev;

} s_item;

typedef struct s_list
{
	int           len;
	struct s_item *curr;
	struct s_item *head;
	struct s_item *tail;

} s_list;

/* PROTOTYPES START */
int         freeItem(s_list *list, s_item *item);
void        freeList(s_list *list);
s_list      *newList(void);
s_item      *newItem(void);
s_item      *insertItem(s_list *list, int index);
void        insertItemBefore(s_list *list, s_item *item, int index);
void        insertItemAfter(s_list *list, s_item *item);
s_item      *getItem(s_list *list, int index);
s_item      *nextItem(s_list *list);
s_item      *prevItem(s_list *list);
void        printList(s_list *list);
s_item      *intItem(s_list *list, int index, int value);
s_item      *charItem(s_list *list, int index, char value);
s_item      *strItem(s_list *list, int index, char *value);
s_item      *ptrItem(s_list *list, int index, void *value);
s_item      *newItems(s_list *list, int index, e_var type, int amount, ...);
/* PROTOTYPES END */

#endif
