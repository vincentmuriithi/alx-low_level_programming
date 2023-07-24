#include "main.h"
/**
 * _putchar - prints char to the O
 * @c: input
 * Return: the value to be printed
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
