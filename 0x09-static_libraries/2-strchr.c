#include "main.h"

/**
 * _strchr - Function that locates a character in a string.
 * @s: A pointer to the string with the chacter to be located.
 * @c: The character to be located.
 *
 * Return: Pointer to the first occurence of the character c in the string s
 * or NULL if the charcter is not found.
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
		{
			return (s + index);
		}
	}
	return ('\0');
}
