#include "main.h"
/**
 * rev_string - this function reverse a string
 * @s: input character to be modified in reverse
 * Return: void
 */
void rev_string(char *s)
{
int len = 0, fcount = 0;
char mix;

while (s[fcount++])
len++;

for (fcount = len - 1; fcount >= len / 2; fcount--)
{
mix = s[fcount];
s[fcount] = s[len - fcount - 1];
s[len - fcount - 1] = mix;
}
}
