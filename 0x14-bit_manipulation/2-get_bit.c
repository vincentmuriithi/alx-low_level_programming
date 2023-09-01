#include "main.h"
/**
* get_bit - gets the bit at given index
* @n: input
* @index: input
* Return: returns the given bit
*/
int get_bit(unsigned long int n, unsigned int index)
{
unsigned ling int mask;
int bitValue;
unsigned int numBits = sizeof(unsigned long int) * 8;

if (index >= numBits)
return (-1);


mask = 1UL << index;

bitValue = (n & mask) >> index;

return (bitValue);
}

