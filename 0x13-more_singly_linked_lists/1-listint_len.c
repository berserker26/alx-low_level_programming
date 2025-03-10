#include "lists.h"

/**
 * listint_len - calculate the number of element in the node
 * @h: a pointer to the head of the node
 * Return: number of elements in the node
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *ptr = h;
	size_t length = 0;

	if (h == NULL)
	{
		return (length);
	}

	while (ptr != NULL)
	{
		length++;
		ptr = ptr->next;
	}
	return (length);
}
