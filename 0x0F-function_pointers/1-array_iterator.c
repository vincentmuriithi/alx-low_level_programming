#include "function_pointers.h"
/**
* array_iterator - performs an action on each element of given array
* @array: input array
* @size: input size of array
* @action: input function pointer
* Return: returns void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (array == NULL || action == NULL)
return;

for (i = 0; i < size; i++)
{
action(array[i]);
}
}
