#include "main.h"
/**
* string_nconcat - concatenates two strings
* @s1: input pointer
* @s2: input pointer
* @n: input
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j, k;
char *ptr;

i = 0;
j = 0;
k = 0;

while (*(s1 + i) != '\0')
i++;

while (s2[k] != '\0')
k++;

ptr = (char *)malloc(sizeof(char) * (i + n + 1));

if (ptr == NULL)
return (NULL);

for (i = 0; s1[i] != '\0'; i++)
{
ptr[i] = s1[i];
}

if (n >= k)
{
while (s2[j] != '\0')
{
ptr[i] = s2[j];
j++;
i++;
}
}

while (j <= n)
{
ptr[i] = s2[j];
j++;
i++;
}
ptr[i] = '\0';

return (ptr);
}
