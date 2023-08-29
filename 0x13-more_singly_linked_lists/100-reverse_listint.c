#include "lists.h"

/**
 * reverse_listint - a function that reverses a listint_t linked list.
 * @head: A pointer that holds the addresss to the head of the linked list.
 *
 * Return: a pointer to the first node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node = NULL; /*Initialize ptr for prev node (starts as NULL)*/
	listint_t *next_node = NULL; /*Initialize ptr for next node (starts as NULL)*/

	while (*head != NULL)
	{
		next_node = (*head)->next; /*Store next node in original list*/
		(*head)->next = prev_node; /*Rev curr node's next ptr to point to prev node*/
		prev_node = *head; /*Move prev node ptr to current node*/
		*head = next_node; /*Move the head ptr to the next node*/
	}

	*head = prev_node; /*Update the head ptr to point to last node (new node)*/

	return (*head); /*Return the new head of the reversed list*/
}
