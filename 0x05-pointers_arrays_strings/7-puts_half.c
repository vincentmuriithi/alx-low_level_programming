#include "main.h"

/**
* puts_half - Prints the second half of a string, followed by a new line.
* @str: The input string.
*/
void puts_half(char *str)
{
int length = 0;

int i;
int start_index;

while (str[length] != '\0')
length++;

start_index = length % 2 == 0 ? length / 2 : (length + 1) / 2;

for (i = start_index; str[i] != '\0'; i++)
_putchar(str[i]);

_putchar('\n');
}
