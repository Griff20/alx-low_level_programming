#include "main.h"

/**
 * _strlen - gives length of providede string
 * @s - char pointer
 * Return: Always success
 */

int _strlen(char *s)
{
	int myopia;

	myopia = 0;
	while (s[myopia])
		myopia++;
	return(myopia);
}
