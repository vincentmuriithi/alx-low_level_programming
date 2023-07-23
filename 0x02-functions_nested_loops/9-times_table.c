#include "main.h"
/**
 * times_table - creates a 9 times table
 * Return: returns  void
 */
void times_table(void)
{
	int k, i, result;

	for (k = 0; k <= 9; k++)
	{
		for (i = 0; i <= 9; i++)
		{
			result = k * i;
			if (i == 0)
				printf("%2d", result);
			else
				printf(", %2d", result);
		}

		printf("\n");
	}

	return;

}
