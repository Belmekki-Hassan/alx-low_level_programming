#include "main.h"
/**
 * _isupper - a function to check of uppercase char
 * @c: the String inputed by the user
 * Return: if c is uppercase display 1 else 0
 */
int _isupper(int c)
{
if ((c >= 'A') && (c <= 'Z'))
return (1);
else
return (0);
}
