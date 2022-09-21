#nclude "main.h"

/**
 * print_last_digit - displays last digit
 * @mh: integer
 * Return: always 0
 */

int print_last_digit(int mh)
{
	int ain = mh % 10;

	if (ain < 0)
	{
		ain = -(ain);
		_putchar(ain + '0');
		return (ain);
	}
	else
	{
		_putchar(ain + '0');
		return (ain);
	}
	return (0);
}
	
