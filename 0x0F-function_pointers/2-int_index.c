#include "function_pointers.h"
/**
* int_index - searches for a matching integer in the given array
* @array: input array/pointe
* @size: input size of integer
* @cmp: input function pointer
* Return: returns the matched integer upon success
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i, num, ans;

if (array == NULL || cmp == NULL)
return (-1);
if (size <= 0)
return (-1);

for (i = 0; i < size; i++)
{
num = cmp(array[i]);
if (num > 0)
ans = i;
else
ans = (-1);
}

return (ans);

}
