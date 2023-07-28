#include "main.h"
/**
 * _strcmp - compares two strings
 * @dest: input pointer
 * @src: input pointer
 * Return: returns pointer
 */
int _strcmp(char *dest, char *src)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);


}
