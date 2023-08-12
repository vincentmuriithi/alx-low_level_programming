#include "main.h"
/**
* _calloc -  allocates memory for an array, using malloc
* @nmemb: input
* @size: input
* Return: returns a pointer upon success
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
void  *ptr;
unsigned int i;

if (nmemb == 0 || size == 0)
ptr = NULL;

ptr = malloc(nmemb * size);

if (ptr == NULL)
return (NULL);

for (i = 0; i < nmemb * size; i++)
{
((char *)ptr)[i] = 0;
}


return (ptr);
}
