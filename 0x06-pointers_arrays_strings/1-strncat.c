#include "main.h"
/**
 * _strncat - concatenates two strings with a limitation of n bytes
 * @dest: input poointer(destination)
 * @src: input pointer source
 * @n: input integer(number of bytes)
 * Return: returns the new concatenated string as a pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, k;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	k = 0;

	while (k < n && src[k] != '\0')
	{
		dest[i] = src[k];
		i++;
		k++;
	}

	dest[i] =  '\0';

	return (dest);
}
