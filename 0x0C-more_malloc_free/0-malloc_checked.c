#include "main.h"
/**
* malloc_checked - allocates memory
* @b: input number of bytes
* Return: returns void
*/
void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);

if (ptr == NULL)
{
exit(98);
}
return (ptr);
}
