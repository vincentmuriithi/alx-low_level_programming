#include "lists.h"
#include <stdio.h>
/**
* print_listint - prints the elements in a list
* @h: input list
* Return: returns the number of nodes
*/
size_t print_listint(const listint_t *h)
{
size_t num = 0;
listint_t *temp;

if (h == NULL)
return (0);


temp = (listint_t *)h;

while (temp != NULL)
{
printf("%d\n", temp->n);
temp = temp->next;
num++;
}

return (num);
}
