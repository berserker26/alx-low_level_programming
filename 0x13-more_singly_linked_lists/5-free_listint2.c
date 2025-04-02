#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - a function to clear the list
 *
 * @head - the first node in the list
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	while (*head != NULL)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
	}

	*head = NULL;
}
