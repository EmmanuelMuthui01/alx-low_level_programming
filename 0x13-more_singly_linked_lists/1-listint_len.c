#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: Pointer to the first node of a linked list
 *
 * Return: Number of elements of the linked list.
 */

size_t listint_len(const listint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		node_count++; /*Increment count for each node*/
		h = h->next; /*Move to the next node*/
	}
	return (node_count);
}
