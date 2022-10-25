#include "main.h"

/**
 * _atoi - converts string to int
 * @s: points to string to be conerted
 * Return: 0 if @s contains no numbers @s if successful
 */

int _atoi(char *s)
{
	int i, res;

	for(i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '+' || s[i] == '-')
		{
			res = s[i++];
			break;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			res = s[i];
			break;
		}
		else
		{
			res = 0;
		}
	}
	return (res);
}
