#include "main.h"

/**
 * _puts - prints a string to stdoutput
 * @str: points to string to be printed
 * Return: 0
 */

void _puts(char *str)
{
	int len;

	len = 0;

	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len++;
	}
	_putchar('\n');
}
