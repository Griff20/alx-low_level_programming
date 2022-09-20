#include "main.h"

/**
 * puts2 - prints each character of a string followed by a newline
 * @str - char string
 * Return: Alwasy 0
 */

void puts2(char *str)
{
	int m;

	for (m = 0; str[m] != '\0'; ++m)
	{
		if (m % 2 == 0)
		{
			_putchar(str[m]);
		}
		_putchar('\n');
	}
}
