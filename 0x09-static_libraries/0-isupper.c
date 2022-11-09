#include "main.h"
#include <ctype.h>

/**
 * _isupper - is upper
 * @c: char
 * Return: int
 */

int _isupper(int c)
{

	int i = isupper(c);

	if (i > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
