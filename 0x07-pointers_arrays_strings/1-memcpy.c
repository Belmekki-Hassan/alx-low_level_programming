#include "main.h"
/**
 * _memcpy - copy the memory area
 * @dest: destination of the copy
 * @src: path of the code
 * @n: number of spaces to fill
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
