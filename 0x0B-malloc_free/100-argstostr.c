#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: Argument count / number of arguments
 * @av: Pointer to pointer to strings
 *
 * Return: A pointer to a new string, or NULL if it fails.
 */

char *argstostr(int ac, char **av)
{
	int total_length; /*Total length needed for the conc str*/
	int index, current_position;
	char *concat_str;

	if (ac == 0 || av == NULL) /*Check for a valid input*/
	{
		return (NULL);
	}

	/*Calculate total length needed for concatenated string*/
	total_length = 0;
	for (index = 0; index < ac; index++)
	{
		total_length = total_length + strlen(av[index]) + 1;
	}

	/*Allocate memory for concatenated string*/
	concat_str = malloc(sizeof(char) * total_length);
	if (concat_str == NULL)
	{
		return (NULL); /*Memory allocation failed*/
	}

	current_position = 0;
	for (index = 0; index < ac; index++)
	{
		/*Copy current argument into concatenated string*/
		strcpy(concat_str + current_position, av[index]);

		/*Move position pointer to end of copied argument*/
		current_position = current_position + strlen(av[index]);

		/*Add a newline character*/
		concat_str[current_position] = '\n';

		/*Move position pointer to next available position*/
		current_position++;
	}
	concat_str[current_position] = '\0'; /*Add null terminator to conc str*/
	return (concat_str);
}
