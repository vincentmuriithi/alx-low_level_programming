#include "main.h"
#include <unistd.h>
/**
* _putchar - prints a character to the std O
* @c: input
* Return: returns the character given
*/
char _putchar(char c)
{
return (write(1,&c,1));
}
