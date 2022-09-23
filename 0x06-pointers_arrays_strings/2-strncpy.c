#include "main.h"

/**
 * _strncpy - copies string
 * @dest: char string
 * @src: char string
 * @n: maximum bytes
 * Return: dest pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int m = 0;

	while (m < n && *(src + m))
	{
		*(dest + m) = *(src + m);
		m++;
	}
	while (m < n)
	{
		*(dest + m) = '\0';
		m++;
	}
	return (dest);
}
