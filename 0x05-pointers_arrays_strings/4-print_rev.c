#include "main.h"

/**
 * print_rev - prints a string, in reverse followed by a new line
 * @s: string
 * Return: void
 */

void print_rev(char *s)
{
	int len;

	int o;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	for (o = len; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
