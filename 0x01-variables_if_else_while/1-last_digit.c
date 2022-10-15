#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assigns a random number to int n everytime
 * it executes, and prints it
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int y;
	srand(time(0));

	n = rand() - RAND_MAX /2;
	y = n%10;
	
	if(y > 5){
		printf("Last digit of %d is %d  and is greater than 5\n", n, y);
	}

	if(y == 0)
	{
		printf("Last digit of %d is 0 and is 0\n", n);
	}
	if(y < 6)
	{
		printf("the last digit of %d is %d and is less than 6 and not 0\n", n, y);
	}
	return 0;
}
