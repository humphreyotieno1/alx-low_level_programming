#include "main.h"

/**
 * clear_bit - set value of a bit to 0
 * @n: pointer to number to change
 * @index: of the bit to clear
 *
 * Return: 1 on success, -1 on fail
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
