#include "main.h"
#include <string.h>

/**
 * _strspn - gets length of prefix substring
 * @s: string to be checked
 * @accept: string to be found
 * Return: n
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = strspn(s, accept);

	return (i);
}
