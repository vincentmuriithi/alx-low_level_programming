#include<stdio.h>
#include "main.h"
/**
 * main - entry of program
 * Return: 0 upon success
 * print_alphabet_x10 - prints all the alphabets 10 times
 * Description: this function prints alphabets
 *
 *
 *
 *
 */
void  print_alphabet_x10(void)
{
	char letter;
	size_t i;

	for (i = 0; i < 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}

		_putchar('\n');
	}
}

int main(void)
{
	print_alphabet_x10();
	return (0);
}
