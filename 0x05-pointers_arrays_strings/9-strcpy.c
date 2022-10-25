#include "main.h"

/**
 * _strcpy - copies string from src to dest
 * @src: source
 * @dest: destination
 * Return: pointer to @dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	char *res;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	res = dest;
	return (res);
}
