#include <string.h>
#include <fcntl.h>
#include "main.h"
/**
* create_file - creates a new file
* @filename: input pointer to file
* @text_content: input
* Return: returns
*/
int create_file(const char *filename, char *text_content)
{
int fd, written_bytes;

if (filename == NULL)
return (0);
fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC);

if (fd == -1)
return (0);

if (text_content == NULL)
{
close(fd);
return (0);
}

written_bytes = write(fd, text_content, strlen(text_content));
if (written_bytes == -1)
{
close(fd);
return(0);
}
close(fd);
return (written_bytes);
}
