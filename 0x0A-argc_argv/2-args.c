#include "main.h"
#include <stdio.h>
/**
 * main - Display all main args
 * @argc: Nbr of cli args
 * @argv: List name
 * Return: 0
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
printf("%s\n", argv[i]);
return (0);
}
