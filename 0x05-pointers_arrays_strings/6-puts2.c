#include "main.h"

/**
 * puts2 - prints each character of a string followed by a newline
 * @str - char string
 * Return: Alwasy 0
 */

void puts2(char *str)
{
	int mexico;

	for (mexico = 0; str[mexico] != '\0'; ++mexico)
	{
		if (mexico % 2 == 0)
		{
			_putchar(str[mexico]);
		}
		_putchar('\n');
	}
}
