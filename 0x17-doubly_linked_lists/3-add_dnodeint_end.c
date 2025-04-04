#include "lists.h"
#include <stdlib.h>

/**
* add_dnodeint_end - a function to add a new_node at the end
* @head: a pointer to the first node
* @n: a data for the new node
* Return: the address of the new node else NULL
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	dlistint_t *ptr = *head;

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	while (ptr->next != NULL)
		ptr = ptr->next;
	new_node->prev = ptr;
	ptr->next = new_node;

	return (new_node);
}
