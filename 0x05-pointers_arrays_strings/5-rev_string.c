#include "main.h"

/**
 * rev_string - reverses a string
 * @s: points to string to be reversed
 * Return: 0
 */

void rev_string(char *s)
{
	char tmp;
	int i, j, k;

	k = 0;
	j = 0;

	while (s[k] != '\0')
	{
		k++;
	}

	j = k - 1;

	for (i = 0; i < k / 2; i++)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j--] = tmp;
	}

}
