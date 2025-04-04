#include "lists.h"
#include <stdlib.h>

/**
* print_dlistint - prints all elements in the list
* @h: the pointer to the first node in the list
* Return: the number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	size_t node_count = 0;

	if (h == NULL)
		return (0);
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		node_count++;
		ptr = ptr->next;
	}
	return (node_count);
}
