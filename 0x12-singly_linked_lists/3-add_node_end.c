#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
* add_node_end - adds a new node at the end of list
* @head: input
* @str: input
* Return: returns
*
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new, *temp;

if (str == NULL)
return (NULL);

new = malloc(sizeof(list_t));

if (new == NULL)
return (NULL);

new->str = strdup(str);
if (new->str == NULL)
{
free(new);
return (NULL);
}

new->len = strlen(str);
new->next = NULL;

if (*head == NULL)
{
*head = new;
return (new);
}

temp = *head;
while (temp != NULL)
{
temp = temp->next;
}

temp->next = new;

return (new);
}
