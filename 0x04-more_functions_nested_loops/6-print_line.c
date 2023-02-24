#include "main.h"

/**
 * print_line - draws line in terminal
 * @n: number of times to print (_)
 */
void print_line(int n)
{
  int x;
  int n;
  
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		for (x = 1; x <= n; x++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
