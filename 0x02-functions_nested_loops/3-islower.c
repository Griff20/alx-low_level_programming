#include "main.h"

/**
 * _islower - checks and prints lower elements of string
 * @c: char ctring
 * Return: 0 if succesful, 1 if it finds none
 */

int _islower(int c)
{
	if (c >= 'a' && c  <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
