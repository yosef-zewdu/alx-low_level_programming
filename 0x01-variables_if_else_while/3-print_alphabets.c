#include <stdio.h>

/**
 * main - Entry point
 * Return:0
 */
int main(void)
{
char alpha, Alp;
for (alpha = 'a'; alpha <= 'z' ; alpha++)
{
putchar(alpha);
if (alpha == 'z')
{
for (Alp = 'A'; Alp <= 'Z' ; Alp++)
{
putchar(Alp);
}
}
}
putchar('\n');
return (0);
}
