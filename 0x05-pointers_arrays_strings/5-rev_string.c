#include "main.h"

/**
 * rev_string - reverses given string
 * @s: char string
 */

void rev_string(char *s)
{
	int m, x;
	char mexi;

	for (m = 0; s[m] != '\0';)
	{
		++x;
	}
	
	for (x = 0; x < m / 2; ++x)
	{
		mexi = s[x];
		s[x] = s[m - 1 - x];
		s[m - 1 - x] = mexi;
	}
}
