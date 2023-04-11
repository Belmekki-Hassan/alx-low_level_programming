#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
* main - Program gets all int and display the sum
* @argc: nbr of cli args
* @argv: List name
* Return: if a !integer is  in the args passed display 1 else 0
*/
int main(int argc, char *argv[])
{
int i, j, length, sum;
char *tr;
if (argc < 2)
{
printf("0\n");
}
else
{
sum = 0;
for (i = 1; i < argc; i++)
{
tr = argv[i];
length = strlen(tr);
for (j = 0; j < length; j++)
{
if (isdigit(*(tr + j)) == 0)
{
printf("The args is not a number(integer) \n");
return (1);
}
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
}
return (0);
}
