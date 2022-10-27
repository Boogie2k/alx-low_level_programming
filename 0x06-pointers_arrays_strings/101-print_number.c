#include "main.h"

/**
 * print_number - prints int;
 * @n: int to be printed
 */

void print_number(int n)
{
	if (n < 10)
	{
		_putchar(n + '0');
	}
	if (n > 9 && n < 100)
	{
		_putchar((n % 10) + '0');
		_putchar((n / 10) + '0');
	}
	if (n == 0)
	{
		_putchar('0');
	}
}
