#include "main.h"

/**
 * flip_bits - eturns the number of bits you would need to flip
 * to get from one number to another
 * @n: The number to be flipped
 * @m: The other number
 *
 * Return:  the number of bits you would need to flip
 * to get from one number to another.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_op_result;
	unsigned int bit_count = 0; /*Initialize count var to keep track of set bits*/

	xor_op_result = n ^ m; /*Perform XOR operation to find differing bits*/

	while (xor_op_result > 0)
	{
		/*Use bitwise AND to check the least significant bit*/
		if (xor_op_result & 1)
		{
			bit_count++; /*Increment the count if the LSB is 1*/
		}
		xor_op_result >>= 1; /*Right-shift xor result to check next bit*/
	}

	return (bit_count); /*Return bit count of differing bits*/
}
