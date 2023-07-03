#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 * @s: A pointer to the memory block to be filled
 * @b: Value to be set
 * @n: Number of bytes to be set
 *
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;
	unsigned char value = (unsigned char)b;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		ptr[i] = value;
	}
	return (s);
}
