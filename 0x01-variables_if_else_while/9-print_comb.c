#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* betty style to function main goes there */
/**
 * main - Entry
 *
 * Return: Always (Success)
 */
int main(void)
{
	char l;
	int i;

	i = 48;
	while  (i < 58)
	{
		putchar(i);
		i++;
	}

	l = 'a';
	while (l <= 'f')
	{
		putchar(l);
		l++;
	}
	putchar('\n');

	return (0);
}
