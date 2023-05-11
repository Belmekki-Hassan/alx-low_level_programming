#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *  copy_text_file - a function to copies on file to another one
 *  @f1: opened file to copy
 *  @f2: opent the new file
 *  @file1: name of the first file
 *  @file2: name of the second file
 */
void copy_text_file(int f1, int f2, char *file1, char *file2)
{
ssize_t cRead = 1, cWrite = 1;
char buffer[1024];
while (cRead)
{
if (cRead == -1)
{
dprintf(STDERR_FILENO, "Error: Cant't read from the file %s \n", file1);
close(f1);
close(f2);
exit(98);
}
if (!cRead)
break;
cWrite = write(f2, buffer, cRead);
if (cWrite == -1 || cWrite != cRead)
{
dprintf(STDERR_FILENO, "Error: Cant't write to %s \n", file2);
close(f1);
close(f2);
exit(98);
}
}
}
