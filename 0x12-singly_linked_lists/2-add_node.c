#include "lists.h"
/**
 * add_node - A function to add a node at the beginning of the list
 * @head: pointer to the first node(element in the list)
 * @str: a srting data to be added in the newNode Data field
 *
 * Return: address of new Node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = (malloc(sizeof(list_t)));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);

	new_node->next = *head;
	(*head) = new_node;
	return (new_node);
}
