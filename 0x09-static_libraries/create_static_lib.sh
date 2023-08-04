#!/bin/bash
gcc -Wall -Wextra -pedantic -Werror -std=gnu89 -c *.c
ar -rcs liball.a *.o
