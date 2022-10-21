#include "holberton.h"
/**
 * more_numbers - check the code for Holberton School students
 * Return: success
 */
void more_numbers(void)
{
int i, j;
for (i = 0; i <= 9; i++)
{
for (j = 0 ; j <= 14; j++)
{
if (j >= 10)
_putchar('0' + (j / 10));
_putchar('0' + (j % 10));
}
_putchar('\n');
}
return;
}
