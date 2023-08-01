#include "main.h"
/**
* _strpbrk - searches for matching string with the given bytes
* @s: input pointer
* @accept: input pointer
* Return: returns pointer if match is found and NULL if not found
*/
char *_strpbrk(char *s, char *accept)
{
unsigned int i, k;

for (i = 0; i < (sizeof(*s) - 1); i++)
{
for (k = 0; k < (sizeof(*accept) - 1); k++;)
{
if (*(s + i) == *(accept + k))
{
return (*(s + i));
}

}
}
return (0);
}
