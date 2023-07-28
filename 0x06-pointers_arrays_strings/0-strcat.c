#include "main.h"
/**
 * _strcat - concatenates strings
 * @dest: input pointer
 * @src: input pointer
 * Return: pointer
 *
 */
char *_strcat(char *dest, char *src)
{
	char *new = dest;

	while (*new)
	{
		new++;
	}

	while (*src)
	{
		*new = *src;
		new++;
		src++;
	}

	*new = '\0';

	return (dest);
}
