#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list.
 * @head: A pointer to the head of the linked list to be freed.
 */

void free_listint2(listint_t **head)
{
	listint_t *temp_ptr; /*Create another pointer to temporarily store next node*/

	if (head == NULL) /*check if head pointer is null*/
	{
		return;
	}

	while (*head != NULL) /*Traverse until end of the list*/
	{
		temp_ptr = (*head)->next; /*Store the next node temporary*/
		free(*head); /*Free current node*/
		*head = temp_ptr; /*Move the head pointer to the next node*/
	}
	head = NULL; /*Set the head pointer to NULL to indicate an empty list*/
}
