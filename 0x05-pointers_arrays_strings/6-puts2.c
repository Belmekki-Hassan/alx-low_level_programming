#include "main.h"
/**
 * puts2 - function that can display only one character out of two
 * @str: character input
 * Return: void
 */
void puts2(char *str)
{
int count = 0, len = 0;
while (str[count++])
len++;

for (count = 0; count < len; count += 2)
_putchar(str[count]);

_putchar('\n');
}
