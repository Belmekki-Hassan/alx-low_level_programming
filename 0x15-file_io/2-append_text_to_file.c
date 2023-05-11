#include "main.h"
/**
 * append_text_to_file - a function add text to an exsiting file
 * @filename: name of a file to edit
 * @text_content: text to append to the filename
 * Return: if success 1 else -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
int file, status_app, texts = 0;
if (filename == NULL)
return (-1);
file = open(filename, O_APPEND | O_WRONLY);
if (file == -1)
return (-1);
if (text_content)
{
while (text_content[texts] != '\0')
texts++;
status_app = write(file, text_content, texts);
if (status_app == -1)
return (-1);
}
close(file);
return (1);
}
