#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */

int main()
{
	const char* message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	write(STDOUT_FILENO, message, strlen(message));

	return (1);
