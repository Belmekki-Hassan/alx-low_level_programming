#include "main.h"
#include <stdio.h>

/**
* _strcat - a concatenates two strings
*@dest: copy to
*@src: copy from
* Return: concat of two strings
*/
char *_strcat(char *dest, char *src)
{
char *str = dest;
while (*dest != '\0')
{
dest++;
}
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (str);
}
