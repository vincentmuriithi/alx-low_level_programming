#include "main.h"
/**
 *  print_most_numbers - prints numbers 0 to 9 skipping 2 and 4
 *  Return: returns void
 */
void  print_most_numbers(void)
{
	int k;

	for (k = 0; k <= 9; k++)
	{
		if (k == 2 || k == 4)
		{
			continue;
		}
		_putchar(k + '0');
	}

	_putchar('\n');
}
