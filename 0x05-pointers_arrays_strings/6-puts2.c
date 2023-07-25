#include "main.h"
/**
 * puts2 - prints every other character of tghe string
 * @str: input
 * Return: returns void
 */
void puts2(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		if (length % 2 == 0)
		{
			_putchar(str[length]0;
					}

					length++;
					}

					_putchar('\n');
					}
