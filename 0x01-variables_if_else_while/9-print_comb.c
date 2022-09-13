#include <stdio.h>
/**
 * main - prints numbers from 0 to 9 separated by a comma followed by a space
 * Return: Always 0 (Success)
 */
int main(void)
{
	int slf = '0';

	while (slf <= '9')
	{
		putchar(slf);
		if (slf != '9')
		{
			putchar(',');
			putchar(' ');
		}
		slf++;
	}
	putchar('\n');

	return (0);
}
