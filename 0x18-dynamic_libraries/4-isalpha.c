#include "main.h"
/**
* _isalpha - checks for alphabetic characters
* @c: the character to be inspected
* Return: 1 if alphabet and  0 if otherwise
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
return (0);
}
