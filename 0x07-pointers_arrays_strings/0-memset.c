#include "main.h"

/**
 * _memset -> this memory set function
 * @s: string
 * @b: a charcter
 * @n: an integer
 * Return: Always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

