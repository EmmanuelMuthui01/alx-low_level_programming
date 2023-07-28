#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a list_t list (linked list).
 * @head: List_t list to be freed.
 *
 * Return: Nothing.
 */

void free_list(list_t *head)
{
	list_t *temp; /*Declare a pointer to a temporary node*/

	while (head)
	{
		temp = head->next; /*Set the temporary pointer to the next node in the list*/
		free(head->str); /*Free memory allocated to str field of current node*/
		free(head); /*Free memory allocated for the current node*/
		head = temp; /*Set haed pointer to point to next node in the list*/
	}
}
