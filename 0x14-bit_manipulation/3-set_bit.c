#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given number
 * @n: A pointer to the bit
 * @index: is the index, starting from 0 of the bit to be set
 *
 * Return: 1 if it worked, -1 if an error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit_mask;

	if (index >= (sizeof(unsigned long int) * 8) || n == NULL)
	{
		return (-1); /*Error: index is out of bounds or n is NULL*/
	}

	bit_mask = 1UL << index; /*Create a bit mask at a given index set*/

	*n |= bit_mask; /*Set the bit at a given index to 1*/

	return (1); /*Return 1 to indicate success*/
}
