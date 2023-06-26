#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: The string to be reversed
 *
 * Return: Nothing
 */

void rev_string(char *s)
{
	int length = 0;
	int index = 0;
	char temp;

	/* Calculate the length of the string*/
	while (s[index++])
	{
		length++;
	}

	/*Reverse the string*/
	for (index = length - 1; index >= length / 2; index--)
	{
		temp = s[index];
		s[index] = s[length - index - 1];
		s[length - index - 1] = temp;
	}
}
