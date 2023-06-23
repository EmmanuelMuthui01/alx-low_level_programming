#include "main.h"

/**
 * print_square - a function that prints a square
 * @size: the size of the square
 *
 * Return: void (nothing)
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j; /*i is for rows and j is for columns*/

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
