#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Take two intger and prints the product
 * @argc: nbr of cli args
 * @argv: List name
 * Return: 1 if not enoug args else 0
 */
int main(int argc, char *argv[])
{
int i, j;
if (argc == 1 || argc == 2)
{
printf("Not Enough args passed \n");
return (1);
}
else
{
j = 1;
for (i = 0; i < 3; i++)
{
j *= atoi(argv[i]);
}
printf("%d\n", j);
}
return (0);
}
