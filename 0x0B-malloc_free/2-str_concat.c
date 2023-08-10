#include "main.h"
/**
* str_concat - concatenates two strings and returns a pointer to the newly formed string
* @s1: input pointer
* @s2: input pointer
*
*/
char *str_concat(char *s1, char *s2)
{
char *ptr;
int i,j;

i = 0;

while (s1[i] != '\0')
i++;

j = 0;

while (s2[j] != '\0')
{
s1[i] = s2[j];
j++;
i++;
}

ptr = (char *)malloc((i + 1) * sizeof(char));

if (ptr == NULL)
return (NULL);

return (ptr);



}
