#include <stdio.h>
#include <stdlib.h>

/**
* _isdigit - checks if a character is a digit
* @c: the character to check
*
* Return: 1 if c is a digit, 0 otherwise
*/
int _isdigit(char c)
{
return (c >= '0' && c <= '9');
}

/**
* _strlen - calculates the length of a string
* @s: the string
*
* Return: the length of the string
*/
int _strlen(char *s)
{
int len = 0;

while (s[len] != '\0')
len++;

return (len);
}

/**
* _putchar - writes a character to stdout
* @c: the character to write
*/
void _putchar(char c)
{
putchar(c);
}

/**
* main - entry point
* @argc: the number of command-line arguments
* @argv: an array containing the command-line arguments
*
* Return: 0 on success, 98 on error
*/
int main(int argc, char *argv[])
{
int len1, len2, i, j, carry, result, *res;

if (argc != 3)
{
printf("Error\n");
return (98);
}

len1 = _strlen(argv[1]);
len2 = _strlen(argv[2]);

for (i = 0; i < len1; i++)
{
if (!_isdigit(argv[1][i]))
{
printf("Error\n");
return (98);
}
}
for (i = 0; i < len2; i++)
{
if (!_isdigit(argv[2][i]))
{
printf("Error\n");
return (98);
}
}

res = calloc(len1 + len2, sizeof(int));

if (res == NULL)
{
printf("Error\n");
return (98);
}
for (i = len1 - 1; i >= 0; i--)
{
carry = 0;
for (j = len2 - 1; j >= 0; j--)
{
result = (argv[1][i] - '0') * (argv[2][j] - '0') + res[i + j + 1] + carry;
carry = result / 10;
res[i + j + 1] = result % 10;
}
res[i + j + 1] += carry;
}
i = 0;
while (res[i] == 0 && i < len1 + len2 - 1)
i++;
while (i < len1 + len2)
{
_putchar(res[i] + '0');
i++;
}
_putchar('\n');
free(res);
return (0);
}
