#include <stdlib.h>
#include "dog.h"
/**
* free_dog - freess the dog type
* @d: input pointer to dog type
* Return: returns void
*/
void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d->owner);
free(d);
}
return;
}
