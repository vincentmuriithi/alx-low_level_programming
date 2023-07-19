#include<stdio.h>
#include "main.h"
/**
 *main - entry of the program
 *Return: 0 upon success
 *void print_alphabet: - used to print letters from a to z
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}

	_putchar('\n');
}
int main(void)
{
	print_alphabet();

}
