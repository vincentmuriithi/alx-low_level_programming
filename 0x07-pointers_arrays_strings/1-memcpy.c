#include "main.h"
/**
* _memcpy - copies n bytes from memory src to dest
* @dest: destination pointer
* @src: source pointer
* @n: input
* Return: returns a pointer
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}

return (dest);
}
