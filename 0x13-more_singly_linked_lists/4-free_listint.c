#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - a subroutine to free a given list
 *
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *ptr = head;
	if (head->next == NULL)
	{
		free(head);
		return;
	}

	while(ptr != NULL)
	{
		ptr = ptr->next;
		free(ptr);
		return;
	}
}
