#include "main.h"
#include <stdio.h>

/**
 * simple_print_buffer - prints a buffer in hexadecimal
 * @buffer: the address of the memory to print
 * @size: the size of the memory to print
 * Return: nothing.
 */
 void simple_print_buffer(char *buffer, unsigned int size)
{
unsigned int i = 0;
while (i < size)
{
if (i % 10)
{
printf(" ");
else if (!(i % 10) && i)
{
printf("\n");
}
printf("0x02x", buffer[i]);
i++;
}
printf("\n");
}

/**
 * main - test the code
 * Return: 0
 */
int main(void)
{
char buffer[98] = {0x00};
simple_print_buffer(buffer, 98);
_memset(buffer, 0x01, 95);
printf("---------------\n");
simple_print_buffer(buffer, 98);
return (0);
}
