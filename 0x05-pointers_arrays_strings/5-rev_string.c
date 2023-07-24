#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: The input string to be reversed.
 */
void rev_string(char *s)
{
	char *start = s;
	char *end = s;
	char tmp;

	while (*end != '\0')
		end++;

	end--;

	while (start < end)
	{
		tmp = *start;
		*start = *end;
		*end = tmp;

		start++;
		end--;
	}
}
