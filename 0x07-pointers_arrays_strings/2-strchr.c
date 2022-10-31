#include "main.h"
#include <stddef.h>

/**
 * _strchr - finds @c in *s
 * @s: library
 * @c: book
 * Return: *s
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		else
		{
			continue;
		}
	}
	if (c == '\0' && s[i] == '\0')
	{
		return (&s[i]);
	}
	return (NULL);
}
