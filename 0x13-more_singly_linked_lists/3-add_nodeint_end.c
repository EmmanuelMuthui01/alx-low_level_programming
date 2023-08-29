#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: A pointer to the address of the head of the first node.
 * @n: The integer for the new node to be added.
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	else
	{
		/*Initialize the an empty new_node*/
		new_node->n = n;
		new_node->next = NULL;

		if (*head == NULL)
		{
			*head = new_node; /*If the list is empty, new_node becomes head*/
		}
		else /*Find the last node*/
		{
			listint_t *current = *head;

			while (current->next != NULL)
			{
				current = current->next; /*Move to the next node*/
			}
			current->next = new_node;
		}
	}
	return (new_node);
}
