#include "lists.h"
/**
* add_nodeint_end - adds a node at the end of tyhe list
* @head: input pointer
* @n: input integer
* Return: returns the address of the new node
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new, *temp;
temp = *head;

if (head == NULL)
return (NULL);

new =  (listint_t *)malloc(sizeof(listint_t));

if (new == NULL)
return (NULL);

new->n = n;
new->next = NULL;

if (*head == NULL)
{
*head = new;
return (new);
}
while (temp->next)
{
temp = temp->next;
}

temp->next = new;
return (new);
}
