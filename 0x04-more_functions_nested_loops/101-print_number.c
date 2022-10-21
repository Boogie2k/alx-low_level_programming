#include "main.h"
/**
 * print_number - check numbers
 * @n: input
 * Return: success
 */
void print_number(int n)
{
if (n < 0)
{
_putchar('-');
n = -n;
}
if (n / 10 != 0 && n < 100)
{
_putchar('0' + n / 10);
}
else if (n / 10 != 0 && n < 1000)
{
_putchar(n / 100 + '0');
}
else if (n / 10 != 0 && n < 10000)
{
_putchar(n / 1000 + '0');
}
_putchar(n % 10 + '0');
}
