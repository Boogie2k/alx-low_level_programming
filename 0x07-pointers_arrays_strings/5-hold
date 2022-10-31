#include "main.h"

/**
 * _strstr - finds needle in haystack
 * @needle: to be found
 * @haystack: to be searched
 * Return: pointer to beginning of needle or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, start;

	i = j = 0;

	while (haystack[i] != '\0')
	{
		while (needle[j] != '\0')
		{
			if (needle[j] == haystack[i] && needle[j++] == haystack[i++])
			{
				start = i;
			}
			j++;
		}
		i++;
	}
	return (&haystack[start]);
}
