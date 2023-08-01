#include "main.h"
/**
* _strchr - finds a character in a string
* @s: input pointer
* @c: input
* Return: returns a pointer to the first occurrence of character c
*/
char *_strchr(char *s, char c)
{
int i = 0;

while (*s != '\0' && s[i] != c)
{
if (s[i] == c)
{
break;
}

i++;

}

return (s + i);
}
