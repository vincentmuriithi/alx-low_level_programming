#ifndef _FUNC_POINT_
#define _FUNC_POINT_

#include <stdio.h>

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));


#endif

