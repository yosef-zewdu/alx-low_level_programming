#include "main.h"

/**
 * _islower - print lowercase letters 1
 * @c : characterr to check
 * Return: no return value
 */
int _islower(int c)
{
	int result;

	if (c > 96 && c < 123)
		result = 1;
	else
		result = 0;
	return (result);
}
