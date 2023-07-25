#include "main.h"
/**
 * puts2 - prints every other character of tghe string
 * @str: input
 * Return: returns void
 */
void puts2(char *str)
{
/*	int length = 0;*/

	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}

	_putchar('\n');
}
