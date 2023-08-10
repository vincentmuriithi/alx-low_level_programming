#include "main.h"
/**
 * main - entry of program
 * @size: input
 * @c: input
 * Return: returns 0 upon success
 */
char **create_array(unsigned int size, char c)
{
	char *ptr;
	int i;

	if (size == 0)
		return (ptr);

	ptr = (char*)malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}

	return (ptr);

}
