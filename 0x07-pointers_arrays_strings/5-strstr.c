#include "main.h"
#include <string.h>

/**
 * _strstr - finds needle in haystack
 * @needle: to be found
 * @haystack: to be searched
 * Return: pointer to beginning of needle or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	char *p = haystack;

	haystack = strstr(p, needle);

	return (haystack);
}
