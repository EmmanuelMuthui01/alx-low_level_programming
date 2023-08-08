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
	char *result; /*pointer to newly allocated memory*/
	int length = 0; /*stores length of concatenated string*/
	/*int len1 = strlen(s1); get length of string one (s1)*/
	/*int len2 = strlen(s2); get length of string two (s2)*/

	if (s1 == NULL)
	{
		s1 = ""; /*if NULL is passed in s1, treat it as empty string*/
	}

	if (s2 == NULL)
	{
		s2 = ""; /*If NULL is passed in s2, treate it as empty string*/
	}

	length = (strlen(s1) + strlen(s2) + 1);
	result = malloc(length); /*allocate memory for new concatenated string*/

	if (result == NULL) /*If malloc returns NULL ptr, return NULL*/
	{
		return (NULL);
	}
	else
	{
		strcpy(result, s1);
		strcat(result, s2);
	}
	return (result); /*return the concatenated string*/
	free(result);
}
