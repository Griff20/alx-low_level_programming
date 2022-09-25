#include "main.h"

/**
 * string_toupper - all string element to upper case
 * @s: string char
 * Return: address of resulting string
 */

char *string_toupper(char *s)
{
	int m = 0;

	for (m = 0; s[0] != "\0"; s++)
	{
		if (s[m] >= 'a' && s[m] <= 'z')
		{
			s[m]= s[m] - 32;
		}
	}
	return (s);
}
