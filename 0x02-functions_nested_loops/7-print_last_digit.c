#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @num: The number to be computed
 *
 * Return: value of the last digit
 */

int print_last_digit(int num)
{
	int last;	/*remainder obtained from modulo*/

	last = num % 10;

	if (num < 0)
	{
		num = num * -1;
		last = num % 10;
	}

	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');

	return (last);
}
