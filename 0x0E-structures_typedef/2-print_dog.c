#include "dog.h"
/**
 * print_dog - prints the values of the struc t dog given
* @d: input struct pointer
* Return: returns void
*
*/
void print_dog(struct dog *d)
{
int i;
if (d != NULL)
{
printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
printf("Age: %.6f\n", d->age != NULL ? d->age : "(nil)");
printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
}
}
