#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 * @dest: Destination string.
 * @src: Source string.
 * @n: Number of bytes.
 *
 * Return: Nothing.
 */

char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	/*Move the pointer to the end of the end*/

	while (*ptr != '\0')
	{
		ptr++;
	}

	/*Copy at most n bytes from src to dest*/

	while (*src != '\0' && n > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}

	/*Null terminates the resulting string*/
	*ptr = '\0';

	return (dest);
}
