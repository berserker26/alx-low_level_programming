#include "lists.h"

/**
 * print_listint - calculate the number of nodes
 * @h: pointer for head of the node
 * Return: the calculated total value of the nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *ptr = h;
	size_t count = 0;

	if (ptr == NULL)
	{
		return (count);
	}

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		count++;
		ptr = ptr->next;
	}
	return (count);
}
