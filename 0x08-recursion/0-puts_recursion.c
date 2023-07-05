#include "main.h"

/**
 * _puts_recursion - Function that prints a string
 * @s: The string to be printed
 *
 * Return: Nothing
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');	/*base case: end of string*/
		return;
	}
	_putchar(*s); /*print the current character*/
	_puts_recursion(s + 1); /*recursive call with the next character*/
}
