#include "main.h"

int find_string_length(char *s);
int check_if_palindrome(char *s, int length, int index);
int is_palindrome(char *s);

/**
 * find_string_length - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */

int find_string_length(char *s)
{
	int length = 0; /*Intitialize the length of the string*/

	if (*(s + length))
	{
		length++; /*Increment length for current character*/
		length += find_string_length(s + length); /*Recursively calc len of rem str*/
	}
	return (length); /*Return final length of string*/
}

/**
 * check_if_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 * @length: The length of the string.
 * @index: The index of the string to be checked.
 *
 * Return: If the string is palindrome - Return 1
 * If the string is not a palindrome - Return 0
 */

int check_if_palindrome(char *s, int length, int index)
{
	if (s[index] == s[length / 2]) /*If current char matches middle char*/
	{
		return (1); /*meaning that the string is a palindrome*/
	}

	if (s[index] == s[length - index - 1])
	{
		return (check_if_palindrome(s, length, index + 1));
	}
	return (0);
}

/**
 * is_palindrome - Checks if a string is a palindrome or not.
 * @s: The string to be checked.
 *
 * Return: Nothing.
 */

int is_palindrome(char *s)
{
	int index = 1;
	int length = find_string_length(s);

	if (!(*s))
	{
		return (1);
	}
	return (check_if_palindrome(s, length, index));
}
