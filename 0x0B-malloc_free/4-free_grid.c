#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* free_grid - geting the free grid
*@grid: rows of the matrix
*@height: columns of a string
* Return: if success a pointer to a 2 dimensional array of integers else null
*/
void free_grid(int **grid, int height)
{
int i;
int *p;
for (i = 0; i < height; i++)
{
p = grid[i];
free(p);
}
free(grid);
}
