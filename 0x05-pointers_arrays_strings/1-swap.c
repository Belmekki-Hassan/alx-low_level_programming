#include "main.h"
/**
 * swap_int - swap values of two numbers
 * @a: the first number to be swapped
 * @b: the second number to be swapped
 */
void swap_int(int *a, int *b)
{
int mix = *a;
*a = *b;
*b = mix;
}
