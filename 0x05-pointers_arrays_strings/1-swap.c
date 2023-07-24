#include "main.h"
/**
 * swap_int - swaps the values of 2 variables
 * @a: input pointer
 * @b: input pointer
 * Return: returns void
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
