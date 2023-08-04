#include "main.h"
#include <stdio.h>

/**
 * main - program that prints all arguments it receives
 * only printing one argument per line, ending with a new line.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: Always 0 (Success).
 */

int main(int argc, char *argv[])
{
	int index;

	for (index = 0; index < argc; index++)
	{
		printf("%s\n", argv[index]);
	}
	return (0);
}
