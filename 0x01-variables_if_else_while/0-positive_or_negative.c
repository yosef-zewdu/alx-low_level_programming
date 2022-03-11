#include <stdlib.h>
#include <time.h>
/**
 * main - n is positive or negative.
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
if (n > 0)
{
putchar("%d is postive", n);
}
else if (n == 0)
{
putchar("%d is zero", n)
}
else if (n < 0)
{
putchar("%d is negative", n)
}
return (0);
}
