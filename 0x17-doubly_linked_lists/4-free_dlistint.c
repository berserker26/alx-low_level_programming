#include "lists.h"
#include <stdlib.h>

/**
* free_dlistint - a funciton to free the list
* @head: a pointer to the first node of the list
* Return: void
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		free(head);
		head = ptr;
	}
}
