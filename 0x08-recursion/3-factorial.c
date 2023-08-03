#include "main.h"
/**
* factorial - calculates the factorial of a number
* @n: input integer
* Return: returns the factorial of the input of the int,if negative retyrns -1
*/
int factorial(int n)
{
if (n < 0)
return (-1);
if ( n == 0)
return(1);

return (n * factorial(n - 1));

}
