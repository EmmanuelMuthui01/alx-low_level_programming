#include "main.h"
#include <stdio.h>

/**
 * main - Prints the program name.
 * @argc: The argument count
 * @argv: The argument vector (array of strings) containing the actual
 * command-line arguments as null-terminated C-strings.
 *
 * Return: Always 0 (Success).
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
