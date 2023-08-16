#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - prints a name.
 * @name: The pointer to the name to print (a string)
 * @f: A function pointer to the function that prints a name
 *
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		(*f)(name);
	}
}
