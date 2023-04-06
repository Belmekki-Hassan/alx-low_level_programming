#include "main.h"
/**
 * factorial - display factorial
 * @n: the factorial number
 * Return: -1 when negative, the addition of factorial * factorial - 1
 */
int factorial(int n)
{
if (n == 0)
{
return (1);
}
else if (n < 0)
{
return (-1);
}
else
{
n *= factorial(n - 1);
return (n)
}
}
