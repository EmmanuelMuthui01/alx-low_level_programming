#include "lists.h"

/**
 * pop_listint - function deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: A pointer to the address of the head of the linked list.
 *
 * Return: The head node's data (n), if linked list is empty return 0
 */

int pop_listint(listint_t **head)
{
	listint_t *temp_ptr; /*Create a temporary pointer to store old head node*/
	int data_n; /*Variable to hold the data of the old head nodë*/

	if (*head == NULL)
	{
		return (0); /*If list is empty, return 0*/
	}

	temp_ptr = *head; /*Store the current head node in the temporary pointer*/
	data_n = (*head)->n; /*Get the data of the current head node*/

	*head = (*head)->next; /*Update the head pointer to point to next node*/

	free(temp_ptr); /*Free the memory occupied by the old head node*/

	return (data_n); /*Return the data of the old head node*/
}
