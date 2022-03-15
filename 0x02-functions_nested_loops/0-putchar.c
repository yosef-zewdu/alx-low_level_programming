#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char a[8] = "_putchar";
	int i;

	for (i = 0; i <= 7; i++)
	{
		_putchar(a[i]);
	}
	_putchar('\n');
	return (0);
}
