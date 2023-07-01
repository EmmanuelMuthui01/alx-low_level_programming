#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int i;
	long int fibonacci[50];

	fibonacci[0] = 1;
	fibonacci[1] = ';
	printf("%ld, %ld, ", fibonacci[0], fibonacci[1]);

	for(i = 2; i < 50; i++)
	{
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];

		if (i ==49)
		{
			printf("ld\n", fibonacci[i]);
		}
		else
		{
			printf("%ld\n, ", );
		}
	}
	return (0);
}
