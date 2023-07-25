#include "main.h"
/**
 * puts_half - printas the 2nd half of string if its even
 * @str: input pointer
 * Return: returns void
 */
void puts_half(char *str)
{
	int k, i, half, n;

	k = 0;

	while (*str != '\0')
	{
		k++;
	}

	half = k / 2;
	i = k - 1;
	n = (k - 1) / 2;

	while (str  > '0')
	{
		if (half % 2 == 0)
		{
			_putchar(*(str + i));
		}
		else
		{
			if (i < n)
			{
				_putchar(*(str + i));
			}
		}

		i++;

	}

	_putchar('\n');
}
