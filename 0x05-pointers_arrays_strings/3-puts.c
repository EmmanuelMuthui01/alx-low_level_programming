#include "main.h"

/**
 * _puts - a function that prints a string, followed by a new line, to stdout
 * @str: The string to print
 *
 * Return: Nothing
 */

void _puts(char *str)
{
	int i; /*iteration over each character in the string*/

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
