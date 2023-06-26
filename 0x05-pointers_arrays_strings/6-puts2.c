#include "main.h"

/**
 * puts2 - a function that prints every other character of a string
 * starting with the first character, followed by a new line.
 * @str: the string containing characters
 *
 * Return: Nothing
 */

void puts2(char *str)
{
	int index = 0;
	int length = 0;

	while (str[index] != '\0')
	{
		index++;
	}

	for (index = 0; index < length; index += 2)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
