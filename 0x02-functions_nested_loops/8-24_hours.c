#include "main.h"

/**
 * jack_bauer - print lowercase letters 1
 * Return: no return value
 */
void jack_bauer(void)
{
	int i, j, k, l;

	for (l = 0; l < 3; l++)
	{
		for (k = 0; k < 4; k++)
		{
			for (i = 0; i < 6; i++)
			{
				for (j = 0; j <= 9; j++)
				{
					_putchar(l + '0');
					_putchar(k + '0');
					_putchar(':');
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar('\n');
				}
			}
		}
	}
}
