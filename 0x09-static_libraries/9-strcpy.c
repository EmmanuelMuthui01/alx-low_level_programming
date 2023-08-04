#include "main.h"

/**
 * _strcpy - Copies a string pointed to by @src, including
 * terminating null byte, to a buffer pointed to by @dest.
 * @dest: A buffer to copy the string.
 * @src: The source string to copy.
 *
 * Return: A pointer to the destination string @dest.
 */

char *_strcpy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}
	dest[index++] = '\0';
	return (dest);
}
