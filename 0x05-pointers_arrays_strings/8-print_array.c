#include <stdio.h>
#include "main.h"

/**
 * print_array - print from array
 * @a: points to array
 * @n: number of elements to print
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (i == 0)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf(", %d", a[i]);
		}

		i++;
	}
	printf("\n");
}
