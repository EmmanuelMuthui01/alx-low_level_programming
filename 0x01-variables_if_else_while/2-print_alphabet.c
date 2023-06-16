#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: program prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabetLetter = 'a'; /*declare the first value of the range [a-z]*/

	/*introduce a loop that compares the ASCII value of the alphabets to z*/

	while (alphabetLetter <= 'z')
	{
		putchar(alphabetLetter);	/*print the character of the alphabet letter*/
		alphabetLetter++;	/*increament the alphabet eg a to b, b to c*/
	}
	putchar('\n');	/*add a new line after the alphabet*/
	return (0);	/*exit the program upon successful execution*/
}
