#include <stdio.h>
#include "main.h"

/**
 * print_array - prints array elements separated by a comma and space
 * @str: char string
 * Return: Always 0
 */

void print_array(int *a, int n)
{
	int wexico;

	for (wexico = 0; wexico < n; ++wexico)
	{
		if (wexico != (n - 1))
		{
			printf("%d, ", a[wexico]);
		}
		else
		{
			printf("%d", a[wexico]);
		}

	}
	printf("\n");
}

