#include "lists.h"

size_t print_list(const list_t *h)
{
	struct list_s ptr;
	size_t count = 0;
	while(ptr->next != NULL)
	{
		printf("%s\n", ptr->str);
		count++;
		ptr = ptr->next;
	}
	return count;

}
