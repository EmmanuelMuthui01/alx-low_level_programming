#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, & initializes it
 * with a specific char.
 *
 * @size: The size of the array to be created.
 * @c: Character to be initialized in the array.
 *
 * Return: NULL if size = 0, also return a pointer to the array on success,
 * or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	char *array; /*a pointer to an array*/
	unsigned int index; /*index of characters inside the array*/

	array = malloc(sizeof(char) * size); /*dynamiclly allocate memory for array*/
	if (array == NULL) /*Check if memory allocation was successful*/
		return (NULL);

	if (size == 0)
	{
		return (NULL);
	}

	for (index = 0; index < size; index++)
	{
		array[index] = c; /*Initialize array with c*/
	}
	return (array); /*Return allocated array*/
}
