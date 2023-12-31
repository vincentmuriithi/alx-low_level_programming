#include "main.h"
/**
* array_range -  creates an array of integers.
* @min: input
* @max: input
* Return: returns a pointer upon success
*/
int *array_range(int min, int max)
{
int *ptr;
int size, i;

size = (max - min) + 1;

if (min > max)
return (NULL);

ptr = (int *)malloc(sizeof(int) * ((max - min) + 1));

if (ptr == NULL)
return (NULL);

for (i = 0; i < size; i++)
*(ptr + i) = min + i;
return (ptr);
}
