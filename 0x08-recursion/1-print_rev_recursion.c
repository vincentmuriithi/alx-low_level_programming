#include "main.h"
/**
* _print_rev_recursion -
* @s: input pointer
* Return: returns void
*/
void _print_rev_recursion(char *s)
{
int i, k;

i = 0;
k = 0;

while (*s != '\0')
{
i++;
}

if (s[i] < 0)
{
_putchar('\0');
_putchar('\n');
return;
}

k = i;

_putchar(s[k]);
k--;
_print_rev_recursion(s + k);


}
