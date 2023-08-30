#include "lists.h"

/**
 * find_listint_loop - a function that finds the loop in a linked list.
 * @head: A pointer to the head of the listint_t linked list.
 *
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop.
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	if (head == NULL || head->next == NULL)
	{
		return (NULL);
	}

	slow = head->next;
	fast = (head->next)->next;

	while (fast && fast->next)
	{
		if (slow == fast)
		{
			/*Loop detected*/

			slow = fast;

			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}

			return (slow); /*or fast, they both point to the start of loop*/
		}

		slow = slow->next;
		fast = (fast->next)->next;
	}

	return (NULL); /*No loop found*/
}
