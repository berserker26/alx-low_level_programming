#include "lists.h"
#include <stdlib.h>

/**
* get_nodeint_at_index - a returns the nth node of a list.
* @head: a pointer to a the first node in the list
* @index: a required index to find
* Return: the Node or Null if not found
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr = head;
	unsigned int i = 0;

	while (ptr != NULL && i <= index)
	{
		ptr = ptr->next;
		i++;
		if (i == index)
			return (ptr);
	}
	return (NULL);
}
