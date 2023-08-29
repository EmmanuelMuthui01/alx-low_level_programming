#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list.
 * @head: A pointer to the head of the linked list to be freed.
 */

void free_listint2(listint_t **head)
{
	listint_t *current_node = *head; /*Create a pointer to traverse the list*/
	listint_t *temp_ptr; /*Create another pointer to temporarily store next node*/

	if (head == NULL || *head == NULL) /*check if head pointer is null*/
	{
		return; /*There is nothing to return*/
	}

	while (current_node != NULL) /*Traverse until end of the list*/
	{
		temp_ptr = current_node->next; /*Store next node to prent losing it*/
		free(current_node); /*Free current node*/
		current_node = temp_ptr; /*Move to the next node*/
	}
	*head = NULL; /*Set the head pointer to NULL to indicate an empty list*/
}
