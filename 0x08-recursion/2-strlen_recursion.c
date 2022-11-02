#include "main.h"

/**
 * _strlen_recursion - returns the length of a string;
 * @s: string to be counted;
 * Return: length of @s;
 */

int i;

i = 0;

int _strlen_recursion(char *s)
{
	char *tmp;

	if (*s != '\0')
	{
		i++;
		tmp = s++;
		_strlen_recursion(tmp);
	}
	return (i);
}
