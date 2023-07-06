#include "main.h"

int find_sqr(int num, int root);
int _sqrt_recursion(int n);

/**
 * find_sqr - Finds the natural squre root of an input number
 * @num: The number to find the squre root of.
 * @root: The root to be tested
 *
 * Return: If the number has a natural squre root - the squre root
 * If the number does not have a natural squre root - -1
 */

int find_sqr(int num, int root)
{
	if (root * root == num)
	{
		return (root);
	}

	if (root == num / 2)
	{
		return (-1);
	}
	return (find_sqr(num, root + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: The input number
 *
 * Return: The natural squre root of number n
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
	{
		return (-1);
	}

	if (n == 1)
	{
		return (1);
	}

	return (find_sqr(n, root));
}
