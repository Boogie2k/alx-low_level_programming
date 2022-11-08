#include <stdio.h>

/**
 * main - entry point
 * argc - counts the number of argument
 * argv - contains the argument in the array
 * return 0 - terminates the program
 */

int main (int argc, char *argv[]){
	int i;

	for(i = 0; i < argc; i++)
	{
		printf("%d\n", i);
	}

	return (0);
}

