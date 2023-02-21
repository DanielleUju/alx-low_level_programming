#include "main.h"

/**
 * print_alphabet_x10 - entry point
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char c = 'a', j;

	while (c <= 'z')
	{
		j = 0;
		while (j < 10)
		{
			_putchar(c);
			j++;
		}
		_putchar(c);
		c++;
	}
		_putchar('\n');

}
