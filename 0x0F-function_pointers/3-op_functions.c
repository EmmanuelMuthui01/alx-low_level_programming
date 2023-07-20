#include "3-calc.h"i

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Function that adds two integers 'a' and 'b'.
 * @a: First integer
 * @b: Second integer
 *
 * Return: The sum of the two integers.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Function finds the difference of 'a' and 'b'
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The difference between two integers.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Function finds the product of 'a' and 'b'.
 * @a: The first integer
 * @b: The secons integer
 *
 * Return: The product of 'a' and 'b'.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - The function divides two integers 'a' and 'b'.
 * @a: The numerator
 * @b: The denominator
 *
 * Return: The result of the division.
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Function returns the remainder of division of 'a' by 'b'.
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The remainder of the division of 'a' by 'b'.
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
