#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints out the number of arguments passed to it
 * @argc: counter
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
