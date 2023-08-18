#ifndef _DOG_
#define  _DOG_

#include <stdio.h>
/**
 * struct dog - contains two char* datatypes and a float datapoint
 * @name: name of dog
 * @age: age of dog
 * @owner: the owner of the dog
 */
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif


