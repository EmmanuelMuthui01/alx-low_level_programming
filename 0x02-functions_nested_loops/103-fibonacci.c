#include <stdio.h>

/**
 * main - Entry point
 * Descritpion: finds and prints the sum of the even-valued terms
 *
 * Return: Always 0
 */

int main(void)
{
	int limit = 4000000;
	long int first = 1, second = 2;
	long int sum = 0;

	while (second <= limit)
	{
		if (second % 2 == 0)
		{
			sum = sum + second;
		}

		long int next = first + second;

		first = second;
		second = next;
	}
	printf("%ld\n", sum);

	return (0);
}
