#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: Argument count (# of command-line args passed to the prog)
 * @argv: Argument vector (an array of pointers to strings (char*)
 *
 * Return: Always 0 (Success).
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
