#include "main.h"
/**
 * read_textfile - function for task 0
 * #filename: the file to read
 * #letters: counter of letters to read and display
 * Return: counter of letters if success else 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int file;
ssize_t reader, counter;
char *buffer;
if (filename == NULL)
return (0);
file = open(filename, O_RDONLY);
if (file == -1)
return (0);
buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
{
free(buffer);
return (0);
}
reader = read(file, buffer, letters);
if (reader == -1)
return (0);
counter = write(STDOUT_FILENO, buffer, reader);
if (counter == -1 || reader != counter)
return (0);
free(buffer);
close(file);
return (counter);
}
