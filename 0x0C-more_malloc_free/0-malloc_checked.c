#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - reserves space for an array
 * @b: value
 * Return: ptr or value 98
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(sizeof(b));
	if (!ptr)
	{
		exit(98);
	}
	return (ptr);
}
