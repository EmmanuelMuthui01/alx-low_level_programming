#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: A pointer to the head of the linked list.
 * @idx: is the index of the list where the new node should be added
 * Index starts at 0
 * @n: Data of the new node.
 *
 * Return: A new updated linked list, if it is not possible to add
 * the new node at index idx, do not add the new node and return NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node; /*Declare a pointer for new node*/
	listint_t *current_node = *head; /*Declare ptr for curr node set it to head*/
	listint_t *prev_node = NULL; /*Declare a ptr for prev node set to NULL*/
	unsigned int count = 0; /*Initialize count var; keep track of node position*/

	new_node = malloc(sizeof(listint_t)); /*Allocate mem for new node position*/
	if (head == NULL) /*If head ptr is NULL,if so return NULL(invalid input)*/
		return (NULL);

	new_node = malloc(sizeof(listint_t)); /*Allocate memory for the new node*/
	if (new_node == NULL)
		return (NULL); /*Check if mem allocation failed, and if so return NULL*/

	new_node->n = n; /*Assign the value n to the data field of the new node*/
	new_node->next = NULL; /*Set next ptr of new node to NULL*/
				/*(initially not connected to the node)*/

	if (idx == 0)
	{
		new_node->next = *head; /*set the new node's next pointer to current head*/
		*head = new_node; /*Update the head pointer to point to the new node*/
		return (new_node); /*Return the address of the new node*/
	}
	while (current_node != NULL && count < idx)
	{
		prev_node = current_node; /*Move previous node pointer to current node*/
		current_node = current_node->next; /*Move current node pointer to next node*/
		count++; /*Increment the count to track the node position*/
	}
	if (count == idx)
	{
		prev_node->next = new_node; /*Connect the previous node to the new node*/
		new_node->next = current_node; /*Connect the new node to the current node*/
		return (new_node); /*Return the address of the new node*/
	}
	else
	{
		free(new_node); /*If desired index is out of range, free new node*/
		return (NULL); /*Return NULL to indicate failure*/
	}
}
