#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of integers
 * @a: an array of integers
 * @n: number of elements of the array
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n -1;

	while (start <  end)
	{
		/*Swap elements at start and end indices*/
		int temp = a[start];
		a[start] = a[end];
		a[end] = temp;

		start++;
		end--;
	}
}
