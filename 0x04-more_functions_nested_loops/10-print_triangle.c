#include "main.h"
/**
 * print_triangle - draws triangle as per given input
 * @n: the size of triangle
 * Return: returns void
 */
void print_triangle(int n)
{
	int k, i;

	if (n == 0)
	{
		_putchar(' ');
		return;
	}

	for (k = 0; k < n; k++)
	{
		for (i = 0; i < n - k - 1; i++)
		{
			_putchar(' ');

		}
		for (i = 0; i < k + 1; i++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
}
