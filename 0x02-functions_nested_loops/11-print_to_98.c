#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: the starting number
 */
void print_to_98(int n)
{
	/* Determine the direction of counting (increment or decrement) */
	int step = (n <= 98) ? 1 : -1;

	/* Loop from n to 98 (inclusive) and print the numbers */
	while (n != 98)
	{
		printf("%d, ", n);
		n += step;
	}

	printf("%d\n", n); /* Print 98 at the end */
}
