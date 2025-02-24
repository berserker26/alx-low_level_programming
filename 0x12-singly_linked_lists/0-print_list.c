#include "lists.h"

size_t print_list(const list_t *h)
{
	const list_t* ptr = h;
	size_t count = 0;
	
	while(ptr != NULL)
	{
		if(ptr->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n",ptr->len, ptr->str);
		}
		count++;
		ptr = ptr->next;
	}
	return count;

}
