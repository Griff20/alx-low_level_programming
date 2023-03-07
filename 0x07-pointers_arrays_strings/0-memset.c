#include "main.h"

/**
 * _memset - function that fills memory with constant byte
 *
 *  @s: input char pointer represents the pointer
 *
 *  @b: input variable of char type 
 *
 *  @n: unsigned int variable the number of bytes to be filled
 *
 *  Return: A pointer to the filled memory area @s
 */


char *_memset(char *s, char b, unsigned int n)
{
	while (n--)
		*(s + n) = b;
	return (s);
}
