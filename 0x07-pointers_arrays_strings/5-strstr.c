#include "main.h"

/**
 * _strstr - Function that locates a substring
 * @haystack: This is the main string to be scanned
 * @needle: This is the small string to be searched within haystack string
 *
 * Return: Pointer to the beginning of the located substring
 * NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == '\0')
		return (haystack);

	while (*haystack != '\0')
	{
		i = 0;

		while (haystack[i] == needle[i])
		{
			if (needle[i + 1] == '\0')
			{
				return (haystack);
			}
			i++;
		}
		haystack++;
	}
	return ('\0');
}
