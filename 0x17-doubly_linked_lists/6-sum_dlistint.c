#include "lists.h"
/**
* sum_dlistint - sums the total data(n) stored in the list
* @head: input pointer to a node in list
* Return: returns the sum of data
*/
int sum_dlistint(dlistint_t *head)
{
dlistint_t *tmp = NULL;
int sum = 0;

if (!head)
return (sum);

tmp = head;

while (tmp->prev)
tmp = tmp->prev;

while (tmp)
{
sum += tmp->n;
tmp = tmp->next;
}

return (sum);
}
