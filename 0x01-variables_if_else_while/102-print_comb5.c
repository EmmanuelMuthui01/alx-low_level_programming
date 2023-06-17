#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all possible combination of two two-digit numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	/*introduce two variables num1 and num2*/
	/*both varibles hold two numbers e.g num1 - 23 (2 and 3) num2 - 57 (5 and 7)*/

	int num1, num2;

	for (num1 = 0; num1 < 99; num1++)
	{
		for (num2 = num1 + 1; num2 <= 99; num2++)
		{
			/*print the 2 digits of num1*/
			putchar((num1 / 10) + '0');
			putchar((num1 % 10) + '0');

			/*print the space between num1 and num2*/
			putchar(' ');

			/*print the 2 digits of num2*/
			putchar((num2 / 10) + '0');
			putchar((num2 % 10) + '0');

			/*if the last numbers of num1 and num2 are not arrived at*/
			/*print a comma and a space*/
			if (num1 != 98 || num2 != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
