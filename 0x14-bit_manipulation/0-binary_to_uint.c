#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: A pointer pointing to a string of 0 and 1 chars
 *
 * Return: the converted number,
 * or 0 if there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int length = 0;
	int i = 0, binary_digit;
	char digit;

	if (b == NULL)
		return (0);

	while (b[length] != '\0')
	{
		length++;
	}

	for (i = 0; i < length; i++)
	{
		digit = b[i];

		if (digit != '0' && digit != '1')
		{
			return (0);
		}
		else
		{
			binary_digit = digit - '0';
			result = result * 2 + binary_digit;
		}

	}
	return (result);
}
