#include "main.h"

/**
 * create_array - array prints string
 * @size: number of element array
 * @c: char
 * Return: pointer
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int b;

	if (size == 0)
	{
		return (NULL);
	}

	a = (char *) malloc(size * sizeof(c));

	if (a == 0)
	{
		return (NULL);
	}
	else
	{
		b = 0;

		while (b < size)
		{
			*(a + b) = c;
			b++;
		}
		return (a);
	}
}
