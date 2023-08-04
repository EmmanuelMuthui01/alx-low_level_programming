#include "main.h"

/**
 * _islower - Checks for lowercase character
 * @c: The character to print
 *
 * Return: On success 1
 * Otherwise 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
