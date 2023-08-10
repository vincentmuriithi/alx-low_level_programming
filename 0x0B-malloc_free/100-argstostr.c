#include "main.h"
/**
* argstostr - concatenates the arguments of your program
* @ac: input
* @av: argument vector input
* Return: returns a pointer upon success
*/
char *argstostr(int ac, char *av[])
{
char *concatenated;
int i, j, pos;

int length = 0;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
length++;

}

length++;
}

concatenated = (char *)malloc((length + 1) * sizeof(char));

pos = 0;

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
concatenated[pos] = av[i][j];
pos++;
}
concatenated[pos] = '\n';
pos++;
}

concatenated[pos] = '\0';

return (concatenated);
}
