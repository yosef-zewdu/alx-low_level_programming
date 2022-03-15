#include "main.h"

/**
 * times_table - print lowercase letters 1
 * Return: no return value
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{

			k = j * i;
			if (k < 10)
			{
				if (j != 0)
					_putchar(' ');
				_putchar(k + '0');
			}
			else
			{
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
			if (j == 9)
			{
				_putchar('\n');
				continue;
			}

			_putchar(',');
			_putchar(' ');
		}
	}
}
