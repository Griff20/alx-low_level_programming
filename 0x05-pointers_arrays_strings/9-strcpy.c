#include "main.h"

/**
 * _strcpy - copies string add null byte to src
 * @dest: char string
 * @src: char string
 * Return: The pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int wexix = -1;

	for (wexix = 0; src[wexix] != '\0'; wexix++)
	{
		dest[wexix] = src[wexix];
	}
	dest[wexix] = '\0';

	return (dest);
}
