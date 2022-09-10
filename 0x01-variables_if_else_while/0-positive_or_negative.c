#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: success(0)
 */
int main()
{
	int n;

	srand(time(0));
	n= rand() - RANDMAX / 2;
	if (n>0)
	{
		printf("%i is positive\n", n);
	}
	else if (n==0)
	{
		printf("%i is zero\n", n);
	}
	else if (n<0)
	{
		printf("%i is negative\n", n);
	}
	return(0)
}
