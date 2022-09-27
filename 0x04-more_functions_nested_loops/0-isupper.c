#include "main.h"


/**
 * _isupper - function to check if character is uppercase
 *
 * @c: checks input of function
 * Return: returns 1 if 'c' is uppercase otherwise always 0 (Success)
 */

int _isupper(int c)
{
	
		if (c >= 'A' && c <= 'Z')
			return (1);

		else 
			return (0);
}

