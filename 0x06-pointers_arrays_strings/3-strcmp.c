#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: char string
 * @s2: char second string
 * Return: difference between the two string lengths
 */

int _strcmp(char *s1, char *s2)
{
	int m = 0;

	while (*(s1 + m) && *(s2 + m) && (*(s1 + m) == *(s2 + m)))
	{
		m++;
	}
	return (*(s1 + m)-*(s2 + m));
}
