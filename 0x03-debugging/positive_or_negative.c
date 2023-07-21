#include "main.h"

/**
 * positive_or_negative - Checks if a number is positive, negative, or zero.
 * @n: The number to check.
 *
 * Return: void
 */
int positive_or_negative(int n)
{
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("0 is zero\n");
	}
}
