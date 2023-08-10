#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: The size/number of bytes to be allocated.
 *
 * Return: void pointer.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	else
	{
		return (ptr);
	}
}
