#include "main.h"
/**
 * sqrt_check - check and display the square root of integer
 * @x: guess at sqrt
 * @y: integer to sqrt of x
 * Return: the sqrt of y else display -1
 */
int sqrt_check(int x, int y)
{
if (x * x == y)
return (x);
else if (x * x > y)
return (-1);
return (sqrt_check(x + 1, y));
}
/**
 * _sqrt_recursion - square root
 * @n: the integer to evaluate
 * Return: -1 if not null
 */
int _sqrt_recursion(int n)
{
if (n == 0)
return (0);
return (sqrt_check(1, n));
}
