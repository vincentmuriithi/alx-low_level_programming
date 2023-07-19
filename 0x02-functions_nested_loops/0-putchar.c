#include<unistd.h>
#include<string.h>
#ifndef MAIN_H
#define MAIN_H
int _putchar(char c);
#endif /* MAIN_H*/
/**
 * main - entry of program
 *
 * Return: resturns 0 upon success
 */
int  _putchar(char c)
{
	return write(1,&c,1);
}
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
