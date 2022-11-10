#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates mem for array of nmenb elements of size
 * bytes each
 * @nmemb: no of members of array
 * @size: size of each nmemb
 * Return: null or ptr to array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i <= nmemb)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
