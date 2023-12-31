#include "main.h"

/**
 * _strchr - Function that locates a character in a string
 * @s: A pointer to the string with the character to be located
 * @c: The character to be located
 *
 * Return: Pointer to the first occurence of the character c in the string s
 * or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
