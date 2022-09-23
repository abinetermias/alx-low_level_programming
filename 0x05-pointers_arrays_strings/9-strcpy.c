#include "main.h"

/**
 * __strcpy - copy
 * @dest: This is destiny
 * @src: This is the copy
 *
 * Return: this retrun copy
 */

char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0'
	return (start);
}	
