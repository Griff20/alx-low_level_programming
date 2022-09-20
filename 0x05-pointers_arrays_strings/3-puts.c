#include "main.h"

/**
 * _puts - Shows string on standard output
 * @str: String provided
 * Return: Always 0
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
			++str;
	}
	_putchar('\n');
}
