#include <stdio.h>
#include "main.h"

/**
 * print_array - a function that prints n elements of an array of integers
 * @a: The array of integers
 * @n: The number of elements of the array to be printed
 *
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);

		if (j != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
