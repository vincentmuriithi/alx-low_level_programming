#include<stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times
 * Return: returns void
 */
void print_alphabet_x10(void)
{
	char letter;
	size_t k;

	for  (k = 0; k < 10; k++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}

		_putchar('\n');
	}
}
