#include <stdio.h>
#include <unistd.h>

/**
 * main - A program that doesn't use printf or puts to print message
 * Return: 1 (Success)
 */
int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
