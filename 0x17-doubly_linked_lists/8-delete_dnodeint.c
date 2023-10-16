#include "lists.h"
/**
* delete_dnodeint_at_index - deletes node at given index
* @head: input pointer
* @index: input index
* Return: returns 1 if it succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *tmp;
unsigned int pos = 0;
tmp = *head;

if (!head || !(*head))
return (-1);

if (index == 0)
{
*head = (*head)->next;
if (*head)
(*head)->prev = NULL;
free(tmp);
return (1);
}


while (tmp->prev)
tmp = tmp->prev;

while (pos < index)
{
tmp = tmp->next;
pos++;
}

if (!tmp)
return (-1);

tmp->prev->next = tmp->next;
tmp->next->prev = tmp->prev;
free(tmp);
return (1);



}
