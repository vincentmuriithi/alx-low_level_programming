#include "main.h"
/**
 * print_diagonal - prints a diagonal
 * @n: the number of times to print the \ character
 * Return: returns void
 */
void print_diagonal(int n)
{
	int k, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (k = 0; k < n; k++)
	{

		for (j = 0; j < k; j++)
		{
			_putchar(' ');
		}

		_putchar('\\');
		_putchar('\n');
	}
}
