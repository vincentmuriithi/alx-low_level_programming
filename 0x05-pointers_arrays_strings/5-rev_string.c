#include "main.h"
/**
 * rev_string - reverses a string
 * @s: input
 * Return: returns void
 */
void rev_string(*s)
{
	int k, i, j;

	while (s[k] != '\0')
	{
		k++;
	}

	char new[k];

	for (i = k - 1; i >= 0; i--)
	{
		new[i] = s[i];
	}

	for (j = 0; j < k; j++)
	{
		s[j] = new[j];
	}
}
