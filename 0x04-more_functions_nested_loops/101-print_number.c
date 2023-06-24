#include "main.h"

/**
 * print_number - a function that prints an integer
 *
 * @n: the integer to be printed
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		_putchar(n + '0');
	}
	else if ((n / 10) > 0)
	{
		_putchar(n + '0');
	}
	_putchar('\n');
}
