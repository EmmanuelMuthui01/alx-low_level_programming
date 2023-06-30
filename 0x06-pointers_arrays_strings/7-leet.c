#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @str: The string to be encoded
 *
 * Return: The pointer with an ecoded string
 */

char *leet(char *str)
{
	char *ptr = str;
	int replacements[5] = { 'A', 'E', 'O', 'T', 'L' };
	int encoded[5] = { '4', '3', '0', '7', '1' };
	int i, j;

	for (i = 0; i < 5; i++)
	{
		for (j = 0; str[j] != '\0'; j++)
		{
			if (str[j] == replacements[i] || str[j] == replacements[i] + 32)
			{
				str[j] = encoded[i];
			}
		}
	}
	return (ptr);
}
