#include <stdio.h>
/**
 * main - entry of program
 * @argc: input
 * @argv: input
 * Return: returns 0 upon success
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error");
		return (1);
	}

	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);

	int result = num1 * num2;

	printf("%d", result);

	return (0);



}
