#include "main.h"

/**
 * print_last_digit - print lowercase letters 1
 * @n : no character to check
 * Return: no return value
 */
int print_last_digit(int n)
{
	int result;

	if (n < 0)
		n = -1 * n;
	result = n % 10;
	_putchar(result + '0');
	return (result);
}
