#include "variadic_functions.h"

/**
 *  print_numbers - prints numbers, followed by a new line.
 *  @separator: The string to be printed between numbers.
 *  @n: The number of integers passed to the function.
 *
 *  Return: Nothing.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list my_list;
	unsigned int i, num;

	va_start(my_list, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(my_list, unsigned int);
		printf("%d", num);

		if (i < n - 1 && separator != NULL) /*Check if not the last number*/
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(my_list);
}
