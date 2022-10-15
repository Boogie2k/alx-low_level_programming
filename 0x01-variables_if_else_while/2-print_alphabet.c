#include <stdio.h>

/**
 * main - prints the alphabets
 * alphabets are looped using the while loop
 * Return: always return 0
 */

int main (void)
{
	char ch = 'a';
	
	while(ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return 0;
}
