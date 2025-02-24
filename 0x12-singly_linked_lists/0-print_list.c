#include "lists.h"

size_t print_list(const list_t *h)
{
	list_s ptr;
	size_t count = 0;
	while(ptr->next != null)
	{
		printf("%s\n", ptr->str);
		count++;
		ptr = ptr->next;
	}
	return count;

}
