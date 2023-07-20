#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters passed
 * @...: var number of parameters to find sum of
 * Return: if n == 0
 * otherwise sum of parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list li;

	unsigned int i, sum = 0;

	va_start(li, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(li, int);
	}

	va_end(li);

	return (sum);
}
