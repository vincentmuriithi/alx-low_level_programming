#include "main.h"
/**
* clear_bit - sets the given bit to 0 at the given index
* @n: input
* @index: input value of index
* Return: returns 1 upon success
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask;
unsigned int bit_num;

bit_num = sizeof(unsigned long int) * 8;

if (bit_num >= index)
return (-1);

mask = ~(1UL << index);

*n &= mask;
return (1);
}
