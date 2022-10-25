#include "main.h"

/**
 * swap_int - swaps values of a and b
 * @a: int arg
 * @b: int arg
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int holder;

	holder = *a;
	*a = *b;
	*b = holder;
}
