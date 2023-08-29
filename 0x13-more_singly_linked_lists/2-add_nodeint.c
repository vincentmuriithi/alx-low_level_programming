#include "lists.h"
/**
* add_nodeint -
* @n: input int
* @head: input list
* Return: returns
*
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new, *temp;
(void)temp;

if (*head == NULL)
return (NULL);

new = (listint_t *)malloc(sizeof(listint_t));

if (new == NULL)
return (NULL);

new->n = n;
new->next = *head;
*head = new;

return (new);



}
