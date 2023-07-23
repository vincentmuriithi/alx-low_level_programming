#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints the n times table, starting from 0
 * @n: the value to print the times table for
 */
void print_times_table(int n)
{
	int row, col, result;

	if (n < 0 || n > 15) /* Check if n is outside the valid range */
		return;


	for (row = 0; row <= n; row++)
	{
		for (col = 0; col <= n; col++)
		{
			result = row * col;
			if (col == 0)
				printf("%d", result);
			else
				printf(", %3d", result);
		}
		printf("\n");
	}
}
