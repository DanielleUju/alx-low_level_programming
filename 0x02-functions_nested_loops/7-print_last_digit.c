#include "main.h"

/**
 * print_last_digit - function that prints last digit
 *
 * @a: function parameter
 *
 * Return: c always
 */

int print_last_digit(int a)
{
	int a;

	c = a % 10;
	if (a < 0)
		c = -(a);
	_putchar(c + '0');
	return (c);
}
