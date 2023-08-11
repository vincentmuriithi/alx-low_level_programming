#include "main.h"
/**
 * malloc_checked - allocates memory
 * @b: input number of bytes
 * Return: returns void
 */
void *malloc_checked(unsigned int b)
{
  malloc(b);
  return;
}
