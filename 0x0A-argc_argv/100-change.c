#include <stdio.h>
#include <stdlib.h>

/**
 * main - print minimum number of coins to make change
 * @argc: counter
 * @argv: vector
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int res, i, j, k, l, m;

	i = 25;
	j = 10;
	k = 5;
	l = 2;
	m = 1;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	entry = atoi(argv[1]);

	if (entry <= 0)
	{
		printf("0\n");
		return (0);
	}

	if (entry >= i && entry % i == 0)
	{
		res = entry / i;
		printf("%d\n", res);
	}
	if (entry > i && entry % i != 0)
	{
		hold = entry / i;
		excess = 
