#include <stdio.h>

/**
 * main - Entry point
 * Return:0
 */
int main(void)
{
char alpha;
for (alpha = 'a'; alpha <= 'z' ; alpha++)
{
if (alpha == 'q' || alpha == 'e')
{
continue;
}
putchar(alpha);
}
putchar('\n');
return (0);
}
