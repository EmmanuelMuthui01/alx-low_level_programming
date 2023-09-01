#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: A pointer to the bit
 * @index: The index to set the value at starting from indx 0
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit_mask;

	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
	{
		return (-1);
	}

	bit_mask = 1UL << index; /*Create a bit mask at given index set as 1*/

	*n &= ~bit_mask; /*Clear the bit at given index (set it to 0)*/

	return (1); /*Return 1 to indicate success*/
}
