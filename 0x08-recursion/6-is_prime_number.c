#incude "main.h"
/**
 * is_prime_number - evaulate a number
 * @n : the number
 * Return: 1 is primer, otherwise 0
 */
int is_prime_number(int n)
{
if (n < 0)
{
return (0);
}
else if ((n % 2 != 0) && (n / 3 != 0) && (n % 5 != 0))
{
return (1);
}
else
{
return (0);
}
}
