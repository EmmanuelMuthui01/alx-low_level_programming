#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Write a program that prints FizzBuzz.
 * It prints the number 1-100. But for multiples of 3
 * Fizz is printed instead of number. For multiples of 5
 * Buzz is printed. For multiples of both three and five,
 * FizzBuzz is printed.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3 == 0) && (num % 5 == 0))
			printf("FizzBuzz");

		else if ((num % 3) == 0)
			printf("Fizz");

		else if ((num % 5) == 0)
			printf("Buzz");

		else
			printf("%d", num);

		if (num == 100)
			continue;

		printf(" ");
	}

	printf("\n");

	return (0);
}
