#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: The number to be flipped
 * @m: The other number
 *
 * Return: the number of bits needed to be flipped to get from
 * one number to another
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_op_result;
	unsigned int bit_count = 0; /*Initialize count var to keep track of set bits*/

	xor_op_result = n ^ m; /*Perform XOR operation to find deffering bits*/

	while (xor_op_result > 0)
	{
		/*Use bitwise AND to check the LSB*/
		if (xor_op_result & 1)
		{
			bit_count++; /*Increment the count if the LSB is 1*/
		}
		xor_op_result >>= 1; /*Right shift xor_result to check next bit*/
	}
	return (bit_count); /*Return bit count of differing bits*/
}
