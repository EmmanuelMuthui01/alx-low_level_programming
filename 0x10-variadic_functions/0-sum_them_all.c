#include "variadic_functions.h"

/**
 * sum_them_all - Sums all its parameters
 * @n: The first argument
 *
 * Return: The sum of all its parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap; /*Declare a variadic list*/
	unsigned int i, sum; /*iterator 'i' and 'sum' for storing sum*/

	if (n == 0) /*Check if n is zero*/
	{
		return (0);
	}

	va_start(ap, n); /*va_start call with va_list and last argument*/
	sum = 0; /*Define the sum and initialize to 0*/

	for (i = 0; i < n; i++) /*Iterate through the arguments user inputs*/
	{
		sum += va_arg(ap, unsigned int); /*Find sum of args before n*/
	}

	va_end(ap); /*Frees the va_list*/
	return (sum); /*Return the sum of all func parameters*/
}
