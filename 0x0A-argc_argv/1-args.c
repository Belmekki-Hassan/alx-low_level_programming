#include "main.h"
#include <stdio.h>
/**
 * main - Display the number of arguments in the main
 * @argc: Nbr of cli arg
 * @argv: List name
 * Return: 0
 */
int main(int argc, char *argv[])
{
int i;
if (argc == 1)
{
printf("%d\n", argc - 1);
}
for (i = 0; *argv; i++)
{
argv++;
}
printf("%d\n", i - 1);
return (0);
}
