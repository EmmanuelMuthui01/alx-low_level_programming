#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: Double pointer to the first node of the linked list.
 * @n: The data to enter inside the new node.
 *
 * Return: the address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	/*First create the new_node*/
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	else
	{
		/*Initialize the new node created*/
		new_node->n = n;
		new_node->next = *head;

		/*Update the head pointer*/
		*head = new_node;
	}
	return (new_node);
}
