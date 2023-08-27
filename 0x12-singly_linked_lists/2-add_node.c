#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
* add_node - adds a new node at the beginning
* @head: input
* @str: inputt
* Return: returns the address of the new node
*/
list_t *add_node(list_t **head, const char *str)
{

list_t new;

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
new->next = *head;
*head = new;

return (new);
}
