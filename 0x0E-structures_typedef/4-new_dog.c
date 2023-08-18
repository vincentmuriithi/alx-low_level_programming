#include <stdlib.h>
#include "dog.h"
/**
* new_dog - sets a dog type
* @name: input pointer name
* @age: input age
* @owner: input owner
* Return: returns a pointer upon success
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog_ptr;
 int name_len, owner_len, i;

/* Calculate lengths of name and owner strings */
for (name_len = 0; name[name_len] != '\0'; name_len++)
;
for (owner_len = 0; owner[owner_len] != '\0'; owner_len++)
;

/* Allocate memory for the dog structure */
new_dog_ptr = malloc(sizeof(dog_t));
if (new_dog_ptr == NULL)
return (NULL);

/* Allocate memory for name and owner strings */
new_dog_ptr->name = malloc(name_len + 1);
if (new_dog_ptr->name == NULL)
{
free(new_dog_ptr);
return (NULL);
}

new_dog_ptr->owner = malloc(owner_len + 1);
if (new_dog_ptr->owner == NULL)
{
free(new_dog_ptr->name);
free(new_dog_ptr);
return (NULL);
}

/* Copy name and owner strings */
for (i = 0; i <= name_len; i++)
new_dog_ptr->name[i] = name[i];
for (i = 0; i <= owner_len; i++)
new_dog_ptr->owner[i] = owner[i];

new_dog_ptr->age = age;

return (new_dog_ptr);

}
