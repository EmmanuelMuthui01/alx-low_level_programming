#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: A pointer with the address of the head of the linked list.
 * @index: is the index of the node that should be deleted. Index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node = *head; /*Declare ptr to curr node, init with head*/
	listint_t *prev_node = NULL;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next; /*Update head pointer to skip first node*/
		free(current_node); /*Free memory of deleted node*/
		return (1); /*Success*/
	}

	while (current_node != NULL &&  count < index)
	{
		prev_node = current_node;
		current_node = current_node->next;
		count++;
	}

	if (count == index && current_node != NULL)
	{
		prev_node->next = current_node->next; /*Update the previous node's next ptr*/
		free(current_node); /*Free the memory of deleted node*/
		return (1); /*Success*/
	}
	else
	{
		return (-1); /*Index is out of range/node not found*/
	}
}
