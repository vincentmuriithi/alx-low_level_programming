#include "lists.h"
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


temp = h;

while (temp != NULL)
{
printf(temp->n);
printf("\n");
num ++;
temp = temp->next;
}

return (num);
}
