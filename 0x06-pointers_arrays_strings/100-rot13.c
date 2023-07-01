#include "main.h"

/**
 * rot13 - a function that encodes a string using rot13.
 * @str: The string to be encoded
 *
 * Return: A pointer to the encoded string
 */

char *rot13(char *str)
{
	char *ptr = str;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] >= 'A' && str[i] <= 'M') || (str[i] >= 'a' && str[i] <= 'm'))
		{
			str[i] = str[i] + 13;
		}
		else if ((str[i] >= 'N' && str[i] <= 'Z') ||
			(str[i] >= 'n' && str[i] <= 'z'))
		{
			str[i] = str[i] - 13;
		}
	}

	return (ptr);
}
