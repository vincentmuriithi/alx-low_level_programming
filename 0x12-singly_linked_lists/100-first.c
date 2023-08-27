#include "lists.h"
#include <stdio.h>
/**
* print_before_main - runs before main function is executed
* Return: returns void
*/
void print_before_main(void) __attribute__((constructor))
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
return;
}
