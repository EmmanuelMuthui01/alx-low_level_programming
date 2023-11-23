#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: A pointer pointing to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if there is one or more
 * chars in the string b that is ot 0 or 1 b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int sum = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0') /*Calculate length of string*/
	{
		/*Check if character is '0' or '1'*/
		if (*b != '0' && *b != '1')
		{
			return (0); /*Invalid input, so return 0*/
		}
		else
		{
			/*Multiply current sum by 2 and add the binary digit*/
			sum = sum * 2 + (*b - '0');
			b++;
		}
	}
	return (sum);
}
