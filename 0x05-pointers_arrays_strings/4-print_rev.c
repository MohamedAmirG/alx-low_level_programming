#include "main.h"

/**
 * print_rev - function that prints a string, in reverse,
 * followed by a new line.
 * @s: string to be printed
 */

void print_rev(char *s)
{
int i, l;
i = 0;

while (s[i] != '\0')
{
i++;
}

l = i;

for (i = l - 1; s[i] >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
