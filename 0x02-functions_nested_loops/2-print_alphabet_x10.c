#include "main.h"

/**
 * print_alphabet_x10 - publish alphabets in stnd output
 * Return: always 0
 */

void print_alphabet_x10(void)
{
	char wexics;
	int number = 1;

	while (number <= 10)
	{
		wexics = 'a';
		while (wexics <= 'z')
		{
			_putchar(wexics);
			wexics++;
		}
		_putchar('\n');
		number++;
	}
}
