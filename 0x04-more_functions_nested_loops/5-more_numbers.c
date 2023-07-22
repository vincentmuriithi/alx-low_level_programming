#include "main.h"
/**
 * more_numbers - prints ten times the numbers from 0 to 14
 * Return: returns void
 */
void more_numbers(void)
{
	int k, j;

	for (k = 0; k < 10; k++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				_putchar('0' + j / 10);
			}
			_putchar('0' + j % 10);
		}

		_putchar('\n');
	}
}
