#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: Pointer to the first node of the list (head of a list)
 * @index: The position of the elements in the linked list (index of node)
 *
 * Return: the nth node of a listint_t linked list
 * Otherwise - Return NULL if the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0; /*Initialize counter to track current node's position*/
	listint_t *current_node = head; /*Initialize a pointer to traverse the list*/

	while (current_node != NULL)
	{
		if (count == index)
		{
			return (current_node); /*Return current node when desired index is reached*/
		}

		current_node = current_node->next; /*Move to the next node*/
		count++; /*Increment the counter*/
	}

	return (NULL); /*If desired index is not found, return NULL*/
}
