#include "main.h"

/**
 * print_number - prints an integer
 * @n: the integer to be printed
 */
void print_number(int n)
{
	unsigned int num;
	unsigned int temp;
	int power;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}

	if (num == 0)
	{
		_putchar('0');
		return;
	}

	power = 1;
	temp = num;

	while (temp > 9)
	{
		temp /= 10;
		power *= 10;
	}

	while (power > 0)
	{
		_putchar((num / power) + '0');
		num %= power;
		power /= 10;
	}
}
