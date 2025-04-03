#include "lists.h"
#include <stdlib.h>

/**
* pop_listint - a subroutine to delete the head node
* @head: a pointer to the first node in the list
* @ptr: a pointer to the head also to reference
* Return: 0 if the list is empty else the head data
*/

int pop_listint(listint_t **head)
{
	listint_t *ptr = *head;
	int data = (*head)->n;

	if (*head == NULL)
	{
		return (0);
	}

	*head = ptr->next;
	free(ptr);

	return (data);
}


