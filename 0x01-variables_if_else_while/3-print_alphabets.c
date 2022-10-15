#include <stdio.h>

/**
 * main - prints the alphabets
 * alphabets are looped using the while loop
 * Return: always return 0
 */

int main(void)
{
char ch = 'a';
char up = 'A';
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	while (up <= 'Z')
	{
		putchar(up);
		up++;
	}
	putchar('\n');
	return (0);
}
