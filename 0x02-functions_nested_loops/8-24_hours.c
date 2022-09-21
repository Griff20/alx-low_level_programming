#include "main.h"

/**
 *jack_bauer - everyday minute
 *Returs: always 0
 */

void jack_bauer(void)
{
	int OURS;
	int MINTS;

	for ( OURS = 0; OURS <24; OURS++)
	{
		for (MINTS = 0; MINTS < 59; MINTS++)
		{
			_putchar (OURS / 10 + '0');
			_putchar (OURS % 10 + '0');
			_putchar (':');
			_putchar (MINTS / 10 + '0');
			_putchar (MINTS % 10 + '0');
			_putchar ('\n');
		}
	}
}
