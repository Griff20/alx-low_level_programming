#include "main.h"

/**
 * _strcat - appends src to dest
 * @src: char string
 * @dest: another char string
 * Return: dest pointer
 */

char *_strcat(char *dest, char *src)
{
	int m = 0;
	int n = 0;

	while (*(dest + m))
	{
		m++;
	}
        while ((*(dest + m) = *(src + n)))
	{
		m++;
		n++;
	}
	return (dest);
}
