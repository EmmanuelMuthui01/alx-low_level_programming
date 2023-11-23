#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: The number to be converted to binary
 *
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	if (n >> 0) /*If n is > than 0, evaluate as true, execute*/
	{
		if (n >> 1) /*check if theres more bits to process*/
			print_binary(n >> 1); /*recursively call the fn*/
		_putchar((n & 1) + '0'); /*Print LSB*/
	}
	else
	{
		_putchar('0'); /*if n < than 0*/
	}
}
