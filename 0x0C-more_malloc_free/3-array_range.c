#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: Minimum value.
 * @max: Maximum value.
 *
 * Return: Pointer to the new array, else return NULL
 */

int *array_range(int min, int max)
{
	int *array;
	int size, index;

	/*If the min value is > max value, return NULL*/
	if (min > max)
	{
		return (NULL);
	}

	/*Calculate the size of the array including the '\0'*/
	size = max - min + 1;

	/*Allocate memory for the array of integers*/
	array = malloc(sizeof(int) * size);
	if (array == NULL)
	{
		return (NULL);
	}

	/*Check and increment each value from min to max value*/
	for (index = 0; min <= max; index++, min++)
	{
		array[index] = min;
	}

	return (array);
}
