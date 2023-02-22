#include "main.h"

/**
 * print_sign - A program that prints the sign of a number
 *
 * @n: the parameter to be printed
 *
 * Return: 1, 0 and -1
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+')
		_putchar(',')
		_putchar(' ')
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0')
		_putchar(',')
		_putchar(' ')
		return (0);
	}
	else
	{
		_putchar('-')
		_putchar(',')
		_putchar(' ')
		return (-1)
	}
}
