#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - all the magic is here
 * Return: 0 (Success)
 */

int main(void)
{
char a;
for (a = 'a'; a <= 'z'; a++)
{
if (a != 'q' && a != 'e')
{
putchar(a);
}
}
putchar("\n");
return (0);
}
