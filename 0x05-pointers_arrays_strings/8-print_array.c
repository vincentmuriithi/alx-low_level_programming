#include "main.h"
/**
* print_array - prints n number of elements in integer arrays
* @a: input pointer
* @n: input n
*/
void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
if (i < n  && i > 0)
{
printf(", %d", a[i]);
}

}

printf("\n");
}
