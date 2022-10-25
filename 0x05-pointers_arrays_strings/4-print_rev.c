#include "main.h"

/**
 * print_rev - print in reverse
 * @s: points to string to be printed
 * Return: 0
 */

void print_rev(char *s)
{
	int len, slen;

	slen = 0;
	len = 0;

	while (s[len] != '\0')
	{
		slen++;
		len++;
	}

	while (slen >= 0)
	{
		if (s[slen] == '\0')
		{
		}

		else
		{
			_putchar(s[slen]);
		}
		slen--;
	}
	_putchar('\n');
}
