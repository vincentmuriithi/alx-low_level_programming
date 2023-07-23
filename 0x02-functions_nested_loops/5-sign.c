#include "main.h"
/**
 * print_sign - checks the sign of a number
 * @c: input
 * Return: returns 1 if c is > 0, -1 if c < 0 and 0 if c is zero
 */
int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (c == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (c < 0)
	{
		_putchar('-');
		return (-1);
	}
}
