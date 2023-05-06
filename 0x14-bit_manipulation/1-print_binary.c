#include "main.h"
/**
 * print_binary - a function that display a binary
 * @n: variable
 * Return: 0
 */
void print_binary(unsigned long int n)
{
unsigned long int c = n;
int length = 0;
if (n == 0)
{
_putchar('0');
return;
}
while ((c >>= 1) > 0)
length++;
while (length >= 0)
{
((n >> length) &1) ? _putchar('1') : _putchar('0');
length--;
}
}
