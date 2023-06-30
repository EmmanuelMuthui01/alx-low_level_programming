#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 * @dest: destination string
 * @src: source string
 * @n: number of bythes
 *
 * Return: Nothing
 */

char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	/*Move the pointer to the end of dest*/

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

	/*Null terminate th resulting string*/
	*ptr = '\0';

	return (dest);
}
