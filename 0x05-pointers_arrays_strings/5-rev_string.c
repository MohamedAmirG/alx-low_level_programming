#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: pointer
 */

void rev_string(char *s)
{
int i, len, len2, c;
len = 0;
len2 = 0;

while (s[i] != '\0')
{
len++;
}

len2 = len - 1;


for (i = 0; i < len / 2 ; i++)
{
c = s[i];
s[i] = s[len2];
s[len2--] = c;
}
}
