#include "main.h"

/**
 * _strncat - concatenates src with dest
 * @scr: char string
 * @dest: char string
 * @m: maximum bytes to append
 * Return: pointer to new dest string
 */

char *_strncat(char *dest, char *src, int n)
{
	int t = 0;
	int y = 0;

	while (dest[t++])
	{
		y++;
	}
	for (t = 0; src[t] && t < n; t++)
	{
		dest[y++] = src[t];
	}
	return (dest);
}
