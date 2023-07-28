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

	// Move the pointer to the end of the destination string
	while (*ptr)
		ptr++;

	// Append the source string to the destination string
	while (*src)
	{
		*ptr = *src;
		ptr++;
		src++;
	}

	// Add a terminating null byte to the concatenated string
	*ptr = '\0';

	return dest;
}
