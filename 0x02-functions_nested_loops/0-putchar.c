#include "main.h"
#include<stdio.h>
#include<string.h>
/**
 * main - entry of program
 *
 * Return: resturns 0 upon success
 */
int main(void)
{
    char tr[] = "_putchar";
    size_t i;
    size_t length = strlen(tr);
    for(i = 0;i<=length;i++)
    {
	    _putchar(tr[i]);
    }
    _putchar('\n');
    return (0);
}
