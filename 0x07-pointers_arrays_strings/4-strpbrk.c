#include "main.h"
/**
* _strpbrk - searches for matching string with the given bytes
* @s: input pointer
* @accept: input pointer
* Return: returns pointer if match is found and NULL if not found
*/
char *_strpbrk(char *s, char *accept)
{
unsigned int i, k, j, n;

j = (sizeof(*s) - 1);
n = (sizeof(*accept) - 1);

for (i = 0; i < j; i++)
{
for (k = 0; k < n; k++)
{
if (*(s + i) == *(accept + k))
{
	return (s + i);
}

}
}

return (0);
}
