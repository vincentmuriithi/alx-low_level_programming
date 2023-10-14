#include "lists.h"
/**
* add_dnodeint - adds a new node at the beginning of a dlistint_t list.
* @head: input pointer
* @n: input
* Return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new = NULL;

if (*head == NULL)
return (NULL);

new = malloc(sizeof(dlistint_t));

if (new == NULL)
return (NULL);

new->n = n;
new->next = (*head)->next;
new->prev = NULL;
(*head)->prev = new;
(*head)->next = new;

return (new);
}
