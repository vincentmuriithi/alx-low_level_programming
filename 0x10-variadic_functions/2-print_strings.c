#include "variadic_functions.h"
/**
* print_strings - prints all the numbers of its parameters
* @separator: input pointer
* @n: number of arguments to be given to the function
* Return: returns void upon success
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
char *string;

if (n == 0)
return;

va_start(args, n);

for (i = 0; i < n; i++)
{
string = va_arg(args, char*);
if (string != NULL)
{
printf("%s", string);
}
else
printf("(nil)");

if (i < (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(args);
return;
}
