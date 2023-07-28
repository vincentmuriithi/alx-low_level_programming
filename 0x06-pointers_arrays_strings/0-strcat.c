/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string where the concatenation will be stored.
 * @src: The source string to be appended to the destination string.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr)
		ptr++;

	while (*src)
	{
		*ptr = *src;
		ptr++;
		src++;
	}

	*ptr = '\0';

	return (dest);
}
