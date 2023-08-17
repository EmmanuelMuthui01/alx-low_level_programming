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
	va_list paramN;
	unsigned int i, num;

	if (separator == NULL)
	{
		return;
	}

	va_start(paramN, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(paramN, unsigned int);
		printf("%d", num);

		if (i < n - 1) /*Check if not the last number*/
		{
			printf("%s", separator);
		}
	}
	va_end(paramN);
	printf("\n");
}
