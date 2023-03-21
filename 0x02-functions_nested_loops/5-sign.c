#include "main.h"

/**
 * print_sign - main function
 *
 * @c: character to compare
 *
 * Return: 1 if 1, 0 if 0, -1 if -1
 *
 */


int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
	_putchar('0');
	return (0);
	}
}
