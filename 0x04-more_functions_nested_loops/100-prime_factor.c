#include<stdio.h>
#include<math.h>
/**
 * largest_prime_factor - finds the largest prime factor of a number
 * @n: the number for which to find the largest prime factor
 * Return: the largest prime factor of the number
 */
long largest_prime_factor(long n)
{
	long largest = -1;
	long i;

	while (n % 2 == 0)
	{
		largest = 2;
		n = n / 2;
	}

	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			largest = i;
			n = n / i;
		}
	}

	if (n > 2)
		largest = n;

	return (largest);
}

/**
 * main - entry of program
 * Return: 0 upon success
 */

int main(void)
{
	long number = 612852475143;
	long result = largest_prime_factor(number);

	printf("%ld\n", result);

	return (0);
}

