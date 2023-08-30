#include "lists.h"
/**
* free_listint_safe - frees a list
* @h: input pointer
* Return: returns the size of the freed list
*/
size_t free_listint_safe(listint_t **h)
{
listint_t *temp;
size_t num = 0;

if (h == NULL)
return (0);

while (*h != NULL)
{
temp = *h;
*h = (*h)->next;
free(temp);
num++;
}

return (num);

}
