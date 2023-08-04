#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]);
int _atoi(char *s);

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted
 *
 * Return: The integer converted from the string.
 */

int _atoi(char *s)
{
	int index, d, n, len, f, digit;

	index = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0') /*Calculates length of input string (s)*/
		len++;

	while (index < len && f == 0) /*loop processing for each char in s*/
	{
		if (s[index] == '-') /*if char at index i is '-' increment 'd'*/
			++d; /*counts # of consecutive minus signs at beginning of string*/

		if (s[index] >= '0' && s[index] <= '9')
		{
			digit = s[index] - '0'; /*calc num value of digit & store in digit*/

			if (d % 2) /*if count of consecutive '-' is odd, digit is -ve*/
				digit = -digit;

			n = n * 10 + digit; /*Update var 'n' with current digit value*/
			f = 1; /*Set f to 1 to indicate @least one digit processed*/

			if (s[index + 1] < '0' || s[index + 1] > '9')
				break; /*terminate (break) if next char after current dgt is not a dgt*/
			f = 0; /*Set f back to '0'to process next digit*/
		}
		index++; /*while processes next char in the string by incrementing 'í'*/
	}

	if (f == 0) /*Means no digit found in input string hence return '0'*/
		return (0);

	return (n); /*if no valid int found, return accumulated value 'n'*/
	/*n represents converted int; if negative, it will be correctly presented*/
	/*as negative in return value*/
}


/**
 * main - program that multiplies two numbers
 * Description: program should print the result of the multiplication,
 * followed by a new line.
 * @argc: The argument count.
 * @argv: The argument vector (array of pointers to strings (char*).
 *
 * Return: If the program receives two arguments - Return 0
 * If the program does not received two arguments - Return 1
 */

int main(int argc, char *argv[])
{
	int num1, num2, product;

	if (argc != 3)
	{
		printf("Error\n");

		return (0);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	product = num1 * num2;

	printf("%d\n", product);

	return (0);
}
