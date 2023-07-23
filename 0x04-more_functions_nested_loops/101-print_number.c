#include "main.h"

/**
 * print_number - prints an integer
 * @n: the integer to be printed
 */
void print_number(int n)
{
	int num = n;
	int power;
	int temp;

	power = 1;
	temp = num;

	if (num == 0)
	{
		_putchar('0');
		return;
	}

	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}


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
