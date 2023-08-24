#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: Pointer to head of list_t list which is to be freed
 *
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *temporary; /*Declare a pointer to a temporary node*/

	while (head)
	{
		temporary = head->next; /*Set temporary pointer to next node in the list*/
		free(head->str); /*Free memory allocated to str field of the current node*/
		free(head); /*Free memory allocated for the current node*/
		head = temporary; /*Set head pointer to point to next node in the list*/
	}
}
