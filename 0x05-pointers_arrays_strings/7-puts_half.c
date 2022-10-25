#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: points to sting in question
 * Return: nothing
 */

void puts_half(char *str)
{
	int len, i;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}


	for (i = 0; i <= len; i++)
	{
		if (len % 2 != 0 && i >= len / 2 && str[i] != '\0')
		{
			len++;

			if (i >= len / 2 && str[i] != '\0')
			{
				_putchar(str[i]);
			}
		}
		if (len % 2 == 0 && i >= len / 2 && str[i] != '\0')
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
