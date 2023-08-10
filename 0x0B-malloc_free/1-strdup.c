#include "main.h"
/**
* _strdup - returns a pointer to a newly allocated space
* @str: input
* Return: returns pointer upon success
*/
char *_strdup(char *str)
{
char *duplicate;

unsigned int length = 0, i;

if (str == NULL)
return (NULL);

while (str[length])
length++;

duplicate = malloc(sizeof(char) * (length + 1));

if (duplicate == NULL)
return (NULL);

for (i = 0; i <= length; i++)
duplicate[i] = str[i];

return (duplicate);
}
