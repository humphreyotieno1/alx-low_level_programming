#include <unistd.h>

/**
 * _putchar - write char c to std ouput
 * @c: char to print
 *
 * Return: On success 1, On error -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
