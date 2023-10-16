#include "lists.h"
/**
* insert_dnodeint_at_index - adds a node at the given index
* @h: input pointer
* @idx: input index
* @n: data for new node
* Return: returns new node address
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *tmp = NULL, *new = NULL;
unsigned int i = 0;

if (!*h)
return (NULL);
if (idx == 0)
new = add_dnodeint_end(h, idx);
else
{
tmp = *h;

while (tmp->prev)
tmp = tmp->prev;

while (tmp && i < idx - 1)
{
tmp = tmp->next;
i++;
}
if (!tmp)
return (NULL);
new = malloc(sizeof(dlistint_t));
if (!new)
return (NULL);

new->next = tmp->next;
new->prev = tmp;
if (tmp->next)
tmp->next->prev = new;
tmp->next = new;
new->n = n;
}
return (new);
}

