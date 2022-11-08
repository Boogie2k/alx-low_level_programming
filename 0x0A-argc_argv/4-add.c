#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - add positive numbers
 * @argc: counter
 * @argv: vector
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int res, i, j;

	res = i = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
	}

	for (i = 1; i < argc; i++)
	{
		res += atoi(argv[i]);
	}
	printf("%d\n", res);
	return (0);
}
