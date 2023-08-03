#include "main.h"
/**
* _strlen_recursion - prints the length of a string
* @s: input string
* Return: returns the lenght of string
*/
int _strlen_recursion(char *s)
{
int k = 0;

if(*s == '\0')
{
return;
}

k++;
return  (k + _strlen_recursion(*s + k);
}
