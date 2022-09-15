#include <stdio.h>
/**
 *
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char x[9] = "\_putchar";
	int a=0;
	while (a<8)
	{
		_putchar(x[a]);
		a++;
	}
	_putchar('\n');
	return (0);
}
