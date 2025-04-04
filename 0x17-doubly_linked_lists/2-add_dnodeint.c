#include "lists.h"
#include <stdlib.h>

/**
* add_dnodeint - add a new node at the beginning of the list
* @head: a pointer to the first node
* @n: a data passed for the new_node data part
* Return: the address of new node if sucess else NULL
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));

	new_node->prev = NULL;
	new_node->n = n;

	if (*head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
		return (new_node);
	}
	new_node->next = *head;
	(*head)->prev = new_node;
	*head = new_node;
	return (new_node);
}
