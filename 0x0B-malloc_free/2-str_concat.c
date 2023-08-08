#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - function that concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: Pointer to the newly allocated space in memory which
 * contains the contents of s1 then s2, else NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
	char *result;
	int len1 = strlen(s1); /*get length of string one (s1)*/
	int len2 = strlen(s2); /*get length of string two (s2)*/
	int length = (len1 + len2 + 1); /*Length of s1, s2, & '\0'*/

	if (s1 == NULL)
	{
		s1 = ""; /*if NULL is passed in s1, treat it as empty string*/
	}

	if (s2 == NULL)
	{
		s2 = ""; /*If NULL is passed in s2, treate it as empty string*/
	}

	result = malloc(length); /*allocate memory for new concatenated string*/
	if (result == NULL) /*If malloc returns NULL ptr, return NULL*/
	{
		return (NULL);
	}

	strcpy(result, s1); /*Copy contents of s1 to result*/
	strcat(result, s2); /*concatenate contents of s2 to s1 in result*/

	return (result); /*return the concatenated string*/
}
