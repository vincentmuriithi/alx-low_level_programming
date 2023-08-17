#include "function_pointers.h"
/**
* print_name - prints the given name
* @name: input pointer
* @f: input function pointer
* Return: returns void
*/
void print_name(char *name, void (*f)(char *))
{
f(name);
}
