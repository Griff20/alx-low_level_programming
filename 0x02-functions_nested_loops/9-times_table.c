#include  "main.h"

/**
 * times_table - prints 9 times table
 * Return: always 0
 */

void times_table(void)
{
	int a = 0;
	int b = 0;
	int xy;

	for (a = 0; a <= 9; ++a)
	{
		for (b = 1; b <= 9; ++b)
		{
			_putchar(',');
			_putchar(' ');

			xy = a * b;

			if (xy <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((xy / 10) + 48);
			}
			_putchar((xy % 10) + 48);
		}
		_putchar('\n')
	}
}

