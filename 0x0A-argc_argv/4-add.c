#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - entry of main program
 * @argc: input
 * @argv: input
 * Return: returns 0 upon success
 */
int main(int argc, char *argv[])
{
	int sum, i, j;

	sum = 0;

	if (argc == 0)
		printf("%d\n", 0);

	for (i = 1; i < argc; i++) 
	{
        for (j = 0; argv[i][j] != '\0'; j++) 
	{
            if (!isdigit(argv[i][j]) && argv[i][j] != '-') 
	    {
                printf("Error\n");
                return 1;
            }
        }

        sum += atoi(argv[i]);
    }

    printf("%d\n", sum);
    return (0);
}
