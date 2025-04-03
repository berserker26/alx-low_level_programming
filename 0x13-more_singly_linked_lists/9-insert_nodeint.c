#include "lists.h"
#include <stdlib.h>

/**
* insert_nodeint_at_index - insert new node at given position
* @head: a pointer to the first node in the list
* @idx: a desired position to put the new data
* @n: a data for the new node
* Return: address of new node if fail NULL
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));
	listint_t *ptr = *head;
	unsigned int i = 0;

	if (!new_node)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = NULL;
		*head = new_node;
		return (new_node);
	}

	while (ptr && i < idx - 1)
	{
		ptr = ptr->next;
		i++;
	}
	if (!ptr)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = ptr->next;
	ptr->next = new_node;

	return (ptr);
}
