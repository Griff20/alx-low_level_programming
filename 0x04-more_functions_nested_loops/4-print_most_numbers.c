#include "main.h"

/**
 * print_most_numbers - prints numbers 0 to 9,
 * omitting 2 and 4, followed by a new line
 */
void print_most_numbers(void)
{
	int m;

	for (m = 0; m < 10; m++)
	{
		if (m != 2 && m != 4)
		{
			_putchar(m + '0');
		}
	}
}
