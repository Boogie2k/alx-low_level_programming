#include "main.h"
/**
* print_square -checks for upper case
*
* @size: size
* Return: 1
*/
void print_square(int size)
{
int i;
int j;
if (size <= 0)
{
_putchar('\n');
}
for (i = 1; i <= size; i++)
{
for (j = 1; j <= size; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
