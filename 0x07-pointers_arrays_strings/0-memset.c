#include "main.h"

/**
 * _memset - Fills the block of memory
 * @s: starting address
 * @n: no of bytes
 * Return: Always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n-1] = b;
		n--;
	
	}
	return (s);
}
