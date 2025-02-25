#include "lists.h"
/**
 * list_len - Returns the number of elements in a linked list_t list
 * @h: a head pointer to the first node
 *
 * Return: length of the list
 */

size_t list_len(const list_t *h)
{
	size_t count = 1;

	if (h == NULL)
	{
		return (0);
	}
	while (h->next != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}

