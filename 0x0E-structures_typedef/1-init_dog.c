#include <stdio.h>
#include "dog.h"
/**
* init_dog -initialises the values of struct dog
* @d: input struct
* @name: name of dog
* @age: age of the dog
* @owner: the owner of the dog
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
