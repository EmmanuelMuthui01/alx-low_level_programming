#include "main.h"

/**
 * _strspn - Function that gets the length of a prefix substring
 * @s: The main string to be scanned
 * @accept: The string containing the list of characters to match in 's'
 *
 * Return: The number of bytes in the initial segement of 's'
 * which consists only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				bytes++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}
