#include "main.h"
/**
 * _strlen - this function return the length of a string
 * @s: character input
 * Return: the length of the @s string
 */
int _strlen(char *s)
{
int i = 1, sum = 0;
char c1 = s[0];
while (c1 != '\0')
{
sum++;
c1 = s[i++];
}
return (sum);
