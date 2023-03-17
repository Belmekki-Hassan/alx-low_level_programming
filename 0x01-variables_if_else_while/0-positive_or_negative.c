#include <stdio.h>
#include <stdlib.h>
/**
 * main - that where all the fun begin
 *Return: 0 (Success)
 */
int main(void)
{
int n = rand();
if (n > 0)
{
printf("%d is positive\n");
else if (n == 0)
{
printf("%d is zero\n");
}
else
{
printf("%d is negative");
}
return (0);
}
