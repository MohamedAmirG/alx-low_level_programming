#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer to the first value
 * @b: pointer to the second value
 */

void swap_int(int *a, int *b)
{
int s;
s = *a;
*a = *b;
*b = s;
}
