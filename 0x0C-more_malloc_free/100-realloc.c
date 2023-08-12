#include "main.h"
/**
* _realloc -  reallocates a memory block using malloc and free
* @ptr: input pointer
* @old_size: input
* @new_size: input
* Return: returns a valid pointer upon success
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

void *nptr;

if (new_size == old_size)
{
return (ptr);
}

if (ptr == NULL)
{
nptr = malloc(new_size);
return (nptr);
}
if (new_size == 0 && ptr != NULL)
{
nptr = free(ptr);
return (NULL);
}

nptr = malloc(new_size);

if (nptr == NULL)
return (NULL);

if (new_size > old_size)
{
memcpy(nptr, ptr, old_size);
}
else
memcpy(nptr, ptr, new_size);

free(ptr);
return (nptr);
}
