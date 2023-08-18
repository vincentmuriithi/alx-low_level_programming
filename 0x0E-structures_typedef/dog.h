#ifndef _DOG_
#define  _DOG_

#include <stdio.h>
/**
 * struct dog - contains two char* datatypes and a float datapoint
 * @name: name of dog
 * @age: age of dog
 * @owner: the owner of the dog
 */
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif


