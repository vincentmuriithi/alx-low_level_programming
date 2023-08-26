#include "list.h"
/**
* list_len - computes  the number of elements in a list
* @h: input list
* Return: returns numba of elements in a list
*/
size_t list_len(const list_t *h)
{

size_t i = 0;
while (h != NULL)
{
h->next;
i++;
}
return (i)
}
