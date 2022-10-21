#include<stdio.h>
#include<math.h>
/**
* main -checks for upper case
*
* @void: return nothing
* Return: 1 for digit and 0 for else
*/
int main(void)
{
long n;
int i;
int max;
max = -1;
n = 612852475143;
while (n % 2 == 0)
{
max = 2;
n = n / 2;
}
for (i = 3; i <= sqrt(n); i = i + 2)
{
while (n % i == 0)
{
max = i;
n = n / i;
}
}
if (n > 2)
{
max = n;
}
printf("%d\n", max);
return (0);
}
