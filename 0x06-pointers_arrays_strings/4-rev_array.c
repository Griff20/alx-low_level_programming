#include "main.h"

/**
 * reverse_array - reverses contenets of givemnen array
 * @a: array integer to be reversed
 * @n: array elemsts in numbers
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int x = 0;
	int m = 0;

	for (x = n-1; x >= n/2; x--)
	{
		m = a[n - 1 - x];
		a[n - 1 - x] = a[x];
		a[x] = m;
	}
}
