#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the character to be printed
 *
 * Return: 1 (success)
 */

int print_sign(int n)
{
	if (n > 48)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 48)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
