#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to find a number from another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;

	unsigned long int old;

	unsigned long int new = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		old = new >> i;
		if (old & 1)
			count++;
	}
	return (count);
}
