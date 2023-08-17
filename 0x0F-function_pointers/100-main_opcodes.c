#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - Print the opcodes of the program
 * @a: The address of the main function.
 * @n: The number of bytes to print.
 */

void print_opcodes(char *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%.2hhx", a[index]);

		if (index < n - 1)
		{
			printf(" ");
		}
	}
	printf("\n");
}

/**
 * main - Function prints the opcodes of its own main function
 * @argc: Number of arguments passed to the function.
 * @argv: Array of pointers to arguments.
 *
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n = atoi(argv[1]);

	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, n);
	return (0);
}
