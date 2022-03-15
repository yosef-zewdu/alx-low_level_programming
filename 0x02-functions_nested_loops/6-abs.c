#include "main.h"

/**
 * _abs - print lowercase letters 1
 * @n : no character to check
 * Return: no return value
 */
int _abs(int n)
{
	int result;

	if (n > 0)
	{
		result = n;
	}
	else if (n < 0)
	{
		result = -1 * n;
	}
	else if (n == 0)
	{
		result = 0;
	}
	return (result);
}
