#include "main.h"

/**
 * rev_string - reverses given string
 * @s: char string
 */

void rev_string(char *s)
{
	int m, x;
	char we;

	for (m = 0; s[m] != '\0';)
	{
		++x;
	}
	
	for (x = 0; x < m / 2; ++x)
	{
		we = s[x];
		s[x] = s[m - 1 - x];
		s[m - 1 - x] = we;
	}
}
