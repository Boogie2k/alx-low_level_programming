#include "main.h"

/**
 * _strlen - count array
 * @s: array of elements
 * Return: 1
 */

int _strlen(char *s)
{
	unsigned int a;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}

/**
 * _strcpy - copy arrays
 * @src: array of element
 * @dest: dest array
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int a = 0;

	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}

/**
 * _strdup - array print a string
 * @str: array of element
 * Return:pointer
 */

char *_strdup(char *str)
{
	char *b;
	unsigned int c;

	if (str == 0)
	{
		return (NULL);
	}

	c = _strlen(str) + 1;
	b = (char *) malloc(c *sizeof(char));

	if (b == 0)
	{
		return (NULL);
	}
	_strcpy(b, str);
	return (b);
}
