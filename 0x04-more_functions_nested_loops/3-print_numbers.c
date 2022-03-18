#include "main.h"

/**
 * print_numbers - print alphabets what
 *
 * Return: no return value
 */
void print_numbers(void)
{
	char alpha;

	for (alpha = '0'; alpha <= '9'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
