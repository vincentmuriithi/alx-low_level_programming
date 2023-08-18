#include "variadic_functions.h"
/**
* sum_them_all - sums all the inputs of its parameters
* @n: input number of parameters
* Return: returns the sum of it's parameters upon success
*
*/
int sum_them_all(const unsigned int n, ...)
{
va_list args;
unsigned int i;
int sum = 0;

if (n == 0)
return (0);

va_start(args, n);

for (i = 0; i < n; i++)
{
sum += va_arg(args, int);
}

va_end(args);
return (sum);
}
