#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @src: the source string
 * @dest: the destination string
 * @n: the maximum number of characters to be copied from src
 *
 * Return: nothing
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;

	/*Copy at most n characters from src to dest*/
	while (*src != '\0' && n > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}

	/*Pad the remaining characters with null*/
	while (n > 0)
	{
		*ptr = '\0';
		ptr++;
		n--;
	}

	return (dest);
}
