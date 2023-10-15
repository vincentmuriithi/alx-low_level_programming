#include "lists.h"
/**
* add_dnodeint_end - adds a new node at the end of list
* @head: a pointer to a node in list
* @n: input integer
* Return: returns the address of the newly created node
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new, *it;

if (head == NULL)
return (NULL);

it = *head;
new =  malloc(sizeof(dlistint_t));
if (!new)
return (NULL);

new->next = NULL;
new->n = n;
if (it)
{
while (it->next)
it = it->next;
it->next = new;
}
else
*head = new;
new->prev = it;
return (new);

}
