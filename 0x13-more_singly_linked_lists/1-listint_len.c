#include "lists.h"
/**
* listint_len - calculates the number of nodes in a list
* @h: input link
* Return: returns the number of nodes
*/
size_t listint_len(const listint_t *h)
{
size_t count = 0;

while (h)
{
count++;
h = h->next;
}

return (count);
}
