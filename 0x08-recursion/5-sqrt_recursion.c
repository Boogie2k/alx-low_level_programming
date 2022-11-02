#include "main.h"

/**
 * tester - test square root
 * @a: var
 * @b: var
 * Return: int
 */

int tester(int a, int b);

/**
 * _sqrt_recursion - get the sqqrt of n with recursion
 * @n: var
 * Return: sqrt or -1
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (tester(1, n));
}

/**
 * tester - tests for square root
 * @a: var
 * @b: var
 * Return: int
 */

int tester(int a, int b)
{
	if (a * a > b)
		return (-1);
	else if (a * a == b)
		return (a);
	else
		return (tester(a + 1, b));
}
