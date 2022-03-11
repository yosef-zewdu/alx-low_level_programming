#include <stdlib.h>
#include <time.h>
/**
 * main - last digit
 * Return: 0
 */
int main(void)
{
int n, m;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
m = n % 10;
if (m > 5)
{
putchar("Last digit of %d is %d and is greater than 5", n, m);
}
else if (m == 0)
{
putchar("Last digit of %d is 0 and is 0", n)
}
else if (m < 6 && m != 0)
{
putchar("Last digit of %d is %d and is less than 6 and not 0", n, m)
}
return (0);
}
