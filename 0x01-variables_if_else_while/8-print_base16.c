#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all the numbers of base 16 in lowercase
 *
 * Returns: Always 0 (Success)
 */

int main(void)
{
	/*the goal of the program is to print 0123456789abcdef*/

	int n;	/*to represent the numbers 0 to 9*/
	int m;	/*to represent the letters a to f*/

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}

	for (m = 97; m <= 102; m++)
	{
		putchar(m);
	}
	putchar('\n');

	return (0);
}
