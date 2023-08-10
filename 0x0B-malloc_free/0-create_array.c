#include "main.h"
/**
 * create_array - entry of program
 * @size: input
 * @c: input
 * Return: returns a non null pointer upon success
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
	{
		ptr = NULL;
		return (ptr);
	}

	ptr = (char*)malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}

	return (ptr);

}
