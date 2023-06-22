#include"main.h"

/**
 * print_numbers - prints number 0 to 9
 *
 * Return: void
 */

void print_numbers(void)
{
	void _putchar(char c);

	for (char c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
