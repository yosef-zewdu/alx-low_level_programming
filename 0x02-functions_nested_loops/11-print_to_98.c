#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print lowercase letters 1
 * @n : character to be added
 * Return: result
 */
void print_to_98(int n)
{
	int k;

	if (n <= 98)
	{
		for (k = n; k <= 98; k++)
		{
			if (k != 98)
				printf("%d, ", k);

			else if (k == 98)
				printf("%d\n", k);
		}
	}
	else if (n >= 98)
	{

		for (k = 98; k <= n; k++)
		{
			if (k != n)
				printf("%d, ", k);

			else if (k == n)
				printf("%d\n", k);
		}
	}
}
