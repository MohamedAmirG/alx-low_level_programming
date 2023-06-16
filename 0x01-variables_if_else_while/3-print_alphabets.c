#include <stdio.h>
/**
 * main - prints the alphabet in lowercase.
(*
 * Return: 0 on success
 */
int main(void)
{
char p = 'a';
char c = 'A';

while(p <= 'z')
{
putchar(p);
p++;
}
while(c <= 'Z')
{
putchar(c);
c++;
}
putchar('\n');
return(0);
}
