#include "main.h"
/**
* _sqrt_recursion - Returns the natural square root of a number.
* @n: The number to find the square root of.
*
* Return: The natural square root of n, or -1 
*/
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}

if (n == 0 || n == 1)
{
return (n);
}

int start = 1;
int end = n;
int mid, root;

while (start <= end)
{
mid = (start + end) / 2;
root = mid * mid;

if (root == n)
{
return (mid);
}
else if (root < n)
{
start = mid + 1;
}
else
{
end = mid - 1;
}
}

return (-1);
}

