#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: The string whose length is to be measured
 *
 * Return: Nothing
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0); /*base case: end of the string*/
	}
	return (1 + _strlen_recursion(s + 1)); /*recursive call with the character*/
}
