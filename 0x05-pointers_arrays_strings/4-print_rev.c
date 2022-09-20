#include "main.h"

/**
 * print_rev - displays string reverse on stndrd output
 * @s: string provided
 * Return: Always null
 */

void print_rev(char *s)
{
	int m = 0;

	while (s[m])
	{
		m++;
	}
	while (m--)
	{
		_putchar(s[m])
	}
	_putchar("\n")
}
