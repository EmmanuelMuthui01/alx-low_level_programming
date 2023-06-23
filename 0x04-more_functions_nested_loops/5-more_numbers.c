#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14
 * followed by a new line.
 *
 * Return: void (nothing)
 */

void more_numbers(void)
{
	int i, num;

	for (i = 1; i <= 10; i++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
				_putchar('1');
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
