#include "main.h"

/**
 * _strchr - locates a character string
 *@s: points to a character
 *@c: the character
 * Return: null
 */
char *_strchr(char *s, char c)
{
int i, j = 0;
while (s[j] != '\0')
{
j++;
}
for (i = 0; i <= j; i++)
{
if (s[i] == c)
{
s = s + i;
return (s);
}
}
return ('\0');
}
