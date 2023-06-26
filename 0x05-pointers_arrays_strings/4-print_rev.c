#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse
 * @s: String to be reversed
 *
 * Return: Nothing
 */

void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}

	for (c = c - 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
