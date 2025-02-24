#include "lists.h"

size_t print_list(const list_t *h)
{
	const list_t* ptr = h;
	size_t count = 0;
	
	if(h == NULL)
	{
		return 0;
	}

	while(ptr != NULL)
	{
		printf("%s\n", ptr->str);
		count++;
		ptr = ptr->next;
	}
	return count;

}
