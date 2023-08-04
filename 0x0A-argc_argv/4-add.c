#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h> /*for testing and manipulating characters*/

int check_num(char *str);
int main(int argc, char *argv[]);

/**
 * check_num - checks if given string contains only digit (numeric characters)
 * @str: Array string.
 *
 * Return: Always 0 (Success)
 */

int check_num(char *str)
{
	unsigned int count; /*track current position while looping thro input string*/

	count = 0; /*loop will start from beginning of string*/

	while (count < strlen(str)) /*strlen(str) returns len of str*/
	{
		if (!isdigit(str[count])) /*isdigit checks if given char is dec digit (0-9)*/
		{
			return (0); /*If char at current pos 'count' is not a digit, return 0*/
		}
		count++; /*check next string*/
	}
	return (1); /*return 1 if no non-digit chars in string*/
}


/**
 * main - adds positive numbers.
 * @argc: Number of command-line arguments passed to the program.
 * @argv: Array of strings (char *s) that holds command-line
 * arguments as individual strings (Array of pointers to arguments.
 *
 * Return: If one of the numbers contains symbols that are non-digits - 1
 * Otherwise return 1.
 */

int main(int argc, char *argv[])
{
	int count; /*keep track of current position while iterating thr the args*/
	int str_to_int; /*Used to store the result of conv a arg from str to int*/
	int sum; /*Used to store the sum of all valid int cmd-line arguments*/

	sum = 0;
	count = 1; /*count initialized to 1 since argv[0] is program name*/
			/*so count starts processing the second argument argv[1]*/

	while (count < argc) /*loop runs until count is equal to argc*/
	{
		if (check_num(argv[count])) /*Check for valid int at index count*/
		{
			str_to_int = atoi(argv[count]); /*Conv current arg to int usn atoi*/
			sum = sum + str_to_int; /*Adds the converted int to the 'sum' variable*/
		}
		else /*If current arg is not valid integer*/
		{
			printf("Error\n");
			return (1); /*indicates an error message has occured so program terminates*/
		}
		count++; /*Increment value of count*/
	}

	printf("%d\n", sum);

	return (0);
}
