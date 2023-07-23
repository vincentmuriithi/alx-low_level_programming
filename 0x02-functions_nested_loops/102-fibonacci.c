#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int count, n1 = 1, n2 = 2, next;

	printf("%ld, %ld", n1, n2);

	for (count = 2; count < 50; count++)
	{
		next = n1 + n2;
		printf(", %ld", next);
		n1 = n2;
		n2 = next;
	}

	printf("\n");
	return (0);
}
