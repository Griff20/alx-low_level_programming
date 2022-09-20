#include "main.h"

/**
 * puts2 - prints each character of a string followed by a newline
 * @str - char string
 * Return: Alwasy 0
 */

void puts2(char *str)
{
	int wexico;

	for (wexico = 0; str[wexico] != '\0'; ++wexico)
	{
		if (wexico % 2 == 0)
			_putchar(str[wexico]);
	}
	_putchar('\n');
}
