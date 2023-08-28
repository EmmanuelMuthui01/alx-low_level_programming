#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: Constant pointer of type listint_t
 *
 * Return: The number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n); /*Print data of current node*/
		node_count++; /*Increment count for each node*/
		h = h->next; /*Move to the next node*/
	}
	return (node_count); /*Return the number of nodes*/
}
