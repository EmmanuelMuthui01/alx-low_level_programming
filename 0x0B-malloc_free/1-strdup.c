#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: The string to be duplicated.
 *
 * Return: Apointer to the newly allocated space which contains
 * a copy of the duplicated string.
 */

char *_strdup(char *str)
{
	char *new_string;

	if (str == NULL)
		return (NULL);

	new_string = malloc(strlen(str) + 1);
	if (new_string == NULL)
		return (NULL);

	strcpy(new_string, str);
	return (new_string);
}
