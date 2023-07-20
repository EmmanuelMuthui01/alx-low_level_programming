#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: The array to be searched
 * @size: The size of the array
 * @cmp: The function pointer
 *
 * Return: -1 if size is less than 0, Otherwise return 1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
