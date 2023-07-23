#include <stdio.h>

/**
 * main - Finds and prints the first 98 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int count;
	long int n1 = 1, n2 = 2, next;

	printf("%lu, %lu", n1, n2);

	for (count = 2; count < 98; count++)
	{
		next = n1 + n2;
		printf(", %lu", next);

		n1 = n2;
		n2 = next;
	}

	printf("\n");

	return (0);
}
