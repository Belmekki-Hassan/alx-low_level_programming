#include "main.h"
/**
 * _prunt_rev_recursion - display a reversed string
 * @s: the string
 * Return: reversed string
 */
void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
