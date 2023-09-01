#include "main.h"
/**
* get_endianness - calculates the endianness of a computer system
* Return: returns void
*
*/
int get_endianness(void)
{
unsigned int num = 1;
char *byte_ptr = (char *)&num;

return ((*byte_ptr == 1) ? 1 : 0);
}
