#include "lists.h"

/**
 * print-list function to print elements from the given linked list
 *
 * h: pointer to head
 *
 * return total number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 1;
	if(h == NULL)
	{
		return 0;
	}

	while(h->next != NULL)
	{
		if(h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		count += 1;
	}

	printf("[%d] %s\n", h->len, h->str);
	return count;

}
