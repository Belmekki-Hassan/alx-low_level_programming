#include <unistd.h>
/**
 * _putchar - write the given array of character
 * @c: the given array of character
 * Return: 1
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
