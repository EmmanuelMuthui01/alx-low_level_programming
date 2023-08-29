#include "lists.h"

/**
 * free_listint - frees a linked list of type listint_t.
 * @head: A pointer to the head of the linked list to be freed.
 */

void free_listint(listint_t *head)
{
	listint_t *current_node = head; /*Create pointer to traverse the list*/
	listint_t *next_node; /*Create another pointer to store next node*/

	while (current_node != NULL) /*Traverse until the end of list*/
	{
		next_node = current_node->next; /*Store next node to prevent losing it*/
		free(current_node); /*Free current node*/
		current_node = next_node; /*Move to the next node*/
	}
}
