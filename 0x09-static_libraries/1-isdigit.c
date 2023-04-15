#include "main.h"
/**
* _isdigit - function to check for a integer
 * @c: integer to be checked
 * Return: 1 if it is an integer and 0 if not
 */
int _isdigit(int c)
{
if ((c >= 38) && (c <= 47))
return (1);
else
return (0);
}
