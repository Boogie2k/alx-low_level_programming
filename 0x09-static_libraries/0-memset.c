#include "main.h"

/**
 * _memset - set memory toa constant byte
 * @b: byte
 * @s: dest
 * @n: memory count
 * Return: s/
 */

char *_memset(char *s, char b, unsigned int n)
{
	int j = 0;
	unsigned int i;

	while (*(s + j) != '\0')
	{
		j++;
	}

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
