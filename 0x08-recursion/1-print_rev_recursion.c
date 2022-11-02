#include "main.h"

/**
 * getEnd - gets the end of a string;
 * @s: string to be reversed
 */

void getEnd(char *s)
{
	if (*s != '\0')
	{
		s++;
		getEnd(s);
	}
	_putchar(*s);
}

/**
 * _print_rev_recursion - prints a string in reverse using recursion
 * @s: string in question
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
		getEnd(s);
	else
		_putchar('\n');
}
