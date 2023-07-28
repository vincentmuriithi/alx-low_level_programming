#include "main.h"
/**
 * _strcnt - concatenates two strings with a limitation of n bytes
 * @dest: input poointer(destination)
 * @src: input pointer source
 * @n: input integer(number of bytes)
 * Return: returns the new concatenated string as a pointer
 */
char *_strcnt(char *dest, char *src, int n)
{
	int i, j, k;

	while (dest[i] != '\0')
	{
		i++;
	}

	k = 0;

	while (k < n && src[k])
	{
		dest[i] = src[k];
		i++;
		k++;
	}

	dest[i] =  '\0';

	return (dest);
}
