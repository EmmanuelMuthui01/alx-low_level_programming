#include "main.h"

/**
 * set_string - a function that sets the value of a pointer to a char
 * @s: The Pointer to a pointer
 * @to: Pointer char
 *
 * Return: Nothing
 */

void set_string(char **s, char *to)
{
	*s = to;
}
