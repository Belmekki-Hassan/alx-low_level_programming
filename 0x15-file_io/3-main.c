#include "main.h"
/**
 *   * main - copy a file into another file (cp command)
 *     * @argc: number of arguments
 *       * @argv: arguments
 *         * Return: 0 if succesfull
 *           */
int main(int argc, char **argv)
{
int f1, f2;
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
f1 = open(argv[1], O_RDONLY);
if (f1 == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
f2 = open(argv[2], O_CREAT | O_EXCL | O_WRONLY, 0664);
if (f2 == -1)
f2 = open(argv[2], O_TRUNC | O_WRONLY);
if (f2 == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
close(f1);
exit(99);
}
copy_text_file(f1, f2, argv[1], argv[2]);
if (close(f1) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f1);
close(f2);
exit(100);
}
if (close(f2) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f2);
exit(100);
}
return (0);
}
