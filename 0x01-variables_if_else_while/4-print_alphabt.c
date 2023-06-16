#include <stdio.h>
/**
 * main - prints the alphabet in lowercase.
(*
 * Return: 0 on success
 */
int main(void)
{
char p = 'a';

while(p <= 'z')
{
if(p == 'q' || p == 'e')
{
p++;
}
putchar(p);
p++;
}
putchar('\n');
return(0);
}
