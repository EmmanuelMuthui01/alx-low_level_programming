#include "main.h"

/**
 * _memcpy - A function that copies memory area
 * @dest: The destination memory area of copied data.
 * @src: The source memory area containing data to be copied
 * @n: The number of bytes to copy
 *
 * Return: A character pointer to 'dest'
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *destination = dest;
	char *source = src;
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		destination[index] = source[index];
	}
	return (destination);
}
