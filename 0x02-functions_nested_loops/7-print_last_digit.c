#include "main.h"

/**
 * print_last_digit - print the last digit of a given number.
 * @n: Number used to find the last digit.
 * Return: last digit of number.
 */
int print_last_digit(int n)
{
int last;
last = n % 10;
if (last < 0)
{
last = last * -1;
}
_putchar('0' + last);
return (last);
}

