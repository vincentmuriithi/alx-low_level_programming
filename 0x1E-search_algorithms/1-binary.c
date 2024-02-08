#include "search_algos.h"
/**
* binary_search - seraches for a given value using the binary search algorithm
* @array: input array/structure to search data in
* @size: - size of the input array
* @value: The value to be searched for
* Return: value if found or -1 if not found
*/

int binary_search(int *array, size_t size, int value)
{
int left = 0;
int right = size - 1;
int i;
int mid;

if (!array)
return (-1);

while (left <= right)
{
mid = (right + left) / 2;
printf("Searching in array: ");

for (i = left; i <= right; ++i)
{
if (i < right)
	printf("%d, ", array[i]);
if (i == right)
	printf("%d", array[i]);
}

printf("\n");

if (array[mid] == value)
return (mid);
else if (array[mid] < value)
left = mid + 1;
else
right = mid - 1;
}

return (-1);
}
