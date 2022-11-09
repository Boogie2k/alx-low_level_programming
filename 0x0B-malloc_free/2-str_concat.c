#include "main.h"

/**
 * _strlen - count array
 * @a: array of element
 * Return: 1
 */

int _strlen(char *a)
{
	unsigned int b;

	b = 0;
	while (a[b] != '\0')
	{
		b++;
	}
	return (b);
}

/**
 * str_concat - back a pointer to array
 * @s1: array 1
 * @s2: array 2
 * Return: dynmaic array
 */

char *str_concat(char *s1, char *s2)
{
	char *c;
	unsigned int d, e, f;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	f = (_strlen(s1) + _strlen(s2) + 1);

	c = (char *) malloc(f * sizeof(char));

	if (c == 0)
	{
		return (NULL);
	}

	for (d = 0; *(s1 + d) != '\0'; d++)
		*(c + d) = *(s1 + d);

	for (e = 0; *(s2 + e) != '\0'; e++)
	{
		*(c + d) = *(s2 + e);
		d++;
	}
	return (c);
}
