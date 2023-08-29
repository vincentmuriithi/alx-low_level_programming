#include "lists.h"
/**
*
*
*
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new, *temp;
temp = *head;

if (head == NULL)
return (NULL);

new =  malloc(sizeof(listint_t));

if (new == NULL)
return (NULL);

while (temp != NULL)
{
temp = temp->next;
}

new->n = n;
new->next = NULL;
temp = new;
return (new);
}
