#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: the number to check
 *
 * Return: the last digit
 */
int print_last_digit(int n)
{
int a;
a = n % 10;
_putchar(a);
return (n % 10);
}
