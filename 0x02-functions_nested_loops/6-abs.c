#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @c: The number to be computed
 * Return: The absolute value of number
 */

int _abs(int c)
{
	int abs_value;

	if (c < 0)
	{
		abs_value = c * -1;
		return (abs_value);
	}
	else
		return (c);
}
