#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 * @s: A pointer to the memory block that needs to be filled
 * @b: The value to be set in each byte of the memory block
 * @n: The number of bytes to be set in the memory block
 *
 * Return: a pointer to the memory area 's' after filling with specified value
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
