#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 * @n: print from this number
 */
void print_to_98(int n)
{
if (n < 98)
{
for (int i = n; i <= 98; i++)
{
if (i != 98)
{
printf("%d, ", i);
}
else if ( i == 98)
{
printf("%d\n", i);
}
}
}
else if (n > 98)
{
for (int j = n; j >= 98;ji--)
{
if (n > 98)
{
printf("%d, ", j);
}
else if (n == 98)
{
printf("%d\n", j);
}
}
}
}
