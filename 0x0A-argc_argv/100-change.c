#include <stdio.h>
#include <stdlib.h>
/**
* main - entry of program
* @argc: input
* @argv: argument vector
* Return: returns 0 upon success or 1 if no argument provided
*/
int main(int argc, char *argv[])
{
int i, count, cents, num_coins;
if (argc != 2)
{
printf("Error\n");
return (1);

}

count = 0;
cents = atoi(argv[1]);
int coins[] = {25, 10, 5, 2, 1};
num_coins = sizeof(coins) / sizeof(coins[2]);

for (i = 0; i < num_coins; i++)
{
while (cents >= coins[i])
{
cents -= coins[i];
count++;
}

}

printf("%d\n", count);
return (0);




}
