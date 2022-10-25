#include "main.h"

/**
 * puts2 - prints evry other char in a string
 * @str: points to string in question
 * Return: nothing
 */

void puts2(char *str)
{
	int len;

	len = 0;

	while (str[len] != '\0')
	{
		if (len % 2 == 0)
		{
			_putchar(str[len]);
		}
		len++;
	}
	_putchar('\n');
}
