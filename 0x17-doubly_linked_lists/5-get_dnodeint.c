#include "lists.h"
#include <stdlib.h>

/**
* get_dnodeint_at_index - a function to return nth node
* @head: a pointer to the first node
* @index: desired index to be return
* Return: if success the node else if fail NULL
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL && i <= index)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
