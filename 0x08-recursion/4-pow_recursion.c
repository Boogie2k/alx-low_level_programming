#include "main.h"

/**
 * _pow_recursion - returns x exponential y
 * @x: base
 * @y: power
 * Return: result or -1
 */

int _pow_recursion(int x, int y)
{
	int res;

	res = 0;
	if (y < 0)
		res = -1;

	if (y == 0)
		res = 1;

	if (y > 0)
		res = x * _pow_recursion(x, (y - 1));

	return (res);
}
