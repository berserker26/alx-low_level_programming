#include "lists.h"

size_t print_list(const list_t *h)
{
	list_t* ptr;
	size_t count = 0;
	
	ptr = h;
	while(ptr->next != NULL)
	{
		printf("%s\n", ptr->str);
		count++;
		ptr = ptr->next;
	}
	return count;

}
