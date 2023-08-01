#include "main.h"
/**
* _memset - adds n bytes to the dest pointer of b constants
* @s: destination pointer
* @b: input
* @n: input
* Return: returns a pointer
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;

for (i = 0; i < n; i++)
{
s[i] = b;

}

return (s);
}
