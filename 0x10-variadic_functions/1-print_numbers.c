#include "variadic_functions.h"
/**
* print_numbers - prints all the numbers of it's parameters
* @separator: string to be printed betwwen numbers
* @n: input number of arguuments
* Return: returns void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
if (n == 0)
return;

va_start(args, n);
for (i = 0; i < n; i++)
{
if ( separator == NULL)
{
printf("%d", va_arg(args, int));
}
printf("%d", va_arg(args, int));
printf("%s", separator);
}

va_end(args);
return;

}
