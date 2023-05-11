#include "main.h"
/**
 * create_file - a script to create a file
 * @text_content: text to write in the file
 * @filename: the name of the file to create
 * Return: if success 1 else -1
 */
int create_file(const char *filename, char *text_content)
{
int file, write_status, words = 0;
if (filename == NULL)
return (-1);
file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
if (file == -1)
return (-1);
if (text_content)
{
while (text_content[words] != '\0')
words++;
write_status = write(file, text_content, words);
if (write_status == -1)
return (-1);
}
close(file);
return (1);
}
