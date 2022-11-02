#include "main.h"

/**
 * factorial - gets the factorial of @n
 * @n: number whose factorial is to be calculated
 * Return: factorial of n or -1 for error
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
