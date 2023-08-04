#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 * @s: A pointer to the memory block that needs to be filled.
 * @b: The value to be set in each byte of the memory block.
 * @n: The number of the bytes to be set in the memory block.
 *
 * Return: A pointer to the memory area 's' after filling with specified value
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;
	unsigned char value = (unsigned char)b;
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		ptr[index] = value;
	}
	return (s);
}
