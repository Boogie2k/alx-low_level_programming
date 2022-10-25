#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to be scrutinized
 * Return: @s.length
 */

int _strlen(char *s)
{
	int i, slength;

	slength = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		slength++;
	}
	return (slength);
}
