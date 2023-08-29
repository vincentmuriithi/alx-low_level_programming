#include "lists.h"
/**
* insert_nodeint_at_index - inserts A node at given index
* @head: input
* @idx:  input
* @n: input
* Return: returns
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

listint_t *new, *temp;
unsigned int i;

if (head == NULL)
return (NULL);

new = malloc(sizeof(listint_t));

if (new == NULL)
return (NULL);

new->n = n;
new->next = NULL;

if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}

for (i = 0; temp && i < idx; i++)
{
if (i == idx - 1)
{
new->next = temp->next;
temp->next = new;
return (new);
}
else
temp = temp->next;
}

return (NULL);
}
