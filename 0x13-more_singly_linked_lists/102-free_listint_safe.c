#include "lists.h"

size_t looped_nodes_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * looped_nodes_count - Counts the number of the unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check
 *
 * Return: If linked list is not looped, return 0
 * Else, return the number of unique nodes in the list
 */

size_t looped_nodes_count(listint_t *head)
{
	listint_t *slow, *fast;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	slow = head->next;
	fast = (head->next)->next;

	while (fast != NULL)
	{
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				nodes++;
				slow = slow->next;
				fast = fast->next;
			}

			slow = slow->next;
			while (slow != fast)
			{
				nodes++;
				slow = slow->next;
			}

			return (nodes);
		}

		slow = slow->next;
		fast = (fast->next)->next;
	}

	return (0);
}


/**
 * free_listint_safe - a function that frees a listint_t list.
 * It can free lists containing loops.
 * @h: A pointer to the address of the head of the linked list
 *
 * Return: The size of the list that was free'd
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t nodes, index;

	nodes = looped_nodes_count(*h);

	if (nodes == 0)
	{
		for (; h != NULL && *h != NULL; nodes++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
	}
	else
	{
		for (index = 0; index < nodes; index++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}

		*h = NULL;
	}

	h = NULL;

	return (nodes);
}
