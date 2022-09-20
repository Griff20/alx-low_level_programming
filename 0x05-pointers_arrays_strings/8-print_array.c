#include <stdio.h>
#include "main.h"

/**
 * print_array - prints elements separated by comma & space
 * @str: char string
 * @n: input array
 * @a: input array
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

