#include <stdio.h>
/**
* main - entry of program
* @argc: input
* @argv:input
* Return: returns 0 upon success
*/
int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc, i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
