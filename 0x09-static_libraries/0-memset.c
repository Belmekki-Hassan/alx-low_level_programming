#include "main.h"
/**
 * _memset - filling a block of memory with a value
 * @s: star of address in memeory 
 * @o: the specific value
 * @n: nbr of bytes to change
 * Return: the new value with n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
int i;
for (i = 0; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}
