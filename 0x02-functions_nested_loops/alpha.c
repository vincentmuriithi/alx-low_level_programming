#include<stdio.h>
/**
 * print_alphabet - prints letters from a to z
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');
}

