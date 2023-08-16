#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: Pointer to the array that is to be searched
 * @size: The size of the array
 * @cmp: Function pointer
 *
 * Return: the index of the first element for which the cmp function
 * does not return 0, If no element matches, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0) /*Compare using cmp function*/
		{
			return (index); /*Return index where cmp doesnt return 0*/
		}
	}
	return (-1); /*Return -1 if no element matches the condition*/
}
