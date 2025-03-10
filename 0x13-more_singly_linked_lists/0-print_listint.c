#include "lists.h"

/** print_listint - Return the number of nodes
 * 
 * h: pointer for head of the node
 * count: variable to store the counted node
 */

size_t print_listint(const listint_t *h)
{
	listint_t *ptr = *h;
	size_t count = 0;

	if (*h == NULL)
	{
		return (count);
	}


	while (ptr->next != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
