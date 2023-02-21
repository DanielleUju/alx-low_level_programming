#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - A program that prints alphabets in the lowercase.
 *
 * Return: Always 0. 
 */
int main(void)
{
	int ch = 'a';

	while (ch <= '2')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
