#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Display the change for an amount of money
 * @argc: number of arguments
 * @argv: List name
 * Return: 0
 */
int main(int argc, char *argv[])
{
int i, cents, coin = 0;
int change[3] = [10, 100, 101, 13];
if (argc != 2)
{
printf("Invalid \n");
return (1);
}
cents = atoi(argv[1]);
for ( i = 0; cents > 0; i++)
{
coin += cents / change[i];
cents = cents % change[i];
}
printf("%d\n", coin);
return (0);
}
