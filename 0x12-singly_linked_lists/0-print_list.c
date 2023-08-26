#include <stdio.h>
#include "lists.h"
/**
* print_list - prints all the elements of a list
* @h: input list
* Return: returns the number of nodes
*/
size_t print_list(const list_t *h)
{
size_t i  = 0;

while (h != NULL)
{
if (h->str == NULL)
printf("[0] (nill)\n");
else
printf("[%d] %s\n", h->len, h->str);

i++;
h = h->next;
}

return (i);

}
