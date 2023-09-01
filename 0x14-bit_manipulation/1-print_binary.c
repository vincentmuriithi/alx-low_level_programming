#include "main.h"
#include <stdio.h>
/**
* print_binary - prints the binary format of given integer
* @n: input
* Return: returns void
*/
void print_binary(unsigned long int n)
{
if (n > 1)
print_binary(n >> 1);

putchar((n & 1) ? '1' : '0');
}
