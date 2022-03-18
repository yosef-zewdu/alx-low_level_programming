#include <unistd.h>

/**
 * _putchar - write character c to stdout
 *
 * Return: On sucess 1
 * On error -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
