#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: The number to be factorized.
 *
 * Return: factorial of number n.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
