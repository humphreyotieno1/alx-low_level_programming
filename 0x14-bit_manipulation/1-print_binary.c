#include "main.h"

/**
 * print_binary - prints binary equivalent of a binary number
 * @n: number printed in binary
 */

void print_binary(unsigned long int n)
{
	int i, count = 0;

	unsigned long int x;

	for (i = 63; i >= 0; i--)
	{
		x = n >> i;

		if (x & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
