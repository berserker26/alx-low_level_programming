#include "lists.h"
#include <stdlib.h>

/**
* insert_dnodeint_at_index - a function to insert a data at specfic pos
* @h: a pointer to first node
* @idx: desired index to insert the data
* @n: a data to insert at new node
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	dlistint_t *ptr = *h;
	unsigned int i = 0;

	if (!new_node)
		return (NULL);
	
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	
	if (*h == NULL)
	{
		*h = new_node;
		return (*h);
	}
	while (ptr != NULL && i < idx)
	{
		if ((i+1) == idx)
		{
			new_node->prev = ptr;
			ptr = new_node;

			new_node->next = ptr->next;
			ptr->next = new_node;
			return (new_node);
		}
		ptr = ptr->next;
		i++;
	}
	return (NULL);
}
