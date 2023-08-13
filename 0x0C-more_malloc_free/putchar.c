#include "main.h"
#include <unistd.h>
/**
* _putchar - returns a char to the std I/O
* @c: input
* Return: returns a char
*/
int _putchar(char c)
{
return (write(1,&c,1));
}
