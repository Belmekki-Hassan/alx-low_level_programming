#include <unistd.h>
/**
 * _putchar - there just because task ask for it
 * @c: The caracter
 * Return: 1
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
