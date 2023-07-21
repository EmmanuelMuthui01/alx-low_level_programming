#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - The function that returns the sum of all its parameters
 *
 * @n: Number of inputs
 * Return: Sum of the parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;

	unsigned int sum = 0;

	va_list my_list;

	if (n == 0)
	{
		return (0);
	}
	va_start(my_list, n);

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(my_list, int);
	}
	return (sum);
}
