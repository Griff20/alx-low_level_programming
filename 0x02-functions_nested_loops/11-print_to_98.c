#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints to 98 from n
 * @n: integer to start countingn from
 * Return: always succesful 0
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n < 98; n++)
		{
			printf("%d, ", n);
		}
		printf("%d\n", 98);
	}
	else
	{
		for (n = n; n > 98; n--)
			printf("%d, ", n);
		printf("%d\n", 98);
	}
}
