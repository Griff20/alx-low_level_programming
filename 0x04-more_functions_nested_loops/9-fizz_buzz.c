#include "main.h"
#include <stdio.h>

/**
 * main - prints numbers 1 to 100, then by a new line
 * with Fizz for all multiples all 3s
 * and Buzz for all multiples of 5
 * Return: Always 0 (Success)
 */
int main(void)
{
	int p;

	for (p = 1; p <= 100; p++)
	{
		if (p % 3 == 0 && p % 5 != 0)
		{
			printf(" Fizz");
		} else if (p % 5 == 0 && p % 3 != 0)
		{
			printf(" Buzz");
		} else if (p % 3 == 0 && p % 5 == 0)
		{
			printf(" FizzBuzz");
		} else if (p == 1)
		{
			printf(" %d", p);
		} else
		{
			printf(" %d", p);
		}
	}

	printf("\n");

	return (0);
}
