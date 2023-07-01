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
	unsigned long long first = 1, second = 2;
	unsigned long long sum = 0;

	while (second <= limit)
	{
		if (second % 2 == 0)
		{
			sum = sum + second;
		}

		unsigned long long next = first + second;

		first = second;
		second = next;
	}
	printf("%llu\n", sum);
	return (0);
}
