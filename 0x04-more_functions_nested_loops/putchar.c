#include<unistd.h>
#include "main.h"
/**
 * _putchar - returns given character
 * @c: character to be input
 * Return: char to I/O
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
