#!/bin/bash
echo "#include <stdio.h> \n char *fgets(char *s, int size, FILE *stream) { return \"6 6 6 6 6 6\\n\"; }" > /tmp/preload.c
gcc -shared -o /tmp/preload.so -fPIC /tmp/preload.c
export LD_PRELOAD=/tmp/preload.so
