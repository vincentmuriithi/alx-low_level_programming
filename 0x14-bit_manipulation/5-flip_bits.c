#include "main.h"
/**
* flip_bits - calculates the number of bits that nedd to be flipped
* @n: input
* @m: input
* Return: returns the number of bits that need to be flipped
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor_result = n ^ m;

unsigned int count = 0;

while (xor_result) {
count += xor_result & 1;
xor_result >>= 1;
}

return (count);

}
