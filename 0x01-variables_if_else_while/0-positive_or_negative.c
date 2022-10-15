#include <stdio.h>
#include <stdlib.h>

/*
 * the first statement would check if the output is positive
 *  the second statement would check if the output is negative
 *  the last state ment would check if the number is zero
 */

int main()
{
	int ran = 98;
	int neg = -98;
	int zer = 0;

	if(ran > 0)
	{
		printf("%d is positive \n", ran);
	}

	if(zer ==0)
	{
		printf("%d is zero \n", zer);
	}

	if (neg < 0)
	{
		printf("%d is negative \n", neg);
	}
	return 0;
}
