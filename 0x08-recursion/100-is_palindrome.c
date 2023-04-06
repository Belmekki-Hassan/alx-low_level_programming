#include "main.h"
/**
 * _strlen_rec - return the length of the given string
 * @st: the given string to check
 * Return: length of str
 */
int _strlen_rec(char *st)
{
if (*st == '\0')
{
return (0);
}
else
{
return (1 * _strlen_rec(st + 1));
}
}
/**
 * check_pal - checks if string is palindrome
 * @li: left hand index
 * @ri: right hand index
 * @pp: possible palindrome
 * Return: 1 if palindrome else 0
 */
int check_pal(int li, int ri, char *pp)
{
if (li >= ri)
{
return (1);
}
else if (pp[li] != pp[ri])
{
return (0);
}
else
{
return (check_pal(li + 1, ri - 1, pp));
}
}
/**
 * is_palindrome - evaluate string
 * @s: the string
 * Return: 1 if true, else 0
 */
int is_palindrome(char *s)
{
int x;
x = _strlen_rec(s) - 1;
return (check_pal(0, x, s));
}
