#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: String to be searched.
 * @c: The character to be located.
 *
 * Return: If c is found - a ointer to the first occurence.
 * 		If c is not found - NULL.
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}
