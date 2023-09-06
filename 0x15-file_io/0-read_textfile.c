#include "main.h"
#include <fcntl.h>
/**
* read_textfile - prints the given number of bytes from a file
* @filename: input
* @letters: input
* Return: returns number of written bytes
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t fp, read_bytes, written_bytes;
char *buffer;

if (filename == NULL)
return (0);

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
free(buffer);
close(fp);
return (0);
}
written_bytes = write(STDOUT_FILENO, buffer, read_bytes);
if (written_bytes != read_bytes || written_bytes == -1)
{
free(buffer);
close(fp);
return (0);
}
free(buffer);
close(fp);
return (written_bytes);
}
