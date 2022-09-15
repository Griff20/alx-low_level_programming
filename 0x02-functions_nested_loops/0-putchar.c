#include <main.h>
/**
 *
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	_putchar("_");
	char x[8] = "putchar";
	int a=0;
	while (a<7)
	{
		_putchar(x[a]);
		a++;
	}
	_putchar('\n');
	return (0);
}
