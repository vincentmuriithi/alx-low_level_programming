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
		if (k % 5 == 0 && k % 3 == 0)
		{
			printf("FizzBuzz ");
			
		}
		else if (k == 5 || k % 5 == 0)
		{
			printf("Buzz ");
		
		}
		else if (k % 3 == 0)
		{
			printf("Fizz ");
			
		}
		else 
		{

		     printf("%d ", k);
		}
	}

	printf("\n");
	return (0);
}
