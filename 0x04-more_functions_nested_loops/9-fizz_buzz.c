#include<stdio.h>
/**
 * main - entry of program
 * Return: 0 upon success
 */
int main(void)
{
	int k;

	for (k = 1; k <= 100; k++)
	{
		if (k == 3 || k % 3 == 0)
		{
			printf("Fizz");
		}
		if (k == 5 || k % 5 == 0)
		{
			printf("Buzz");
		}
		if (k % 5 == 0 && k % 3 == 0)
		{
			printf("FizzBuzz");
		}

		printf("%d", k);
	}
	return (0);
}
