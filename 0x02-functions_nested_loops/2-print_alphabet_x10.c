#include "main.h"

/**
 * print_alphabet_x10 - print alphabets 10 times
 *
 * Return: no return value
 */
void print_alphabet_x10(void)
{
	char alpha;
	int i = 0;

	while (i < 10)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
		i++;
	}
}
