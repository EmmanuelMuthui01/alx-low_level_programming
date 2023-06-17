#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combination of three digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, m, l;	/*set three variables to represent the three numbers*/

	for (n = 48; n <= 57; n++)
	{
		for (m = n + 1; m <= 57; m++)
		{
			for (l = m + 1; l <= 57; l++)
			{
				putchar(n);
				putchar(m);
				putchar(l);
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
