#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: Number to be calculated.
 * @y: The power of number x.
 *
 * Return: The value of x raised to the power of y.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0) /*Base case 1: If y is less than 0 result is -1*/
	{
		return (-1);
	}
	else if (y == 0) /*Base case 2: If y is 0 result is 1*/
	{
		return (1);
	}
	else if (y == 1) /*Base case 3: If y is equal to 1 result is x*/
	{
		return (x);
	}
	/*Recursive call: Calculate x^(y-1) and multiply it by x*/
	return (x * _pow_recursion(x, y - 1));
}
