#include "main.h"
/**
* set_bit - sets the bit to 1 at the given index
* @n: input
* @index: input index
* Return: returns 1 upon success
*/
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int numBits = sizeof(unsigned long int) * 8;
unsigned long int mask;

if (index >= numBits)
return (-1);


mask = 1UL  << index;
*n |= mask;

return (1);
}
