#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - add new node int the list
 * @head: a pointer to the first node in the list
 * @n: a data to be inserted in the new node
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = (listint_t *)(malloc(sizeof(listint_t)));

	if (!new_node)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
