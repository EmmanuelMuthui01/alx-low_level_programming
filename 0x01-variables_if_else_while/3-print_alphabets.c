#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase, and then uppercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	/*list the alphabet variables for uppercase and lowercase letters*/

	char alphabetLower, alphabetUpper;

	/* use a for loop to repeat the listing of alphabets*/

	for (alphabetLower = 'a'; alphabetLower <= 'z'; alphabetLower++)
	{
		putchar(alphabetLower);
	}

	for (alphabetUpper = 'A'; alphabetUpper <= 'Z'; alphabetUpper++)
	{
		putchar(alphabetUpper);
	}

	putchar('\n'); /*print a newline*/

	return (0); /*exit upon success*/
}
