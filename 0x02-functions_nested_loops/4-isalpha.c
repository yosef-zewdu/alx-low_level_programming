#include "main.h"

/**
 * _isalpha - print lowercase letters 1
 * @c : characterr to check
 * Return: no return value
 */
int _isalpha(int c)
{
	int result;

	if (c > 66 && c < 123)
		result = 1;
	else
		result = 0;
	return (result);
}
