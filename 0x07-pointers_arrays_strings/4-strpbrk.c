#include "main.h"
#include <string.h>

/**
 * _strpbrk - first occurence of any byte in accept within s
 * @accept: needle
 * @s: haystackR
 * Return: s or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	char *ch = s;

	ch = strpbrk(s, accept);
	s = ch;

	return (s);
}
