#include "main.h"
#include <unistd.h>
/**
 * _putchar - prints a single char byte to the std O
 * @c: input char
 * Return: returns the char
 */
char _putchar(char c)
{
	return (write(1, &c, 1));

}
