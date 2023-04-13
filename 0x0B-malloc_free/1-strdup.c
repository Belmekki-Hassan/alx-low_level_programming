#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _strdup - Entry point
* @str: Duplicated String
* Return: if success display duplicated string else display null
*/

char *_strdup(char *str)
{
char *strnv = NULL;
unsigned int i;
int n;
if (str == NULL)
return (NULL);
for (n = 0; str[n] != '\0'; n++)
{
}
strnv = (char *)malloc(n + 1 * sizeof(char));
if (strnv != NULL)
{
for (i = 0; str[i] != '\0'; i++)
strnv[i] = str[i];
}
else
{
return (NULL);
}
strnv[i] = '\0';
return (strnv);
}
