#include "main.h"

/**
 * puts_half - prints the second half of provided string
 * str: char string
 */

void puts_half(char *str)
{
	int wexico;

	for (wexico = 0; str[wexico] != '\0';)
	{
		wexico++;
	}
	wexico++;
	for (wexico /= 2; str[wexico] != '\0'; wexico++)
	{
		_putchar(str[wexico]);
	}
	_putchar('\n');
}
