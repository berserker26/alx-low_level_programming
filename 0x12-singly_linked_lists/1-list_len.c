#include "lists.h"
/*
 * list_len: check length of list
 *
 * retutn: length of the list
 */

size_t list_len(const list_t *h)
{
	const list_t* ptr = h;
	size_t count = 0;
	while(ptr != NULL)
	{
		ptr = ptr->next;
		count++;
	}
	return count;
}

