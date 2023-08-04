#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of coins to
 * make change for an amout of money.
 * @argc: The number of arguments to be supplied to the program.
 * @argv: An array of pointers to the arguments provided.
 *
 * Return: If the number of arguments is not exactly 1 - 1 (Error)
 * Otherwise return 0 (0 is success, 1 is Error)
 */

int main(int argc, char *argv[])
{
	int cents, coins = 0;
	/*Cents Will store amount of cents to be converted to change*/
	/*Coins will store minimum number of coins required*/
	if (argc != 2) /*checks if exactly one arg (amount of cents) is provided*/
	{
		printf("Error\n"); /*if # of args == 2, print error*/
		return (1);
	}

	cents = atoi(argv[1]); /*convert string arg[1] to int and store in cents var*/
	while (cents > 0) /*Continue looping as long as cents > 0*/
	{
		coins++; /*Increment coins to keep track of # of coins used*/
		/*Subtract largest possible coin denom frm cents until cents becms 0*/
		if ((cents - 25) >= 0)
		{
			cents = cents - 25;
			continue;
		}
		if ((cents - 10) >= 0)
		{
			cents = cents - 10;
			continue;
		}
		if ((cents - 5) >= 0)
		{
			cents = cents - 5;
			continue;
		}
		if ((cents - 2) >= 0)
		{
			cents = cents - 2;
			continue;
		}
		cents--;
		/*If non of above denom can be used, subtract a 1 cent coin & continue*/
		/*After the while loop, min # of coins required is stored in var 'coins'*/
	}
	printf("%d\n", coins); /*Print value of stored in coins*/
	return (0); /* Successful execution*/
}
