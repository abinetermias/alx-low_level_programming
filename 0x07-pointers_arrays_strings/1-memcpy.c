#include "main.h"
/**
 * _memcpy - fills memory with another buffer.
 * @dest: source string
 * @src: string for filling
 * @n: length of buffer
 * Return: new string.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;
	unsigned char *destination = dest;
	const unsigned char *source = src;

	for (index = 0; index < n; index++)
	
		destination[index] = source[index];

	return (dest);
}
