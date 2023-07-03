#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: A pointer to an array
 * @size: The size of the array
 *
 * Return: Nothing
 */

void print_diagsums(int *a, int size)
{
	int index;
	int sum1 = 0;
	int sum2 = 0;

	/*Calculating the sum of the first diagonal*/
	for (index = 0; index < size; index++)
	{
		sum1 += a[index * size + index];
	}

	/*Calculating the sum of the second diagonal*/
	for (index = 0; index < size; index++)
	{
		sum2 += a[index * size + (size - 1 - index)];
	}
	printf("%d, %d\n", sum1, sum2);
}
