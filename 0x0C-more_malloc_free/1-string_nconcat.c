#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: The first string
 * @s2: The second string
 * @n: Number of bytes
 *
 * Return: Char pointer pointing to a newly allocated space in
 * memory, which contains s1, folloowed by n bytes of s2, and
 * null terminated, Else return NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len = 0, index;
	char *new_str;

	/*if strings s1 and s2  are NULL return empty string*/
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	/*Calculate the length of s1*/
	for (index = 0; s1[index]; index++)
	{
		len++;
	}

	/*Dynamically allocate memory for the new string*/
	new_str = malloc(sizeof(char) * (len + 1));

	/*Check if returned pointer by malloc is NULL or not*/
	if (new_str == NULL)
	{
		return (NULL);
	}

	len = 0;
	/*Copying characters from s1*/
	for (index = 0; s1[index]; index++)
	{
		new_str[len++] = s1[index];
	}
	/*Copying characters from s2*/
	for (index = 0; s2[index] && index < n; index++)
	{
		new_str[len++] = s2[index];
	}
	new_str[len] = '\0';
	return (new_str);
}
