#include "main.h"
/**
 * binary_to_unit - function that convert binary to unit
 * @b: binary variable
 * Return: 0
 */
unsigned int binary_to_unit(const char *b)
{
unsigned int unit = 0;
int i = 0, length = 0;
if (!b)
return (0);
while (b[length + 1])
{
if (b[length] != '0' && b[length] != '1')
return (0);
length++;
}
for (i = 0; i <= length; i++)
{
if (b[i] == '1')
unit = unit + (1 << (length - 1));
}
return (unit);
}
