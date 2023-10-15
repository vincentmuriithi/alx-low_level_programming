#include "lists.h"
/**
* get_dnodeint_at_index - gets the node at the given index
* @head: input poineter
* @index: the index  the node to be retrieved
* Return: returns the retrieved node at given index
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;
dlistint_t *tmp = head;

if (!head)
return (NULL);

while (tmp && i < index)
{
tmp = tmp->next;
i++;
}

return (tmp);
}
