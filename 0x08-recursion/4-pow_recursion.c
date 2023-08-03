#include "main.h"
/**
* _pow_recursion - returns the power of the input x raised to y
* @x: input
* @y: input
* Return: returns the result
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}
