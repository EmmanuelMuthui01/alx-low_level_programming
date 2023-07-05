#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: The string to reverse
 *
 * Return: Nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return; /*base case: end of the string*/
	}
	_print_rev_recursion(s + 1); /*recursive call with the next character*/

	_putchar(*s); /*print the current character*/
}
