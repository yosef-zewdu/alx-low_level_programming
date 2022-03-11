#include <stdio.h>

/**
 * main - Entry point
 * Return:0
 */
int main(void)
{
char num, alpha;
for (num = '0'; num <= '9' ; num++)
{
putchar(num);
}
for (alpha = 'a'; alpha <= 'f' ; alpha++)
{
putchar(alpha);
}
putchar('\n');
return (0);
}
