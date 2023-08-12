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

if (min > max)
return (NULL);

ptr = (int *)malloc(sizeof(int) * ((max - min) + 1));

if (ptr == NULL)
return (NULL);

return (ptr);
}
