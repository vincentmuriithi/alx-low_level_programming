#include "main.h"
/**
* _strchr - finds a character in a string
* @s: input pointer
* @c: input
* Return: returns a pointer to the first occurrence of character c
*/
char *_strchr(char *s, char c)
{
unsigned int i = 0;

while (*s != '\0')
{
if (s[i] == c)
{
return (s + i);
break;
}

i++;

}

if (*(s + i) != c)
{
return (0);
}
else
return (s + i);
}
