#include "main.h"
/**
* string_nconcat - concatenates two strings
* @s1: input pointer
* @s2: input pointer
* @n: input
* Return: returns a pointer upon success
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
  unsigned int i = 0,j = 0, k = 0, len1 = 0;
char *ptr;

while (*(s1 + len1) != '\0')
len1++;

while (s2[k] != '\0')
k++;

if (s2 == NULL)
{
s2 = "";

}
if (s1 == NULL)
s1 = "";

if (n >= k)
n = k;
ptr = (char *)malloc(sizeof(char) * (len1 + n + 1));

if (ptr == NULL)
return (NULL);

for (i = 0; s1[i] != '\0'; i++)
{
ptr[i] = s1[i];
}


while (j <= n)
{
ptr[len1 + j] = s2[j];
j++;
}
ptr[len1 + n] = '\0';

return (ptr);
}
