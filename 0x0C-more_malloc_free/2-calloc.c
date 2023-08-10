#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: The number of elements.
 * @size: The size of each element.
 *
 * Return: Void pointer to the allocated memory block,
 * else return  NULL.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int index;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	/*Dynamically allocate memory using malloc*/
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (index = 0; index < (nmemb * size); index++)
	{
		ptr[index] = 0;
	}

	return (ptr);
	free(ptr);
}
