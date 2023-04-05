#include "main.h"
/**
 * _memset - where the magic happen
 * @s: pointed destination
 * @b: constant byte
 * @n: count of bytes
 * Return: nothing
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
