#include "search_algos.h"
#include "math.h"
/**
* jump_search - function that implements the jump search algorithm
* @array: the array to be searched in
* @size: the size of the array
* @value: the value to search for in the array
* Return: the index where the value is found or -1 otherwise
*/

int jump_search(int *array, size_t size, int value)
{
int jump_step = sqrt(size);
int prev = 0;
size_t i;
size_t current = jump_step;

if (!array)
return (-1);

while (current < (size - 1) && array[current] < value)
{
printf("Comparing element at index %d\n",(int)current);
prev = current;
current += jump_step;
}

for (i = prev; i <= fmin(current, size - 1); i++)
{
printf("Comparing element at index %d\n",(int)i);

if (array[i] == value)
return (i);
}

return (-1);
}
