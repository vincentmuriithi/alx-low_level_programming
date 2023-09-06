#include "main.h"
/**
* read_textfile -
* @filename: input
* @letters: input
* Return: returns
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t fp, sz, read_bytes, written_bytes;
char *buffer;

if (filename == NULL)
return (NULL);

fp = open(filename, O_RDONLY);

if (fp == -1)
return (0);

buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
{
close(fp);
return (0);
}

read_bytes = read(fp, buffer, letters);
if (read_bytes == -1)
{
close(fp);
return (0);
}

written_bytes = write(fp, buffer, read_bytes);
if (written_bytes == -1)
{
close(fp);
return (0);
}

if (written_bytyes != read_bytes || written_bytes < read_bytes)
{
cloes(fp);
return (0);
}
return (written_bytes);
}
