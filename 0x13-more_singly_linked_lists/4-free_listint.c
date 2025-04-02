#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - a subroutine to free a given list
 * @head: the first node in the list
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head != NULL)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
