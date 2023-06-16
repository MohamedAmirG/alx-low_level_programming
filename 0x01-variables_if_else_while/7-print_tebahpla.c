#include <stdio.h>
/**
 * main - prints the alphabet in lowercase.
(*
 * Return: 0 on success
 */
int main(void)
{
char p = 'z';

while(p >= 'a')
{
putchar(p);
p--;
}
putchar('\n');
return(0);
}
