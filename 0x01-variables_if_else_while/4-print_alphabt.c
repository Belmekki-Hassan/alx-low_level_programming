#include <stdio.h>
/**
 * main - all the magic is here
 * Return: 0 (Success)
 */

int main(void)
{
char a;
for (a = 'a'; a <= 'z'; a++)
{
if (a == 'q' || a == 'e')
{
continue;
}
putchar(a);
}
putchar("\n");
return (0);
}
