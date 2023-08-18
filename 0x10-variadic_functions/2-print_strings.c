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

if (n == 0)
return;

va_start(args, n);

for (i = 0; i < n; i++)
{
if (separator != NULL)
{
printf("%d", va_arg(args, int));
printf("%s", separator);
}
else
printf("%d", va_arg(args, int));
}
printf("\n");
va_end(args);
return;
}
