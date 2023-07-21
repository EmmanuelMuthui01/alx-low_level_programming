#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints strings
 * @separator: Separates the strings
 * @n: Number of strings passed
 *
 * Return:  Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	char *str;

	va_list my_list;

	va_start(my_list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(my_list, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(my_list);
}
