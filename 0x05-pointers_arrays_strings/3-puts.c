#include "main.h"
/**
 * _puts - the function that print a new ligne after every string
 * @str : character input
 * Return: type string
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str++);
}
_putchar('\n');
}
