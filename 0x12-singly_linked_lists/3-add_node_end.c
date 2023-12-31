#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: A pointer to a pointer to the list_t list
 * @str: A string that needs to be duplicated
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temporary = *head;
	unsigned int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (temporary->next != NULL)
		temporary = temporary->next;

	temporary->next = new_node;

	return (new_node);
}
