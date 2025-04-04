#include "lists.h"
#include <stdlib.h>

/**
* sum_dlistint - a function to add all data inside the list
* @head: a pointer to the first node
* Return: the total sum of the list
*/

int sum_dlistint(dlistint_t *head)
{
	int i = 0, sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
		i++;
	}
	return (sum);
}
