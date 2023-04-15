#include "main.h"
/**
 * _memcpy - Copy the memory area
 * @dest: address memory is stored
 * @src: the path of the copied memory
 * @n: the number of bytes
 * Return: copied memory with it byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int c;
int i = n;
for (c = 0; c < i; c++)
{
dest[c] = src[c];
n--;
}
return (dest);
}
