#include "main.h"

/**
 * _pow_recursion -  returns the value of x raised to the power of y
 * @x: The value to be asigned the power
 * @y: The power to x
 *
 * Return: Nothing
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1); /*return -1 for error (invalid input)*/
	}

	if (y == 0)
	{
		return (1); /*base case: x^0 is 1*/
	}

	return (x * _pow_recursion(x, y - 1)); /*recursive call with y - 1*/
}
