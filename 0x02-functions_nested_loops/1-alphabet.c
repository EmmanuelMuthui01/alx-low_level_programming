#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Description: prints the alphabet in lowercase followed by new line
 *
 * Return: void
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
