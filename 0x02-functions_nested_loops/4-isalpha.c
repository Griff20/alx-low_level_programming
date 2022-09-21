#include "main.h"

/**
 * _isalpha - checks for alphabet in string c
 * @c: char string
 * Return: 1 if letter fund, and 00 if not found
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
