#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - multiplies two positive numbers.
 * @argc: The argument count.
 * @argv: The argument vector.
 *
 * Return: Results of multiplication.
 */

int main(int argc, char *argv[])
{
	int num1, num2; /*declare the two var; num 1 & num2*/

	if (argc != 3) /*If argc != 3 return Error*/
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');

		exit(98); /*Exit status of 98*/
	}

	num1 = atoi(argv[1]); /*convert num1 from ASCII to Int using atoi*/
	num2 = atoi(argv[2]); /*Convert num2 from ASCII to int using atoi*/

	/*Check if num1 and num2 are composed of digits*/
	if (!isdigit(argv[1][0]) || !isdigit(argv[2][0]))
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');

		exit(98); /*exit status*/
	}

	_putchar(num1 * num2 + '0'); /*print result of mul*/
	_putchar('\n'); /*print new line*/

	return (0);
}
