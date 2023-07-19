#include<unistd.h>
#include<string.h>
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
    for(size_t i = 0;i<=strlen(tr);i++)
    {
	    _putchar(tr[i]);
    }
    _putchar('\n');
    return (0);
}
