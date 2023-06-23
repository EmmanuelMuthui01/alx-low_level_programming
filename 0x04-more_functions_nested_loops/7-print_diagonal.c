#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 *
 * Return:  void (nothing)
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i; /*row or iterations*/
		int j; /*columns in each iteration*/

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j == i)
					_putchar('\\');
				else if (j < i)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
