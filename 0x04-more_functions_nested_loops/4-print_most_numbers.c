#include "main.h"

/**
 * print_most_numbers - print alphabets what
 *
 * Return: no return value
 */
void print_most_numbers(void)
{
	char alpha;

	for (alpha = '0'; alpha <= '9'; alpha++)
	{
		if (alpha != '2' && alpha != '4')
			_putchar(alpha);
	}
	_putchar('\n');
}
