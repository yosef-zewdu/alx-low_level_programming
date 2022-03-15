#include "main.h"

/**
 * print_sign - print lowercase letters 1
 * @n : character to check
 * Return: no return value
 */
int print_sign(int n)
{
	int result;

	if (n > 0)
	{
		result = 1;
		_putchar('+');
	}
	else if (n < 0)
	{
		result = -1;
		_putchar('-');
	}
	else if (n == 0)
	{
		result = 0;
		_putchar('0');
	}
	return (result);
}
