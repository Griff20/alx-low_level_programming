#include "main.h"

/**
 * print_diagonal - draws diagonal line on terminal
 * @n: number of times to print (\)
 */
void print_diagonal(int n)
{
  int o;
  int p;
  int n;
  
	if (n <= 0)
	{
		_putchar('\n');
	} else
  {
		for (o = 0; o < n; o++)
		{
			for (p = 0; p < n; p++)
			{
				if (p == o)
					_putchar('\\');
				else if (p < o)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
