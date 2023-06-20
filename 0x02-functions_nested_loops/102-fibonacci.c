#include <stdio.h>

/**
 * main - prints first 50 Fibonnaci numbers starting with 1 and 2,
 * separated by a comma followed by a space
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int count;

	unsigned long f1 = 0, f2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = f1 + f2;
		printf("%lu", sum);

		f1 = f2;
		f2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(",");
	}
	return (0);
}
