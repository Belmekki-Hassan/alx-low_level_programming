#include "main.h"
/**
 * print_rev - the function that display a string in revers
 * @s: input of the string
 * Return: nothing
 */
void print_rev(char *s)
{
int counter = 0;
int i = 0, j = 0;
while (s[i] != '\0')
{
counter++;
i++;
}
j = counter - 1;
while (j >= 0)
{
_putchar(s[j]);
j--;
}
_putchar('\n');
}
