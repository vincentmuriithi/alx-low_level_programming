#include "main.h"
/**
* binary_to_uint - converts binary to unsigned integer
* @b: input pointer
* Return: returns the unsigned integer
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int i = 0, result = 0;
char current;

if (b == NULL)
return (0);

while (b[i] != '\0')
{
current = b[i];

if (current == '0')
result = result << 1;
else if (current == '1')
result = (result << 1) | 1;
else
return (0);

i++;
}

return (result);
}
