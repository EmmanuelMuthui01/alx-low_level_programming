#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character of a string
 * starting with the first character, followed by a new line.
 * @str: A pointer to a string to be worked on.
 *
 * Return: Nothing.
 */

void puts2(char *str)
{
	int length = 0;
	int index = 0;

	/*Check the length of the string*/
	while (str[index] != '\0')
	{
		length++;
		index++;
	}

	/*Prints every other character in the string*/
	for (index = 0; index < length; index = index + 2)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
