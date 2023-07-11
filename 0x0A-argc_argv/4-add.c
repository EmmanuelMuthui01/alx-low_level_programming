#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - checks string there are digit
 * @str: Array string
 *
 * Return: Always 0 (Success).
 */

int check_num(char *str)
{
	unsigned int count; /*Declairing variables*/

	count = 0;

	while (count < strlen(str)) /*count string*/
	{
		if (!isdigit(str[count])) /*check if str there are digit*/
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/**
 * main - Prints the addition of positive numbers,
 * followed by a new line.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If one of the numbers contains symbols that are non-digits - 1
 * Otherwise - 0.
 */

int main(int argc, char *argv[])
{
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;

	while (count < argc) /*goes through the whole array*/
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]); /*atoi converts string to int*/
			sum += str_to_int;
		}
		else /*Condition if one of the numbers contains a symbol not digits*/
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum); /*print sum*/

	return (0);
}
