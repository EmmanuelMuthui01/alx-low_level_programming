#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: The destination memory area of copied data
 * @src: The source memory area containing data to be copied
 * @n: The number of bytes to copy
 *
 * Return: A character pointer to 'dest'
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *destination = dest;
	char *source = src;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		destination[i] = source[i];
	}
	return (destination);
}
