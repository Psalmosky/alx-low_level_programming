#include "main.h"

/**
 * _isupper - checks is a character is uppercase.
 *
 * @c: character
 * Return: 1 if c is uppercase and 0 otherwise.
 */
int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
	{
		return (1);
	}
	return (0);
}
