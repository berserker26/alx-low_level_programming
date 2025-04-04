#include "lists.h"
#include <stdlib.h>

/**
* dlistint_len - a function to count the total element in the list
* @h: a pointer to the first element in the list
* Return: number of element in the list
*/

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	size_t length = 0;

	if (h == NULL)
		return (0);
	while (ptr != NULL)
	{
		length++;
		ptr = ptr->next;
	}
	return (length);
}
