#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: The pointer to the string
 *
 * Return: Always 0
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
